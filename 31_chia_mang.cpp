#include<iostream>
#include<algorithm>
using namespace std ; 
int n , k ; 
int M[51] ; 
void input() {
    cin>>n>>k ; 
    for(int i=0 ; i<n; i++) cin>>M[i] ; 
}
int summax() {
    sort(M, M+n) ; 
    int a = ( k < (n-k)) ? k : n-k ; 
    int dau = 0  , cuoi = 0 ; 
    for(int i= 0 ; i<=a-1 ; i++) {
        dau+=M[i] ; 
    }
    for(int i=a ; i<n; i++) {
        cuoi +=M[i] ; 
    }
    return cuoi - dau ; 
 }
 void solve() {
    input() ; 
    cout<<summax()<<endl ; 
 }
main() {
    int t ; cin>>t ; 
    while( t-- ) {
        solve() ; 
    }
}