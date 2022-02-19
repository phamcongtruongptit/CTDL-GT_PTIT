#include<bits/stdc++.h>
using namespace std ; 
void solve(){
    int  n , e; cin>>n >>e ; 
    int dau , cuoi ; 
    vector<int> L[1005] ; 
    while(e--){
        cin>>dau>>cuoi ; 
        L[dau].push_back(cuoi) ; 
    }
    for(int i=1 ; i<=n ; i++){
        cout<<i<<": " ; 
        for(int j= 0  ; j<L[i].size() ; j++) cout<<L[i][j]<<" "  ; 
        cout<<endl ; 
    }
}
main(){
    int t ; cin>>t ; 
    while(t--) solve() ; 
}