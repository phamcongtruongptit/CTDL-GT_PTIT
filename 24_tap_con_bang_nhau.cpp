#include<iostream>
using namespace std ; 
main() {
    int t ; cin>>t ; 
    while(t--) {
        int n ; cin>>n ; 
        int M[n] ; 
        int sum  = 0  ; 
        for(int i=0 ; i<n ; i++) {
            cin>>M[i] ; 
            sum+=M[i] ; 
        }
        if(sum % 2 ==0 )cout<<"YES"<<endl ;
        else cout<<"NO"<<endl ; 
    }
}