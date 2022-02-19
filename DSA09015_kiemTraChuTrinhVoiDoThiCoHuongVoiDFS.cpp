#include<bits/stdc++.h>
using namespace std ; 
int n , e ; 
vector<int> L[1005] ; 
bool chuaxet[1005] ; 
void input(){
    for(int i=0 ; i<1005 ; i++) L[i].clear() ; 
    cin>>n>>e ; 
    while(e--){
        int d,c; 
        cin>>d>>c ; 
        L[d].push_back(c) ; 
    }
}
bool BFS(int u){
    chuaxet[u] =false ; 
    queue <int> Q ; Q.push(u) ; 
    while(!Q.empty()){
        int x = Q.front() ; Q.pop() ; 
        for(int i=0 ; i<L[x].size() ; i++){
            int v = L[x][i] ; 
            if(chuaxet[v] == true){
                chuaxet[v] = false ; Q.push(v) ; 
            } else if(v == u) return true ; 
        }
    }
    return false  ; 
}
void checkchutrinh(){
    for(int i=1 ; i<=n ; i++){
        memset(chuaxet , true , sizeof(chuaxet)) ; 
        if(BFS(i) == true ){
            cout<<"YES\n" ; return ; 
        }
    }
    cout<<"NO\n" ; 
}
main(){
    int t; cin>>t  ; 
    while(t--){
        input() ; 
        checkchutrinh() ; 
    }
} 