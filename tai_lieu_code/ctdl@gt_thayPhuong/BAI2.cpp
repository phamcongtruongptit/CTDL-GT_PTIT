//sinh ra to hop tiep theo 
#include <bits/stdc++.h>
#define MAX 1000
using namespace std;
int X[MAX], n, k;
//Thiet lap nghiem ban dau
void Init(void) {
	cin>>n>>k; //dua vao n, k cua moi test
	//thiet lap tap con dau tien la 1, 2, .., k
	for(int i=1;i<=k; i++) cin>>X[i];		
}
//Dua ra nghiem hien tai
void Result(void) {
	for(int i=1; i<=k; i++) 
		cout<<X[i]<<" ";
	cout<<endl;
}
//Sinh ra nghiem ke tiep
void Next_Combination(void){
	int i=k; //duyet tu ben phai tap con hien tai
	while(i>0 && X[i]==n-k+i) { //tim i sao cho X[i] khac n-k+i
		i--; 
	}
	if(i>0) { //neu tim thay i
		X[i]=X[i] + 1; //tang X[i] len 1
		for(int j=i+1; j<=k; j++) //tu vi tri i+1,..,k
			X[j] = X[i] + j - i;//duoc tinh theo cong thuc nay
	}
	else { //neu khong tim thay i
		//lay lai tap con dau tien
		for(int i=1; i<=k; i++) X[i]=i;
	}		
}
int main(void) {
	int T; cin>>T;	//dua vao so luong test
	while(T--) { 
		Init(); //lay n, k va test
		Next_Combination();//sinh ra tap con tiep theo
		Result();//dua ra xau ke tiep
	}
}
