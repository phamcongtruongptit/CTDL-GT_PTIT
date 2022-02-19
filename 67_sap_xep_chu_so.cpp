#include<iostream>
using namespace std ; 
void solve() {
    int n  ; cin>> n ;
    int M[n] ; 
    for(int i=0 ; i<n   ; i++) cin>>M[i] ; 
    int check[10] = {0} ; 
    for(int i=0 ; i<n ; i++) {
        while(M[i]>0) {
            int k = M[i]%10 ; 
            check[k] +=1 ; 
            M[i] /=10 ; 
        }
    }
    for(int i=0 ; i<10 ; i++) {
        if(check[i] > 0 ) cout<<i<<" " ; 
    }
    cout<<endl ; 
}


main() {
    int t; cin>>t ; 
    while(t--){
        solve() ; 
    }
}