#include<iostream>
#include<algorithm>
using namespace std ; 
#define M 1000
void phan_biet(int n , int A[] , int B[] , int &m) {
    m= 0 ; 
    B[m] = A[0] ; m++ ; 
    for(int i=0 ; i<n ; i++) {
        bool check  = true ; 
        for(int j = i-1 ; j>=0 ; j--) {
            if(A[i] == A[j]) {
                check = false ; 
                break ; 
            }
        }
        if(check) {
            B[m] = A[i] ; m++ ; 
        }

    }
    
}

main() {
    int t; cin>>t ;
    while(t--) {
        int n, m  ; cin>>n  ; 
        int A[M] , B[M ] ; 
        for(int i=0 ; i<n ; i++) cin>>A[i] ; 
        phan_biet(n , A , B , m) ; 
        sort(B , B+m) ; 
        cout<<B[m-1]  - B[0] -m+2<<endl ; 
    }
}