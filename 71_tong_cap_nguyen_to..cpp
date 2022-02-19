#include<bits/stdc++.h>
using namespace std ; 
#define M 1000000
int n ;
bool check(int k) {
    if(k<2) return false  ; 
    for(int i=2 ; i<=sqrt(k) ; i++) {
        if (k%i == 0)
        {
            return false ; 
        }
    
    }
    return true ; 
}
void solve() {
    int a = 0; 
    for(int i=2; i<= M/2  ; i++) {
        if(check (i) and check(n-i)) {
            a=1 ; 
            cout<<i<<" "<<n-i<<endl ; 
            break ; 
        }
    }
    if (a==0) cout<<-1<<endl ; 
}

main() {
    int t ; cin>>t ; 
    while(t--) {
        cin>>n ; 
        solve() ; 
    }
}