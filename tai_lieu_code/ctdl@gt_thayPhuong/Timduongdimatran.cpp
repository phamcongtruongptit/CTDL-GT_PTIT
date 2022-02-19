#include<bits/stdc++.h>
using namespace std;
int n, m;
int sol(){
	//vi tri duong di tai [i][j]: so cach di den o do
	//dp[i][j]=dp[i-1][j]+dp[i][j-1]
	vector<vector<int> > dp(m+1, vector<int> (n+1, 0));//tao ma tran duong di
	dp[1][1]=1;
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			if(i==1&&j==1) continue;
			else dp[i][j]=dp[i-1][j]+dp[i][j-1];
		}
	}
	return dp[m][n];
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>m>>n;
		vector<vector<int> > a(m+1, vector<int>(n+1, 0));//tao ma tran nhap
		for(int i=1;i<=m;i++){
			for(int j=1;j<=n;j++) cin>>a[i][j];
		}
		cout<<sol()<<endl;
	}
	return 0;
}
