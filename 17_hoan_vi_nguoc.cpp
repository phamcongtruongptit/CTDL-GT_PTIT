#include<iostream>
using namespace std ;
int n  , M[11];
bool cauhinhcuoi  ;
void cauhinhdautien() {
    for(int i=1; i<=n ; i++) {
        M[i] = n-i+1 ; 
    }
}

void incauhinh() {
    for(int i=1  ; i<=n ; i++) cout<<M[i];
    cout<<" ";
}

void sinhhoanvinguoc() {
    int i= n  -1 ; 
    while(M[i] < M[i+1] and i>0) {
        i-- ; 
    }
    if (i==0) {
        cauhinhcuoi = true ; 
        return ;
    }
    int k=n ; 
    while(M[k]>M[i]) k--;
    int tmp = M[k] ; M[k]  = M[i] ; M[i] = tmp ; 
    int l = i+1 ,  r = n;
    while(l<r) {
        int tmp = M[l] ; M[l] = M[r]  ; M[r] = tmp ; 
        l++ ; r-- ; 
    }
}

main() {
    int t ; cin>>t ; 
    while( t--) {
    	cin>>n ; 
        cauhinhcuoi = false ; 
        cauhinhdautien() ; 
        while(cauhinhcuoi == false) {
            incauhinh() ; 
            sinhhoanvinguoc() ; 
        }
        cout<<endl ;
    }
}
