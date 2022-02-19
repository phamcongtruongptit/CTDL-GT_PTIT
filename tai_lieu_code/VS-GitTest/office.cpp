#include "office.h"
Office :: Office(){};
void Office :: addMember()
{
	Member x = Member();
	x.inputMember();
	x.setID();
	x.getID();
	mbList.push_back(x);
}
void Office :: outputMember()
{
	for(int i = 0; i < mbList.size(); i++)
    {
		Member mb = mbList[i];
		mb.outputMember();
		cout << "***************************************************************\n";
	}
}
void Office :: addWork()
{
	works x = works();
	x.inputWork();
	x.setIDWork();
	x.getIDWork();
	worksList.push_back(x);
}
void Office :: outputWork()
{
	for(int i = 0; i < worksList.size(); i++)
    {
		works w = worksList[i];
		w.outputWork();
		cout << "***************************************************************\n";
	}
}
void Office :: addDivisionOfWork()
{
	cout << "Cac vi tri cong viec da co trong danh sach: ";
	for(int i = 0; i < worksList.size(); i++) cout << worksList[i].getNameWork() << "  ";
	listRoster.resize(mbList.size());
	for(int i = 0; i < mbList.size(); i++)
    {
	    Member mb = mbList[i];
		jobP ros;
		ros.setMember(mb);
		cout << "\nNhap vao so luong vi tri cong viec " << mb.getName() << " mong muon: ";
		int n;
		cin >> n;
		cin.ignore();
		vector<works> w;
		for (int j = 0; j < n; j++)
        {
		    cout << "Vi tri cong viec thu: " << j + 1 << "\n";
		    works x = works();
			x.inputWork();
			x.inputDays();
			w.push_back(x);
			ros.setWork(w);
		    jobPList[i] = ros;
		}
	}
}
bool cmp1(jobP a, jobP b)
{
	return a.getMember().getName() > b.getMember().getName();
}
void Office :: sortByName()
{
	sort(jobPList.begin(), jobPList.end(), cmp1);
}
void Office :: sortByDays()
{
	for (int i = 0; i < jobPList.size(); i++)
    jobPList[i].sortByDays();
}
void Office :: outputDivisionOfWork()
{
	for(int i = 0; i < jobPList.size(); i++)
    {
		cout << "Thanh vien thu: " << i + 1 << "\n";
		jobP ros = jobPList[i];
		ros.getMember().outputMember();
		vector<works> w = ros.getWork();
		for(int i = 0; i < w.size(); i++)
        {
		   	w[i].outputWork();
		   	w[i].outputDays();
		}
		cout<<"***************************************************************\n";
	}
}
void Office :: sumOfSalary()
{
	for(int i = 0; i < jobPList.size(); i++)
    {
		cout << "Tong tien thuong cua thanh vien thu: " << i + 1 << "\n";
		jobP ros = jobPList[i];
		cout << "***************************************************************\n";
		vector<works> w = ros.getWork();
		float s = 0;
		for(int i = 0; i < w.size(); i++) s += w[i].getBonus();
		s += ros.getMember().getSalary() * 1.1f;
		cout << s << "\n";
	}
}