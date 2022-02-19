#include<iostream>
#include<algorithm>
using namespace std ; 
int n ;
#define X 1000
int M[X] ; 
void solve() {
    int c = n-1 , d = 0;
    sort(M , M+n) ; 
    while(d<c){
        cout<<M[c]<<" "<<M[d]<<" "  ; d++  ; c-- ; 
    }
    if (d==c) cout<<M[c]<<" " ; 
    cout<<endl ; 
}

main() {
    int t; cin>>t  ; 
    while(t--) {
        cin>>n ; 
        for(int i=0 ; i<n ; i++) cin>>M[i] ; 
        solve() ; 
    }
}