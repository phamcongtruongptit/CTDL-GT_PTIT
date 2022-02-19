#include<bits/stdc++.h>
using namespace std ;
int n , e  ; 
bool chuaxet[1005] ; 
vector<int> L[1005] ; 
void input(){
    cin>>n ; e = n-1 ; 
    memset(chuaxet,true  , sizeof(chuaxet))  ; 
    for(int i=0 ; i<1005 ; i++) L[i].clear() ; 
    while(e--){
        int d , c ; 
        cin>>d>>c ; 
        L[d].push_back(c) ; 
    }
}
int bfs(int u){
    int dinhduyet = 0 ; 
    queue<int> Q ;
    chuaxet[u] = false ; 
    dinhduyet++ ; 
    Q.push(u) ; 
    while(!Q.empty()){
        int k  = Q.front()  ; Q.pop() ; 
        for(int i=0 ; i<L[k].size()  ; i++){
            int v = L[k][i] ; 
            if(chuaxet[v] == true){
                dinhduyet++ ;
                chuaxet[v] = false ; 
                Q.push(v) ; 
            }
        }
    }
    return dinhduyet ; 
}
main(){
    int t ; cin>>t ; 
    while(t--){
        input() ; 
        // khi duyệt bfs hay dfs tại 1 điểm mà tất cả các đỉnh được duyệt thì nó là liên thông mạnh
        if(bfs(1) == n ) cout<<"YES"<<endl ; 
        else cout<<"NO"<<endl  ; 
    }
}