//Duyet cac xau AB do dai n
#include <bits/stdc++.h>
#define MAX 10
using namespace std;
int X[MAX], n, OK; 
//thiet lap xau nhi phan ban dau
void Init(void) {
	cin>>n; OK = true;
	for(int i=0; i<n; i++) X[i] =0;
}
//dua ra xau nhi phan hien tai
void Result(void) {
	for(int i=0; i<n; i++) {
		if(X[i]==0) cout<<'A';
		else cout<<'B';
	}
	cout<<" ";
}
//sinh xau nhi phan tiep theo
void Next_Bits_String(void) {
	int i = n-1;//duyet tu phai qua trai
	while(i>=0 && X[i]) { //lap neu X[i]==1
		X[i]=0; i--; //dat X[i]=0
	}
	if(i>=0) X[i] =1;//phan tu bang 0 dau tien thiet lap la 1
	else OK = false; //ghi nhan da den cuoi cung
}
//Duyet Xau nhi phan
void Binary_String(void) {
	Init();//thiet lap xau dau tien
	while(OK) { //lap khi chua phai xau cuoi cung
		Result(); //dua ra xau hien tai
		Next_Bits_String();//sinh ra xau ke tiep
	}
	cout<<endl;//ket thuc mot test
}
int main(void) {
	int T; cin>>T;
	while(T--){
		Binary_String();
	}
}
