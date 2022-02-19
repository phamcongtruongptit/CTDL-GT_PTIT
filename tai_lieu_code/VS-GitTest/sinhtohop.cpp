//Sinh to hop chap k cua n phan tu 1..n
#include <iostream>
using namespace std;
int n, k, s[100], i, count=1;
bool cauhinhcuoi=false;
void print(){	//In mot cau hinh
	cout << "\n" << count++ << ": ";
	for(int j=1; j<=k; j++)	cout << s[j] << " ";
	return;
}
void sinh(){	//Sinh to hop tiep theo neu to hop hien tai chua phai la cuoi cung
	//Tim phan tu dau tien tu phai sang trai: x[i]<n-k+i, chi so luu trong bien i
	i=k;
	while((i>0) && (s[i]==n-k+i))  i--;
	//Cau hinh cuoi cung: bao cho ham main, dung ham sinh
	if(i==0){
		cauhinhcuoi=true;	return;
	}
	//Chua phai cau hinh cuoi cung (i!=0): sinh cau hinh tiep theo
	//Tu 1 den i-1: giu nguyen, s[i] tang 1, tu i+1 den n: cong khoang cach den s[i]
	s[i]=s[i]+1;
	for(int j=i+1; j<=k; j++)	s[j]=s[i]+(j-i);
	return;
}
int main() {
	cout << "\nSinh to hop chap k cua n phan tu:\n";
	n=15;	k=12;
	//Gan cau hinh dau tien
	for(i=1; i<=k; i++)	s[i]=i;
	//Sinh cac xau nhi phan do dai n;
	while(cauhinhcuoi==false){
		print();	//In cau hinh hien tai
		sinh();		//Sinh cau hinh tiep theo
	}
	return 0;
}
