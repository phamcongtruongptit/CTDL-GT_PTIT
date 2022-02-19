#include<bits/stdc++.h>
using namespace std;

/*
	bai nay n = 100 nen minh nghi lam quay lui TLE nen minh se lam theo quy hoach dong
	gia su dp[i][j] = true/false la co hay ko ton tai day con co tong = k xet den vi tri thu i
	vay khi xet A[i] thi dp[i][j] = dp[i - 1][j] || dp[i - 1][j - A[i]] (them or ko them A[i] vao cuoi day)
	do dp[i] chi xet den dp[i - 1] do vay ta co the toi uu thanh mang 1 chieu
	dp[k] la co the tao duoc day con co tong = k hay ko
*/
	
void solution(){
	int n;
	cin >> n;
	vector<int> A(n);
	int sum = 0;
	for(int i=0; i<n; i++) cin >> A[i], sum += A[i]; // nhap
	
	// neu sum la so le thi ko the chia 2 duoc nen cout -1
	if(sum & 1){
		cout << "NO" << endl;
		return;
	}
	int S = sum / 2;
	vector<bool> dp(S + 1, false);
	
	dp[0] = true; // khoi tao dp[0] = true
	for(int i=0; i<n; i++){
		for(int j=1; j<=S; j++){
			if(j < A[i]) continue; // neu j < A[i] thi dp[j] phu thuoc vao cai lien truoc no
			dp[j] = dp[j] || dp[j - A[i]]; // cong thuc truy hoi quy hoach dong minh da noi o tren
		}
	}
	 // in ra yes neu dp[S] = true va nguoc lai
	cout << (dp[S]? "YES" : "NO") << endl;
}

int main(){
	int test = 1;
	cin >> test; // for multi test
	
	while(test--) solution();
	
	return 0;
}
