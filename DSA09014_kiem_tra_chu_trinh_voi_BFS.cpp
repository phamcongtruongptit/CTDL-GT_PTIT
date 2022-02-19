#include<bits/stdc++.h>
using namespace std ; 
int visit[1005] , n ,e ; 
vector<int> L[1005] ; 
bool check ; 
void input() {
    cin>>n>>e; 
    int d ,c  ; 
    for(int i=0 ; i<1005 ; i++) L[i].clear() ; 
    while(e--){
        cin>>d>>c ; 
        L[d].push_back(c) ; 
        L[c].push_back(d) ; 
    }
}
void bfs(int u){
    visit[u] = 1 ; 
    queue<int> Q ; Q.push(u) ; 
    while(!Q.empty()){
        int x = Q.front() ;  Q.pop() ;
        for(int i=0 ; i<L[x].size() ; i++){
            int v = L[x][i] ; 
            if(visit[v] == 0){
                visit[v] =1 ; Q.push(v) ; 
            } else if(visit[v] == 1) check = true ; 
        } 
        visit[x] = 2  ; 
    }
}
void checkchutrinh(){
    for(int i=1 ; i<=n ; i++) {
        check   = false ; 
        memset(visit , 0 , sizeof(visit)) ; 
        bfs(i) ; 
        if(check == true){
            cout<<"YES\n" ; return  ; 
        }
    }
    cout<<"NO\n" ; 
}

main(){
    int t;cin>>t ; 
    while(t--){
        input() ; 
        checkchutrinh() ; 
    }
}