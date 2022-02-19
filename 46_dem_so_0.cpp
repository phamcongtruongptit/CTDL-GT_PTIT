#include<iostream>
using namespace std ;
void solve(){
    int n; cin>>n ; 
    int M[n] ; 
    int count = 0 ; 
    for(int i=0 ; i<n ; i++) {
        cin>>M[i] ; 
        if(M[i] == 0 ) count++ ; 
    }
    cout<<count<<endl ; 
}
main() {
    int t ; cin>>t ;
    while(t--)solve() ; 
}