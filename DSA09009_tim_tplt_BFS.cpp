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
void bfs(int u){
    queue<int> Q ;
    chuaxet[u] = false ; 
    Q.push(u) ; 
    while(!Q.empty()){
        int k  = Q.front()  ; Q.pop() ; 
        for(int i=0 ; i<L[k].size()  ; i++){
            int v = L[k][i] ; 
            if(chuaxet[v] == true){
                chuaxet[v] = false ; 
                Q.push(v) ; 
            }
        }
    }
}
int tplt(){
    int count = 0 ;
    for(int i=1 ; i<=n ; i++){
        if(chuaxet[i] == true){
            count ++ ; 
            bfs(i) ; 
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