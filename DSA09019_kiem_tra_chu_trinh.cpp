// CHU trình là khi duyệt dfs or bfs gặp một đỉnh đã xét thì đỉnh đó phải là đã được địch # đánh dấu chứ ko phải
// do đỉnh đó. 
#include<bits/stdc++.h>
using namespace std ;
int n , e  ; 
bool chuaxet[1005] ; 
vector<int> L[1005] ; 
bool check ; 
void input(){
    cin>>n>>e ; 
    for(int i=0 ; i<1005 ; i++) L[i].clear() ; 
    memset(chuaxet , true , sizeof(chuaxet)) ; 
    while(e--){
        int d , c ; cin>>d>>c ; 
        L[d].push_back(c) ; 
        L[c].push_back(d) ; 
    }
}
void dfs(int u, int t){
    chuaxet[u] = false ; 
    for(int i=0 ; i<L[u].size() ; i++){
        int v = L[u][i] ; 
        if(chuaxet[v] == true ){
            dfs(v , u) ; 
        } else if(chuaxet[v] == false and v!=t ) check = true ; 
    }
}
void chutrinh(){
    check = false ; 
    for(int i=1 ; i<=n ; i++){
        memset(chuaxet , true , sizeof(chuaxet)) ; 
        dfs(i,0) ; 
        if(check == true) {
            cout<<"YES"<<endl ; return ; 
        }
    }
    cout<<"NO"<<endl ; 
}
main(){
    int t ; cin>>t ; 
    while(t--){
        input() ; 
        chutrinh() ; 
    }
}