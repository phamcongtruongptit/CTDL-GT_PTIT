#include <iostream>
using namespace std;
int n, s[100], i, count=1;
bool cauhinhcuoi=false;
void print(){	//In mot cau hinh
	cout << "\n" << count++ << ": ";
	for(int j=1; j<=n; j++)	cout << s[j] << " ";
	return;
}
void sinh(){	//Sinh xau nhi phan tiep theo neu xau hien tai chua phai la cuoi cung
	//Tim phan tu 0 dau tien tu ben phai sang trai, luu trong bien i
	i=n;
	while((i>0) && (s[i]==1))  i--;
	//Cau hinh cuoi cung: bao cho ham main, dung ham sinh
	if(i==0){
		cauhinhcuoi=true;	return;
	}
	//Chua phai cau hinh cuoi cung (i!=0): sinh cau hinh tiep theo
	//Tu 1 den i-1: giu nguyen, tu i den n: dao bit
	for(int j=i; j<=n; j++)	s[j]=1-s[j];
	return;
}
int main() {
	cout << "\nSinh xau nhi phan:\n";
	n=8;
	//Gan cau hinh dau tien
	for(i=1; i<=n; i++)	s[i]=0;
	//Sinh cac xau nhi phan do dai n;
	while(cauhinhcuoi==false){
		print();	//In cau hinh hien tai
		sinh();		//Sinh cau hinh tiep theo
	}
	return 0;
}
