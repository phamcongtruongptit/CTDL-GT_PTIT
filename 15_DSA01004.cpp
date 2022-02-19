#include<iostream>
using namespace std ; 
int n  , M[16],k ; 
bool cauhinhcuoi ; 
void cauhinhbandau(){
    for (int i=1 ; i<=k ; i++) M[i] =i  ; 
}

void incauhinh() {
    for(int i=1 ; i<=k ; i++) cout<<M[i] ; 
    cout<<" ";
}

void sinhcauhinhtieptheo() {
    int i=k ; 
    while(M[i] == n-k+i && i>0 ) {
        i--  ; 
    }
    if ( i==0 ) {
        cauhinhcuoi  = true;  return ; 
    }
    M[i] +=1 ; 
    for (int j=i+1 ; j<=k ; j++) M[j] = M[i] +j-i ; 
}


main() {
    int  t ; cin>>t ; 
    while(t--) {
        cauhinhcuoi = false; 
        cin>>n>>k ;
        cauhinhbandau();
        while(cauhinhcuoi == false ) {
            incauhinh(); 
            sinhcauhinhtieptheo();      
        }
        cout<<endl ;
    }
}