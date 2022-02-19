#include<bits/stdc++.h>
using namespace std ; 
int N , V  , A[1005] , C[1005], F[1005][1005] ; 
void input() {
    cin>>N>>V ; 
    for(int i=1 ; i<=N ; i++) cin>>A[i]  ; 
    for(int i=1  ; i<=N ; i++) cin>>C[i] ; 
}
int giatrimax() {
    memset(F , 0 , sizeof(F)) ; 
    for(int i=1 ; i<=N ; i++) {
        for(int j=1 ; j<=V ; j++) {
            F[i][j] = F[i-1][j] ; 
            if(j>= A[i]) F[i][j] = max(F[i-1][j] , F[i-1][j-A[i]] + C[i]) ; 
        }
    }
    return F[N][V] ; 
}
void solve() {
    input() ; 
    cout<<giatrimax()<<endl ; 
}
main() {
    int t ; cin>>t  ; 
    while(t--) {
        solve() ; 
    }
}