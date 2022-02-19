#include<bits/stdc++.h>
using namespace std ;
main() {
    int t ; cin>>t ; 
    while(t--) {
        int M[1000] , n  ; 
        cin>>n ; 
        for(int i=1 ; i<=n ; i++)
        cin>>M[i] ; 
        int k = 1 ; 
        int check[1000] ; 
        check[1] = 1 ; 
        for(int i=1 ; i<=n  ; i++ ) {
            check[i]=1 ; 
            for(int j=1 ; j<i ; j++){
                if(M[j]<=M[i]) {
                    check[i] = max(check[i] , check[j]+1) ; 
                }
            }
            k = max(k , check[i]) ; 
        }
        cout<<n-k<<endl ; 
    }
}