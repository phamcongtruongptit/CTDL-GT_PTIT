#include<bits/stdc++.h>
using namespace std ;
int n , e  ; 
bool chuaxet[1005] ; 
vector<int> L[1005] ; 
void input(){
    cin>>n>>e ; 
    memset(chuaxet,true  , sizeof(chuaxet))  ; 
    for(int i=0 ; i<1005 ; i++) L[i].clear() ; 
    while(e--){
        int d , c ; 
        cin>>d>>c ; 
        L[d].push_back(c) ; 
        L[c].push_back(d) ; 
    }
}
void dfs(int u){
    chuaxet[u] = false ; 
    for(int i=0 ; i<L[u].size() ; i++){
        int v = L[u][i] ; 
        if(chuaxet[v] == true ){
            dfs(v) ; 
        }
    }
}
int tplt(){
    int count = 0 ;
    for(int i=1 ; i<=n ; i++){
        if(chuaxet[i] == true){
            count ++ ; 
            dfs(i) ; 
        }
    }
    return count ; 
}
main(){
    int t ; cin>>t ; 
    while(t--){
        input() ; 
        cout<<tplt()<<endl ; 
    }
}