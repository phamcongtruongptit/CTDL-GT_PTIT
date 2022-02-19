// gấp đôi dãy số
#include<bits/stdc++.h>
using namespace std ; 
int tinh(int n , long long k ){
    if (n==0) return 1; 
    long long x = pow(2, n-1) ; 
    if (k==x) return n ; 
    if (k<x) return tinh(n-1   , k) ; 
    return tinh(n-1  , k-x) ; 
}
main(){
    int t;  cin>>t ;
    while(t--){
        int n ; long long k ; 
        cin>>n >>k  ; 
        cout<<tinh(n , k )<<endl  ; 
    }
}
// tim_fanboi_thu_n_chiadetri.cpp = ma tran