#include<bits/stdc++.h>
using namespace std ; 
#define M 100000

void solve() {
    int n ,  m ; 
    cin>>n>>m ; 
    int A[n] , B[m] , ok[M] = {0}; 
    for(int i=0 ; i<n ; i++) cin>>A[i] ;
    for(int i=0 ; i<m ; i++) cin>>B[i] ; 
    for(int i=0 ; i<n ; i++) {
         ok[A[i]] ++ ; 
    }
    for(int i=0 ; i<m ; i++) {
         ok[B[i]] ++ ; 
    }
    for(int i=0 ; i<M ; i++) {
        if(ok[i]>0) {
            cout<<i<<" " ; 
        }
    }
    cout<<endl  ;
        for(int i=0 ; i<M ; i++) {
        if(ok[i]>1) {
            cout<<i<<" " ; 
        }
    } 
      cout<<endl ;
}
main() {
    int t; cin>>t ;
    while(t--) {
        solve() ; 
    }
}