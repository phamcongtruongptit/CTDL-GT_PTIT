#include<iostream>
#include<queue>
using namespace std ;
void solve() {
    int  k ; string s; 
    cin>>k ; 
    cin>>s ; 
    if(k >=  s.size() ) {
        cout<<0<<endl ; return ; 
    }
    int M[150] = {0} ; 
    for(int i=0  ; i<s.size() ; i++) {
        M[s[i]]++ ;
    }
    priority_queue<int>  q    ; 
    for(int i=0 ; i<150 ;i++) {
        if(M[i]>0) {
            q.push(M[i]) ; 
        }
    }
    int dem = 0 ; 
    while(dem<k) {
        int x = q.top() -1 ; 
        q.pop() ; 
        q.push(x) ; 
        dem++  ; 
    }
    long sum = 0  ; 
    while(!q.empty()){
        sum+= q.top() * q.top() ; 
        q.pop() ; 
    }
    cout<<sum<<endl ; 
}
main() {
    int t; cin>>t ; 
    while(t--) {
        solve() ; 
    }
}