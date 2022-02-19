#include <bits/stdc++.h>
#include <fstream>
using namespace std;
fstream svList;
struct sv
{
    string maSV;
    string name;
    double gpa;
};
void them(int n)
{
    svList.open("danhSachSV.bin", ios :: out | ios :: app | ios :: binary);
    sv sinhVien[n];
    for(int i = 0; i < n; i++)
    {
        cin >> sinhVien[i].maSV;
        cin.ignore();
        getline(cin, sinhVien[i].name);
        cin >> sinhVien[i].gpa;
        svList << i + 1 << " " << sinhVien[i].maSV << " " << sinhVien[i].name << " " << sinhVien[i].gpa << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    switch (t)
    {
        case 1:
            cout << "Nhap so sinh vien muon them: ";
            int n;
            cin >> n;
            them(n);
            break;
        case 2:
            break;
        default: break;
    }
}