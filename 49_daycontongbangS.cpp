#include<bits/stdc++.h>
using namespace std ; 
int n,s ; int M[205] , F[40005] ; 
void input() {
    cin>>n>>s ; 
    for(int i=1 ; i<=n ;i++) cin>>M[i] ; 
}
int check() {

    memset(F , 0 ,sizeof(F))  ; 
    F[0] = 1 ; 
    for(int i=1 ; i<=n ; i++) {
        for(int j=s ; j>=M[i] ; j--) {
            if(F[j] == 0 and F[j-M[i]] == 1 ) F[j] = 1 ; 
        }
    }
    return F[s] ; 
}
void solve() {
    input() ; 
    if(check()) cout<<"YES" ; 
    else cout<<"NO" ; 
    cout<<endl  ; 
}
main(){
    int t ; cin>>t ; 
    while(t--) {
        solve() ; 
    }
}