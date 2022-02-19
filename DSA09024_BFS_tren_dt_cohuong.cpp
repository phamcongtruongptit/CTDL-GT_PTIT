#include<bits/stdc++.h>
using namespace std ; 
int n,e,u ; 
bool chuaxet[1005] ; 
vector<int> L[1005] ; 
void input(){
    cin>>n>>e>>u ; 
    memset(chuaxet , true , sizeof(chuaxet)) ; 
    for(int i=0 ; i<1005; i++) L[i].clear() ; 
    while(e--){
        int d,c ; cin>>d>>c ; 
        L[d].push_back(c) ; 
    //    L[c].push_back(d) ; 
    }
}
void bfs(int u){
    queue<int>Q ; 
    Q.push(u) ; 
    chuaxet[u] = false ; 
    while(!Q.empty()){
        int s = Q.front() ; Q.pop() ; 
        cout<<s<<" "; 
        for(int i=0 ; i<L[s].size() ; i++){
            int v = L[s][i] ; 
            if(chuaxet[v] == true) {
                Q.push(v) ; 
                chuaxet[v] = false ;
            }
        }
    }
    cout<<endl ; 
}
main(){
    int t; cin>>t ; 
    while(t--){
        input() ; 
        bfs(u)  ; 
    }
}