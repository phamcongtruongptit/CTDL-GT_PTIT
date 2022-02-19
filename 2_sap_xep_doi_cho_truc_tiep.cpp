#include<iostream>
using namespace std ; 
main() {
    int n ; cin>>n ; 
    int M[n] ; 
    for (int i=0 ; i<n ; i++) cin>>M[i];  

    
    for(int i=0 ; i<n-1; i++) {
        for (int j=i+1 ; j<n ; j++) {
            if (M[i] > M[j]) {
                swap(M[i] , M[j]) ; 
                }
        }
        cout<<"Buoc "<<i+1<<": " ; 
        for(int i=0 ; i<n   ; i++ ) cout<<M[i]<<" " ; 
        cout<<endl ;
        
    }
}