#include<bits/stdc++.h>
using namespace std ;
long long mod  = 1e9 + 7 ; 
void solve() {
    int n , k ; cin>>n >> k ; 
    int A[n+5]    ; long long F[k+5] ;
    memset(F , 0 , sizeof(F)) ;  
    for(int i=1 ; i<=n; i++) cin>>A[i] ; 
    F[0] =1 ; 
    for(int i=1 ; i<=k ; i++){
        for(int j=1 ; j<=n ; j++) {
            if(i>=A[j]) 
                F[i] = (F[i] + F[i-A[j]]) % mod; 
        }
    }
    cout<<F[k]<<endl ; 
}
 main() {
     int t ;cin>>t ; 
     while(t--) {
        solve() ; 
     }
 }