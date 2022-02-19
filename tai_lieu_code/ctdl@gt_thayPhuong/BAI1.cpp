//BAI 1: Xau nhi phan tiep theo
//day lalenhtest git
#include <bits/stdc++.h>
#define MAX 1000
using namespace std;
//sinh xau nhi phan tiep theo
void Next_Bits_String(char X[]) {
	int n = strlen(X);//lay n la do dai xau	
	int i = n-1;//duyet tu phai qua trai xau nhi phan
	while(i>=0 && X[i]=='1') { //lap neu X[i]=='1'
		X[i]='0'; i--; //dat X[i]='0'
	}
	if(i>=0) X[i] ='1';//ky tu dau tien la '0' thiet lap la '1'	
}
int main(void) { //test solution
	int T; //day la so luong test
	char X[MAX];//xau nhi phan ban dau
	cin>>T;
	while(T--){
		cin>>X;
		Next_Bits_String(X);
		cout<<X<<endl;
	}
}
