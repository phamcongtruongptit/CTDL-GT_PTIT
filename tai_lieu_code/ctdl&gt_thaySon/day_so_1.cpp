#include<iostream>
using namespace std ; 
void in(int A[] , int n) {
    cout<<"[" ;  
    for(int i=0 ; i<n ; i++) {
        if (i ==A[n-1]) cout<<A[i]<<"]" ; 
        else cout<<A[i]<<" " ; 
    }
}
void dequy( int A[] , int n) {
    if (n==0) return ; 
    in(A , n) ; 
    for(int i=0 ; i< n-1 ; i++) {
        A[i] = A[i] + A[i+1] ; 
    }
    dequy(A , n-1) ; 
}

main() {
    int t , n , A[100] ; 
    cin>>t ; 
    while(t--) {
        cin>>n  ; 
        for (int i=0 ; i<n ; i++) cin>>A[i] ; 
        dequy(A , n) ; 
    }
}