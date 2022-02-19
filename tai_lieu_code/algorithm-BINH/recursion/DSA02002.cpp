#include<bits/stdc++.h>
using namespace std;

/*
	tuong tu bai 2001. ta chi can lat nguoc ket qua la oke
*/

int A[100] = {}, n;
vector<vector<int>> ans; // vector luu ket qua

// ham in cau hinh hien tai
void output(int n){
	ans.resize(ans.size() + 1); // tang kich thuoc cua ans len 1 don vi 
	for(int i=1; i<=n; i++) ans[ans.size() - 1].push_back(A[i]); // push het A[i] vao ans
}

// goi ham quay lui voi do dai n
void backTrack(int n){
	output(n);
	if(n == 1) return; // neu n == 1 ket thuc ham de quy
	
	for(int i=1; i<n; i++) A[i] += A[i + 1]; // tang gia tri A[i] = A[i + 1]
	
	backTrack(n - 1); // goi de quy cho n = n - 1;

}
	
void solution(){
	ans.clear();
	int n;
	cin >> n;
	for(int i=1; i<=n; i++) cin >> A[i]; // nhap
	backTrack(n); // goi ham de quy
	
	// in ket qua bai toan
	for(int i=ans.size() - 1; i>=0; i--){
		cout << "[";
		for(int j=0; j<ans[i].size() - 1; j++) cout << ans[i][j] << " ";
		cout << ans[i][ans[i].size() - 1] << "] ";
//		cout << endl;
	}
	cout << endl;
}

int main(){
	int test = 1;
	cin >> test; // for multi test
	
	while(test--) solution();
	
	return 0;
}
