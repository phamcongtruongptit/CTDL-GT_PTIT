#include<bits/stdc++.h>
using namespace std ;
int n, e ; 
bool chuaxet[1005] ; 
vector <int>  L[1005] ;
void init(){
    memset(chuaxet , true  , sizeof(chuaxet)) ; 
} 

void input(){
    cin>>n>>e ; 
    for(int i=1 ; i<1005 ; i++) L[i].clear() ; 
    int d ,c ; 
    while(e--){
        cin>>d>>c ;
        L[d].push_back(c) ; 
        L[c].push_back(d) ; 
    }
}
void bfs(int u){
    chuaxet[u] = false ;
    queue<int>Q ; 
    Q.push(u) ; 
    while(!Q.empty()){
        int k = Q.front()  ; Q.pop() ; 
        for(int i=0 ; i<L[k].size()  ; i++){
            int v = L[k][i] ; 
            if(chuaxet[v] == true ){
                chuaxet[v] =false ; 
                Q.push(v) ; 
            }
        }
    }
}
void dinhtru(){
    init() ; 
    for(int i=1 ; i<=n ; i++){
        chuaxet[i] = false ; 
        if(i==1 ) bfs(2) ; 
        else bfs(1) ; 
        bool check = false ;
        for(int j=1; j<=n ; j++)
            if(chuaxet[j] == true) {
                check = true ; break ; 
            }
        if(check) cout<<i<<" " ; 
        init() ; 
    }
    cout<<endl ; 
}
main(){
    int t; cin>>t ; 
    while(t--){
        input() ; 
        dinhtru() ; 
    }
}