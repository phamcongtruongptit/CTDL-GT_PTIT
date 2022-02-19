#include<bits/stdc++.h> 
using namespace std ; 
long long MAX  = 1e9 + 7 ; 
int n ,  k ; 
long long F[100005] ; 
long long tinh() {
    memset(F ,  0 , sizeof(F)) ; 
    if(k==1) return n; 
    F[1] = 1 ; F[2] = 2 ;
    for(int i=3 ; i<=k ; i++) {
        for(int j=1 ; j<i ; j++) {
            F[i] = (F[i] + F[j]) % MAX; 
        }
        F[i] = (F[i] + 1) ; 
    } 
    if(n<=k) return F[n] ; 
    for (int i = k+1 ; i<= n ; i++) {
        for(int j=1 ; j<=k ; j++) {
            F[i] = (F[i] + F[i-j]) % MAX ; 
        }
    }
    return F[n] ; 
}
 main() {
     int t ; cin>>t ; 
     while(t--) {
        cin>>n>>k ; 
        cout<<tinh()<<endl ; 
     }
}