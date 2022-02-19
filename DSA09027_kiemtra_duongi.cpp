#include<bits/stdc++.h>
using namespace std ; 
int n,e,x,y,q,truoc[1005] ; 
bool chuaxet[1005] ; 
vector<int> L[1005] ; 
void input(){
    cin>>n>>e; 
    for(int i=0 ; i<1005 ; i++) L[i].clear() ; 
    while(e--){
        int d , c ; 
        cin>>d>>c ; 
        L[d].push_back(c) ; 
        L[c].push_back(d) ; 
    }
}
void init(){
    memset(truoc, 0 , sizeof(truoc)) ; 
    memset(chuaxet , true , sizeof(chuaxet)) ; 
}
void dfs(int x){
    chuaxet[x] = false ; 
    for(int i=0 ; i<L[x].size() ; i++){
        int v = L[x][i] ; 
        if(chuaxet[v] == true){
            truoc[v] = x ; 
            dfs(v) ; 
        }
    }
}

main(){
    int t ; cin>>t ; 
    while(t--){
        input() ; 
        cin>>q ; 
        while(q--){
            init() ; 
            cin>>x>>y ; 
            dfs(x) ; 
            if(truoc[y] != 0) cout<<"YES"<<endl ; 
            else cout<<"NO"<<endl ; 
        }
    }
}