#include<iostream>
#include<vector>
using namespace std ; 
void solve() {
    int n ; cin>>n  ; 
    vector <long long> a(n) ; 
    vector <long long> b(n-1) ; 
    for(int i=0 ; i<n ; i++) cin>>a[i] ; 
    for(int i=0 ; i<n-1 ; i++) {
        cin>>b[i] ; 
        // if (a[i] != b[i]) {
        //     cout<<i+1<<endl ; 
        //     break ; 
        // }
    } 
    int ans = n-1 ; 
    for(int i=0 ; i<n ; i++ ){
        if(a[i] != b[i] ) {
            ans = i ;  
            break ; 
        }
    }
    cout<<ans+1<<endl ; 

}
main() {
    int t ; cin>>t ; 
    while(t--) {
        solve() ; 
    }
}