// #include<iostream>
// #include<algorithm>
// using namespace std  ; 
// void solve(){
//     int n  , k ;cin>>n>>k ; 
//     int M[n] ; 
//     for(int i=0 ; i<n ; i++) cin>>M[i] ; 
//     sort(M , M+n) ; 
//     for(int i=n-1 ; i>=n-k ; i--){
//         cout<<M[i]<<" " ; 
//     }
//     cout<<endl ; 
// }
// main() {
//     int t ; cin>>t ; 
//     while(t--) {
//         solve() ; 
//     }   
// }
#include<iostream>
#include<algorithm>
using namespace std ; 
#define X 1000
int n , k  , M[X] ; 
void solve() {
    sort(M , M+n ) ; 
    for(int i=n-1 ; i>=n-k   ; i--) cout<<M[i]<<" " ; 
    cout<<endl ; 
}
main() {
    int t ; cin>>t ; 
    while(t--) {
        cin>>n>>k  ; 
        for(int i=0 ; i<n  ; i++) cin>>M[i]; 
        solve()  ; 
    }
}