#include<bits/stdc++.h>
using namespace std ; 
int n,e,s,t,truoc[1005];
vector<int> L[1005] ; 
bool chuaxet[1005] ; 
void input(){
    cin>>n>>e>>s>>t ; 
    memset(chuaxet,true, sizeof(chuaxet)) ; 
    memset(truoc, 0 , sizeof(truoc)) ; 
    for(int i=0 ;i<1005 ; i++)L[i].clear() ; 
    while(e--){
        int  d ,c ; cin>>d>>c ; 
        L[d].push_back(c) ; 
      //  L[c].push_back(d) ; 
    }
}
void bfs(int s){
    chuaxet[s] = false ; 
    queue<int> Q ; 
    Q.push(s) ; 
    while(!Q.empty()){
        int k = Q.front() ; Q.pop() ; 
        for(int i=0 ; i<L[k].size() ; i++){
            int v =  L[k][i] ; 
            if(chuaxet[v] == true ){
                truoc[v] = k ; 
                Q.push(v) ; 
                chuaxet[v] = false ; 
            }
        }
    }
}
void induongdi(){
    if(truoc[t] == 0){
        cout<<-1<<endl ; 
        return;
    }
    stack<int> st; 
    st.push(t) ; 
    int u = truoc[t] ; 
    while(u!=s){
        st.push(u) ; u=truoc[u] ; 
    }
    st.push(s) ; 
    while(!st.empty()){
        cout<<st.top()<<" " ; 
        st.pop() ; 
    }
    cout<<endl ; 
}
main(){
    int t; cin>>t ; 
    while(t--){
        input() ; 
        bfs(s) ; 
        induongdi() ; 
    }
}