#include<bits/stdc++.h>
using namespace std ; 
int n,e ; 
vector<int> L[1005] ; 
bool chuaxet[1005] ; 
void init(){
    memset(chuaxet, true , sizeof(chuaxet)) ; 
}
void input(){
    for(int i=0 ; i<1005 ; i++) L[i].clear() ; 
    cin>>n>>e ; 
    int d ,c ; 
    while(e--){
        cin>>d>>c ; 
        L[d].push_back(c) ; 
        L[c].push_back(d) ; 
    }
}
void bfs(int u){
    chuaxet[u] = false  ;
    queue<int> Q ; 
    Q.push(u) ; 
    while(!Q.empty()){
        int k = Q.front() ; Q.pop() ; 
        for(int i=0 ; i<L[k].size() ; i++){
            int v =L[k][i] ; 
            if(chuaxet[v] == true) {
                chuaxet[v] = false  ; 
                Q.push(v) ; 
            }
      }
    }
}
void canhcau(){
    init() ; 
    for(int i=1 ; i<=n; i++){
        for(int j=0 ; j<L[i].size(); j++) {
            int k = L[i][j] ; 
            L[i].erase(L[i].begin() + j) ;
            bfs(i) ; 
            bool check = false ; 
            for(int u=1 ; u<=n ; u++)
                if(chuaxet[u] == true ) {check  = true;break ;  }
            if(check == true and i<k ) cout<<i<<" "<<k<<" " ; 
            L[i].insert(L[i].begin()+j , k) ;  
            init() ; 
        }
    }
}
main(){
    int t; cin>>t ; 
    while(t--){
        input() ; 
        canhcau() ; 
        cout<<endl ; 
    }
}