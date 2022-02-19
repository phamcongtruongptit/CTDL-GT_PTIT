#include<iostream>
#include<algorithm>
using namespace std ;
void merge (long A[] , long B[] , long H[] , long n , long m ) {
    long i = 0 ,  j = 0  ,  k = 0 ; 
    while( i<n && j<m) {
        H[k++] = (A[i] < B[j]) ? A[i++]  : B[j++] ;  
    } 
    while(i<n) {
        H[k++] = A[i++]  ;  
    }
    while(j<m){
        H[k++] = B[j++] ; 
    }
}
void solve() {
        int n, m;
        cin>>n>> m  ;  
        long *A = new long[n] ; 
        long *B = new long[m] ; 
        long *H = new long[m+n] ; 
        for(int i=0 ; i<n; i ++) cin>>A[i] ; 
        for(int i=0 ; i<m ; i++) cin>>B[i] ; 
        sort(A,A+n  );
        sort(B, B+m ) ; 
        merge(A, B, H , n , m) ; 
        for(int i=0 ; i<m+n ; i++) cout<<H[i]<<" " ; 
        cout<<endl ; 
}
main() {
    int t; cin>>t  ; 
    while(t--) {
        solve() ; 
    }
}