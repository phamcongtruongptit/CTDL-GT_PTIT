#include<bits/stdc++.h>
using namespace std ; 
struct cmp {
    bool operator()(int a , int b){
        return a<b ; 
    }
} ; 
void solve(string s, int n){

    long long count[100]  = {0}  ;
    for(int i=0 ; i<s.size() ; i++){
        count[s[i]] ++ ; 
    }
    priority_queue<long long > Q  ; 
    for(int i=0; i<100 ; i++){
        if(count[i] > 0 ) Q.push(count[i]) ; 
    }
    int i=1  ; 
    while(i<=n and Q.size()>0){
        int k = Q.top() ;
        k-- ; 
        Q.pop() ; 
        Q.push(k) ;  
        i++; 
    }
    long long min = 0 ; 
    while(!Q.empty()){
        min+= Q.top()*Q.top() ;
        Q.pop()  ; 
    }
    cout<<min<<endl ; 
}
main(){
    int t; cin>>t  ; 
    while(t--){
        int n ; cin>>n ; 
        cin.ignore() ; 
        string s  ; cin>>s ; 
        solve(s ,n) ; 
    }
}