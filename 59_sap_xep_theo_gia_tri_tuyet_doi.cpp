#include<bits/stdc++.h>
using namespace std ;
void solve() {
    int n , k ; cin>>n>>k ; int M[n] ; 
    for( int i= 0 ; i<n ; i++ ) cin>>M[i] ; 
    for (int i = n-1 ; i>=0 ; i--) {
        for(int j=0 ; j<i ; j++) {
            if (abs(M[j] - k ) > abs(M[j+1]-k)) {
            swap(M[j] , M[j+1]); 
            }
        }    
    }
    for(int i=0 ; i<n ; i++)  cout<<M[i]<<" " ; 
    cout<<endl ; 
}


main(){
    int t; cin>>t ; 
    while(t--){
        solve() ; 
    }
}