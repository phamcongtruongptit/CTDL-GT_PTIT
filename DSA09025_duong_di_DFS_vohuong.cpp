#include<bits/stdc++.h>
using namespace std ;
int n,e,s,t   ; 
bool chuaxet[1005] ; 
int truoc[1005] ; 
vector<int> L[1005] ; 
void input(){
    cin>>n>>e>>s>>t ; 
    memset(chuaxet , true , sizeof(chuaxet)) ; 
    memset(truoc, 0 , sizeof(truoc)) ; 
    for(int i=0 ; i<1005 ; i++) L[i].clear() ; 
    while(e--){
        int d , c ;
        cin>>d>>c  ; 
        L[d].push_back(c) ; 
        L[c].push_back(d) ; 
    }
}
void dfs(int s){
    chuaxet[s] = false ; 
    for(int i=0 ; i<L[s].size(); i++){
        int v= L[s][i] ; 
        if(chuaxet[v] == true){
            truoc[v] = s ; 
            chuaxet[v] = false; 
            dfs(v) ; 
        }
    }
}
void induongdi(){
    stack<int> st ; 
    st.push(t); 
    int u = truoc[t] ; 
    while(u!=s){
        st.push(u) ; 
        u = truoc[u] ; 
    }
    st.push(s) ; 
    while(!st.empty()){
        cout<<st.top()<<" " ; 
        st.pop() ; 
    }
    cout<<endl ; 
}
main(){
    int t;cin>>t; 
    while(t--){
        input() ; 
        dfs(s) ; 
        induongdi() ; 
    }
}