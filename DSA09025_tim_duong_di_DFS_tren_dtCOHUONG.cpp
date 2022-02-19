#include<bits/stdc++.h>
using namespace std ; 
int n , e ,s, t ;
vector<int> L[1005] ; 
bool chuaxet[1005] ; 
int truoc[1005] ; 
void input(){
    for(int i=0 ; i<1005 ; i++) L[i].clear() ; 
    memset(chuaxet, true , sizeof(chuaxet)) ; 
    memset(truoc,0,sizeof(truoc)) ; 
    cin>>n>>e>>s>>t ; 
    int dau,cuoi ; 
    while(e--){
        cin>>dau>>cuoi  ; 
        L[dau].push_back(cuoi) ; 
    }
}
// void dfs(int u){
//     chuaxet[u] = false;  
//     stack <int> st; 
//     st.push(u) ; 
//     while(!st.empty()){
//         int k = st.top() ; st.pop() ; 
//         for(int i=0 ; i<L[k].size() ; i++){
//             int v = L[k][i] ; 
//             if(chuaxet[v] == true){
//                 chuaxet[v] = false ; 
//                 truoc[v] = k ; 
//                 st.push(k) ;
//                 st.push(v) ; 
//                 break ; //THIẾU BREAK LÀ SAI
//             }
//         }
//     }
// }
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
    if(truoc[t] == 0) {
        cout<<-1<<endl ;  
    }
    else {

    stack<int> IN ;
    IN.push(t) ; 
    int u= truoc[t] ; 
    while(u!=s){
        IN.push(u) ; 
        u = truoc[u] ; 
    }
    IN.push(s) ; 
    while(!IN.empty()){
        cout<<IN.top()<<" " ; 
        IN.pop() ; 
    }
    cout<<endl ; 
    }
}
main(){
    int t ;cin>>t ; 
    while(t--){
        input() ; 
        dfs(s) ; 
        induongdi() ; 
    }
}