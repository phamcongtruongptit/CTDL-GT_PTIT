#include<bits/stdc++.h>
using namespace std;

/*
	mang A co n phan tu se duyet dung n lan
	khi n = 1. ket thuc ham de quy
*/

int A[100] = {}, n;

// ham in cau hinh hien tai
void output(int n){
	cout << "[";
	for(int i=1; i<n; i++) cout << A[i] << " ";
	cout << A[n] << "]";
	cout << endl;
}

// goi ham quay lui voi do dai n
void backTrack(int n){
	output(n);
	if(n == 1) return; // neu n == 1 ket thuc ham de quy
	
	for(int i=1; i<n; i++) A[i] += A[i + 1]; // tang gia tri A[i] = A[i + 1]
	
	backTrack(n - 1); // goi de quy cho n = n - 1;

}
	
void solution(){
	
	int n;
	cin >> n;
	for(int i=1; i<=n; i++) cin >> A[i];
	backTrack(n);
	cout << endl;
}

int main(){
	int test = 1;
	cin >> test; // for multi test
	
	while(test--) solution();
	
	return 0;
}
