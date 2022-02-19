#include<iostream>
using namespace std ;
main() {
    int t ; cin>>t ; 
    while(t--) {
        int n  ; cin>>n ; long M[n] ; 
        for(int i=0 ; i<n  ; i++ ) cin>>M[i] ;
        long min1 = M[0] ; 
        for(int i=1 ; i<n  ; i++) {
            if(min1 > M[i]) min1 = M[i] ; 
        }
        int min2 = M[0] ; 
         for(int i=1 ; i<n  ; i++) {
            if(min2 > M[i] and M[i] != min1) min2 = M[i] ; 
        }
        if(min2 != min1) cout<<min1<<" "<<min2<<endl ; 
        else cout<<-1<<endl ; 
    }
}