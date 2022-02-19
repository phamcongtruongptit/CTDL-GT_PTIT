#include <iostream>
#include <cmath>
#include <queue>
#define MAX 10000
using namespace std;
int X[MAX], n=0, chuaxet[MAX], truoc[MAX];
int S=1033, T=8179, u, v;
int Test_Nguyen_To(int k){
	int p = (int)sqrt(k);
	for(int i=2; i<=p; i++){
		if(k%i==0) return 0;
	}
	return 1;
}
void Nguyen_To(void){
	for(int k=1001; k<=9999; k+=2){
		if(Test_Nguyen_To(k)){
			n++; X[n]=k;
			if(X[n]==S) u =n;
			if(X[n]==T) v =n;
		}
	}	
}
int Test(int a, int b){
	int c1, c2, dem=0;
	while(a!=0 && b!=0){
		c1 = a%10; a = a/10;
		c2 = b%10; b = b/10;
		if(c1!=c2)dem++;
	}
	return (dem==1);
}
void Init(void){
	for(int i=1; i<=n; i++){
		chuaxet[i]=true; truoc[i]=0;
	}
}
int BFS(int u){
	queue <int> MyQueue;
	MyQueue.push(u); chuaxet[u]=false;
	while(!MyQueue.empty()){
		int s = MyQueue.front();
		MyQueue.pop();
		for(int t=1; t<=n; t++){
			if(chuaxet[t]&& Test(X[s], X[t])){
				MyQueue.push(t);chuaxet[t]=false;
				truoc[t]=s;
			}
		}
	}
}
void Duong_Di(int s, int t){
	BFS(s);
	if(truoc[t]==0)cout<<"khong co duong di"<<endl;
	else {
		cout<<"Ket qua:"<<X[t];
		int p = truoc[t];
		while(p!=s){
			cout<<"<-"<<X[p];
			p = truoc[p];
		}
		cout<<"<-"<<X[s]<<endl;
	}
}
void Result(void){
	for(int i=1; i<=n; i++){
		cout<<"X["<<i<<"]="<<X[i]<<endl;
	}
}

int main(void){
	Nguyen_To(); Init(); 
	Duong_Di(u, v);	
}
