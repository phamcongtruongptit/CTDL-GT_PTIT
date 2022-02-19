#include<iostream>
#include<algorithm>
using namespace std ; 
int F[1005][1005] , A[1005] , C[1005] , N , V ; 
//F[n][v] // ma tran gia tri max
int maxxx() {
	for(int i=0 ; i<=N ; i++) F[i][0] = 0 ;  
	for(int i= 0 ; i<=V ; i++) F[0][i]= 0 ; 
	for(int i=1 ; i<=N ; i++) {
		for(int j=1 ; j<=V ; j++) {
			F[i][j] = F[i-1][j] ; 
			if(j>=A[i])F[i][j] = max(F[i-1][j] , F[i-1][j-A[i]] + C[i]) ; 
		}
	} 
	return F[N][V] ; 
}
void input() {
	cin>>N>>V; 
	for(int i=1 ; i<=N ; i++) cin>>A[i] ;
	for(int i=1 ; i<=N; i++) cin>>C[i] ; 
}
void  solve() {
	input() ; 
	cout<<maxxx() <<endl ; 
}
main(){
	int t ; cin>>t ; 
	while(t--) solve() ; 
}