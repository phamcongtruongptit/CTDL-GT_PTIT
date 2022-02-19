#include<iostream>
#include<queue> 
using namespace std ; 
priority_queue< long long , vector<long long> , greater <long long > > q;
void solve() {
    int n  ; cin>>n ; 
    int M[n] ;
    for(int i=0 ; i<n ; i++) {
        cin>>M[i] ; 
        q.push(M[i]) ; 
    }
    long long ans =0 ; 
    while(q.size() > 1) {
        int x = q.top() ; q.pop() ; 
        int y = q.top() ; q.pop() ; 
        q.push(x+y) ; 
        ans = ans+x+y ; 
    }
    cout<< ans<<endl ; 
    while(!q.empty()) q.pop() ; 
}
main(){
    int t; cin>>t ; 
    while(t--) {
        solve() ;  
    }
}