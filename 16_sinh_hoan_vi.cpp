#include<iostream>
using namespace std ; 
bool cauhinhcuoi ; 
int n , M[11];
void cauhinhbandau() {
    for(int i=1 ; i<=n ; i++) M[i]=i ; 
}
void incauhinh(){
    for (int i=1 ; i<=n ; i++) cout<<M[i] ; 
    cout<<" ";
}

void sinhhoanvi() {
    int i= n-1 ; 
    while(M[i]>M[i+1] && i>0 ) i-- ; 
    if(i==0) {
        cauhinhcuoi = true ; 
        return ;
    }
    int k=n;
    while(M[k] < M[i]) k-- ; 
    int tmp = M[k] ; M[k] = M[i] ; M[i] = tmp  ; 
    int l = i+1 , r = n ; 
    while(l<r) {
        int tmps = M[l] ; M[l] = M[r] ; M[r] = tmps ; 
        l++ ; r-- ; 
    }
}
main() {
    int t ; cin>>t; 
    while(t--) {
        cin>>n ; 
        cauhinhbandau() ;
        cauhinhcuoi = false ;
         while (cauhinhcuoi == false ) {
             incauhinh() ; 
             sinhhoanvi() ; 
         }
         cout<<endl; 
    }
}