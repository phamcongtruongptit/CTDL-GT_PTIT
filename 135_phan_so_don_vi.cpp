#include<iostream>
using namespace std; 
long tu , mau ; //  phải để long không được để int
void solve() {
    long res ;  //  phải để long không được để int
    cin>>tu>>mau ; 
    while(1) {
        if(mau % tu == 0) {
            cout<<1<<"/"<<mau/tu <<endl ; 
            break ; 
        } else {
            res = mau/tu + 1 ; 
            cout<<1<<'/'<<res<<" + " ; 
            tu = tu*res - mau ; 
            mau = mau * res ; 
        }
    }
}
main( ){
    int t ; cin>>t  ; 
    while(t--) {
        solve() ; 
    }
}