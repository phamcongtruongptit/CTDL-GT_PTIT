#include<iostream>
using namespace std ; 
main() {
    int n ; cin>>n  ; 
    int M[n]  ; 

    for(int i=0 ; i<n ; i++) cin>>M[i] ; 
    
    for (int i = n-1 ; i>=0 ; i--) {
        bool ok = false;
        for(int j=0 ; j<i ; j++) {
            if (M[j] > M[j+1]) {
                ok = true;  
            swap(M[j] , M[j+1]); 
            }
        }
        if (ok == false) break ; 
        cout<<"Buoc "<<n-i<<": " ; 
        for(int k=0 ; k<n   ; k++ ) cout<<M[k]<<" " ; 
        cout<<endl ;       
    }
}