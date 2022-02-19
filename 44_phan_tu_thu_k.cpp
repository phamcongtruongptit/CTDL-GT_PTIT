#include<iostream>
#include<vector> 
#include<algorithm>
using namespace std ; 
void solve() {
    int n , m , k ; 
    cin>>n>>m>>k ; 
    vector <int> M(m+n) ;
    for(int i=0 ; i<m+n;  i++) cin>>M[i] ; 
    sort(M.begin() , M.end()) ; 
    cout<<M[k-1]<<endl ;  
    
}
main() {
    int t; 
    cin>>t ; 
    while(t--) solve() ; 
}