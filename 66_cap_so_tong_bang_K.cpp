#include<iostream>
using namespace std ; 

void solve() {
    int n  , k ;cin>> n >>k  ; int M[n] ; 
    for(int i = 0 ; i<n  ; i++) cin>>M[i] ; 
    int dem = 0 , sum ; 
    for(int i= 0 ; i<n-1 ; i++) {
        for(int j=i+1 ; j<n ; j++) {
            sum = M[i]+M[j] ; 
            if(sum == k ) dem++ ; 
        }
    }
    cout<<dem<<endl ;
}
main() {
    int t; cin>>t ;
    while(t--) {
        solve() ; 
    }
}