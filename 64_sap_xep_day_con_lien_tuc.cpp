#include<iostream>
#include<algorithm>
using namespace std ;
void solve() {
    int n ; cin>>n ; 
    int M[n] , check[n] ; 
    for(int i=0 ; i< n ; i++) {
        cin>>M[i] ; check[i] = M[i] ; 
    }
    sort(M , M+n ) ; 
    int left , right ; 
    for(int i=0 ; i<n ; i++) {
        if(M[i]!=check[i]){
            left = i+1 ; 
            break ; 
        }
    }
    for(int i=n-1 ; i>=0 ; i--){
        if(M[i]!=check[i]){
            right = i+1 ;
            break ; 
        }
    }
    cout<<left<<" "<<right<<endl ; 
}
main(){
    int t;  cin>> t;
    while(t--) {
        solve() ; 
    }
}