#include<bits/stdc++.h>
using namespace std ;
int A[100002] , B[1000002] , C[1000002] ; 
int a , b , c  ; 
void solve() {
    int i= 0  , j= 0  , k = 0 ; 
    bool check = false ; 
    while(i<a and j<b and k<c ){
        if(A[i] == B[j] and A[i] == C[k] ) {
            cout<<A[i]<<" "; 
            check = true ; 
            i++ ; j++ ; k++ ; 
        }
        else {
            int m = max(A[i] , max(B[j] , C[k]) ) ; 
            if(A[i] < m ) i++ ; 
            if(B[j] < m) j++ ; 
            if(C[k] < m) k++  ; 
        }
    }
    if(!check) cout<<-1  ; 
}

main() {
    int t ; cin>>t ; 
    while (t--) {
        cin>>a>>b>>c  ; 
        for(int i=0 ; i<a ; i++) cin>>A[i] ; 
        for(int i=0  ; i<b ; i++ ) cin>>B[i] ; 
        for(int i=0  ; i<c ; i++) cin>>C[i] ;
        solve() ; 
        cout<<endl ; 
    }
}