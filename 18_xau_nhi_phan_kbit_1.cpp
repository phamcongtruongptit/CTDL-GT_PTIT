#include<iostream>
using namespace std ; 
int n , k ; int M[17] ; 
bool caucauhinhcuoi ; 
void in() {
    for (int i=1 ; i<=n ; i++) {
        cout<<M[i];
    }
    cout<<endl ;
}
void kbit1() {
    int i=n ; 
    while(M[i]==1 and i>=1) {
        M[i] = 0 ; 
        i-- ; 
    }
    if (i==0) {
        caucauhinhcuoi = true ; 
        return  ;
    }
    M[i] = 1;
    int count=0 ; 
    for(int i=1 ; i<=n ; i++) {
        if(M[i]==1) count++ ; 
    } 
    if(count == k) in() ;
}
main(){
    int t  ; cin>>t; 
    while(t--){
        cin>>n>>k;
        for(int i=1 ;i<=n ; i++) M[i]==0 ;
        caucauhinhcuoi = false ; 
        while(caucauhinhcuoi == false ) {
            kbit1() ; 
        }
    }
}