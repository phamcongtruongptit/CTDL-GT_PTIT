#include<iostream>
using namespace std ; 
int n ,  k , M[40] , A[40] ; 
bool cauhinhcuoi ;
int sinhviennghi() {
    if (cauhinhcuoi == true ) {
        return k ; 
    } else {
    int nghi = k ; 
    for(int i=1 ; i<=k ; i++) {
        for(int j=1 ; j<=k ; j++) {
            if( M[i] == A[j] ) nghi-- ; 
        }
    }
    return nghi ;       
    }
}
void sinh() {
    int i =  k ; 
    while(M[i] == n- k+i and i>=1 ) i-- ; 
    if( i==0 ) {
        cauhinhcuoi = true; return ; 
    }
    M[i] += 1 ; 
    for(int j=i ; j<=k  ; j++) {
        M[j] = M[i]+ j-i ; 
    }
}
main() {
     int t; cin>>t ; 
     while(t--) {
         cin>>n>>k ;
         cauhinhcuoi = false ;  
         for(int i=1 ; i<=k ;i++) {
             cin>>M[i] ; 
             A[i] = M[i] ; 
         }
        sinh(); 
        cout<<sinhviennghi()<<endl ; 
     }
}