// CAN NGOC BINH
#include<bits/stdc++.h>
using namespace std;

/*
	co the dung phuong phap sinh nhi phan
	1: them A[i] vao tong s
	0: ko them
	
	minh dung quay lui de duyet
*/

int n, k, s;
int A[100] = {}, ans = 0;

void backTrack(int index){
	// lap tren mien gia tri cua A[index]
	for(int i=A[index - 1] + 1; i<=n; i++){
		A[index] = i;
		s -= i;
		// dem ket qua
		if(s == 0 && index == k) ans++;
		else if(s > 0) backTrack(index + 1); // goi de quy cho A[index+1]
		s += i; // tra lai gia tri cua S
	}
}

void solution(){
	ans = 0; // bien ket qua

	backTrack(1);
	
	cout << ans << endl;
	
}

int main(){
	
	int test = 1;
//	cin >> test; // multi testcase
	cin >> n >> k >> s;
	// nhap den khi nao n = k = s = 0
	while(n || k || s){
		solution();
		cin >> n >> k >> s;
	} 
	
	return 0;
}
