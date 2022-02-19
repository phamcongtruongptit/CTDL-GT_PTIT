#include<bits/stdc++.h>
using namespace std ; 
int  n ,e ; 
bool check ; 
vector<int> L[1005] ; 
bool chuaxet[1005] ; 
void input(){
    cin>>n>>e;  
    for(int i=0 ; i<1005 ; i++) L[i].clear() ; 
    int d , c ; 
    while(e--){
        cin>>d>>c ; 
        L[d].push_back(c) ; 
    }
}
void DFS(int u){
    chuaxet[u] = false; 
    stack<int> st ; 
    st.push(u) ; 
    while(!st.empty() ){
        int x= st.top() ; st.pop() ; 
        for(int i=0 ; i<L[x].size() ; i++){
            int v = L[x][i] ; 
            if(chuaxet[v] == true ){
                chuaxet[v] = false ; 
                st.push(x)  ; st.push(v) ; break ; 
            } else if(v == u) check  = true ; 
        }
    }
}
void checkchutrinh(){
    for(int i=1 ; i<=n ; i++){
        check  = false; 
        memset(chuaxet , true  , sizeof(chuaxet)) ; 
        DFS(i) ; 
        if(check == true ) {
            cout<<"YES\n" ; return ; 
        }
    }
    cout<<"NO\n" ; 
}
main(){
    int t; cin>>t ;
    while(t--){
        input() ; 
        checkchutrinh() ; 
    }
}