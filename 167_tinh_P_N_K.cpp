#include<bits/stdc++.h>
using namespace std ; 
long long mod  = 1e9 + 7 ; 
// long long F[1005][1005] ; 
// void tinh(){
//     int k= 1000 , n= 1000 ; 
//     for(int i=1 ; i<= ; i++) {
        
//     }
// }
main() {
    int t ; cin>>t ; 
    while(t--) {
        int n , k ; 
        long long ans =1  ; 
        cin>>n>>k ; 
        for(int i=0 ; i<=k-1 ; i++) {
            ans = ( (ans % mod) * (n-i) ) % mod ; 
        }
        cout<<ans<<endl ; 
    }
}