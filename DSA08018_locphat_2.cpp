#include<bits/stdc++.h>
using namespace std ; 
void solve(int n){
    deque <string> Q ; 
    Q.push_front("6") ; 
    Q.push_back("8") ; 
    vector <string> vt; 
    while(true){
        string k = Q.front() ; 
        vt.push_back(k) ; 
        Q.pop_front() ; 
        if((k+"6").size() > n) break ; 
        Q.push_back(k+"6") ; 
        Q.push_back(k+"8") ; 
    }
    while(!Q.empty()){
        vt.push_back(Q.front()) ; 
        Q.pop_front() ; 
    }
    cout<<vt.size()<<endl ; 
    for(int i=0 ; i<vt.size() ; i++){
        cout<<vt[i]<<" " ; 
    }
    cout<<endl ; 
}
main(){
    int t; 
    cin>>t ; 
    while(t--) {
        int n ; cin>>n ; 
        solve(n) ; 
    }
}