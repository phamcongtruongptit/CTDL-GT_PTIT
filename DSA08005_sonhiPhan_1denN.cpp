#include<bits/stdc++.h>
using namespace std ; 
// long long M[10001] ; 
// long long nhiphan(int n){
//     vector<int> v ; 
//     while(n>0){
//         v.push_back(n%2) ; 
//         n/=2 ; 
//     }
//     long long ans = 0 ; 
//     for(int i=v.size()-1 ; i>=0 ; i--){
//         ans = ans*10 + v[i] ;
//     }
//     return ans ; 
// }
// void solve(){
//     M[0] = 0 ; M[1] = 1; 
//     for(int i=2 ; i<=10000 ; i++) {
//         M[i] = nhiphan(i) ; 
//     }
// }
// main(){
//     int t; cin>>t ; 
//     while(t--){
//         int n ; cin>>n ; 
//         solve() ; 
//         for(int i=1 ; i<=n ; i++){
//             cout<<M[i]<<" " ; 
//         }
//         cout<<endl ; 
//     }
// }
main(){
    int t ; cin>>t ; 
    while(t--){
        int n ; cin>>n ; 
        deque <long long> Q ; 
        Q.push_front(1) ; 
        for(int i=1 ; i<=n ; i++){
            long long l = Q.front() ; 
            cout<<l<<" " ; 
            Q.pop_front() ; 
            Q.push_back(l*10) ; 
            Q.push_back(l*10 + 1) ; 
        }
        cout<<endl ; 
    }
}