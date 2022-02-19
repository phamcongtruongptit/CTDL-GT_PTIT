// Can Ngoc Binh
#include<bits/stdc++.h>
using namespace std;

/*
	dem duong di: quy hoach dong
	gia su dp[i][j] la so cach di den o thu (i,j)
	vay dp[i][j] se duoc tinh boi o ben tren la o (i + 1, j) va o ben trai (i, j - 1)
	vay dp[i][j] = dp[i + 1][j]  + dp[i][j-1]
*/
	
void solution(){
	
	int n, m;
	cin >> n >> m;
	
	vector<vector<int>> A(n + 1, vector<int>(m + 1, 0)), dp(n + 1, vector<int>(m + 1, 0)); // khoi tao mang dp
	
	for(int i=1; i<=n; i++) for(int j=1; j<=m; j++) cin >> A[i][j]; // nhap
	
	dp[1][1] = 1; // khoi tao dp[1][1] = 1
	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			if(i == 1 && j == 1) continue; // neu i == 1 || j == 1 thi bo qua
			dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
		}
	}
	cout << dp[n][m] << endl; // cout  ket qua tai vi tri (n,m)
}

int main(){
	int test = 1;
	cin >> test; // for multi test
	
	while(test--) solution();
	
	return 0;
}
