#include<bits/stdc++.h>
using namespace std; 
int M[1000][1000] , a[1000] , b[1000], n , v ; 
void input() {
    cin>>n>>v ; 
    for(int i=1 ; i<=n  ; i++ ) cin>>b[i] ; 
    for (int i=1 ; i<=n ; i++) cin>>a[i] ; 
}
void solve() {
    int giatrimax = 0 ; 
    for(int i=1 ; i<=n ; i++) {
        for(int j=1 ; j<=v ; j++){
            if(j<b[i]) M[i][j] = M[i-1][j] ; 
            else M[i][j] = max(M[i-1][j] , M[i-1][j-b[i]] + a[i]) ; 
            giatrimax = max(giatrimax , M[i][j]) ; 
        }
    }
    cout<<giatrimax<<endl ; 
}
main() {
    int t; cin>>t ; 
    while(t--) {
        input() ; 
        solve() ; 
    }
}