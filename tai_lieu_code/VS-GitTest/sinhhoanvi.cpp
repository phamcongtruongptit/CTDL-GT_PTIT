//Sinh hoan vi cua n phan tu 1..n
#include <iostream>
using namespace std;
int n, s[100], i, count=1;
bool cauhinhcuoi=false;
void print(){	//In mot cau hinh
	cout << "\n" << count++ << ": ";
	for(int j=1; j<=n; j++)	cout << s[j] << " ";
	return;
}
void sinh(){	//Sinh hoan vi tiep theo neu hoan vi hien tai chua phai la cuoi cung
	//Tim phan tu j dau tien tu phai sang trai: s[j]<s[j+1], chi so luu trong bien j
	int j=n-1;
	while((j>0) && (s[j]>=s[j+1]))  j--;
	cout<<j<<"ahiihi   ";
	//Cau hinh cuoi cung: bao cho ham main, dung ham sinh
	if(j==0){
		cauhinhcuoi=true;	return;
	}
	//Chua phai cau hinh cuoi cung (j!=0): sinh cau hinh tiep theo
	//Tu 1 den j-1: giu nguyen; s[j] = s[k] voi s[k] la phan tu be nhat ben phai j va s[k]>s[j]
	//Tim s[k] be nhat ben phai s[j] ma s[k]>s[j]
	int k=n;
	while(s[k]<=s[j])	k--;	
	int tmps=s[j];	s[j]=s[k]; s[k]=tmps;
	//Lat nguoc doan j+1 den n
	int l=j+1, r=n;
	while(l<=r){
		tmps=s[l]; s[l]=s[r]; s[r]=tmps; l++; r--;
	}
	return;
}
int main() {
	cout << "\nSinh hoan vi cua n phan tu:\n";
	n=3;
	//Gan cau hinh dau tien
	for(i=1; i<=n; i++)	s[i]=i;
	//Sinh cac hoan vi 1..n;
	while(cauhinhcuoi==false){
		print();	//In cau hinh hien tai
		sinh();		//Sinh cau hinh tiep theo
	}
	return 0;
}
