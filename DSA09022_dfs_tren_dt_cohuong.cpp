// Code bằng ma trận kề: độ phức tạp n2. Còn với danh sách kề độ phức tạp thấp hơn .
#include<bits/stdc++.h>
using namespace std ;  
int n , e , u ; 
vector<int> List[1005] ; 
bool chuaxet[1005];
void input(){
    cin>>n>>e>>u ; 
    for(int i=1 ; i<1005; i++) List[i].clear() ; 
    memset(chuaxet , true,  sizeof(chuaxet)) ; 
    while(e--){
        int dau , cuoi  ; 
        cin>>dau>>cuoi ; 
        List[dau].push_back(cuoi) ; 
      //  List[cuoi].push_back(dau) ; 
    }
}
void dfs(int u){
    cout<<u<<" " ; 
    stack<int>st ; 
    chuaxet[u] = false ; 
    st.push(u) ; 
    while(!st.empty()){
        int s = st.top() ; 
        st.pop() ; 
        for(int i=0 ; i<List[s].size() ; i++){
                int v = List[s][i] ; 
                if(chuaxet[v] == true){
                    cout<<v<<" " ; 
                    chuaxet[v] = false ;
                    st.push(s); 
                    st.push(v); 
                    break ; 
                }
        }
    }
}
main(){
    int t ; 
    cin>>t  ; 
    while(t--){
        input() ; 
        dfs(u) ; 
        cout<<endl; 
    }
}

// #include<bits/stdc++.h>
// using namespace std ;
// int G[1005][1005] ; 
// int n  , e , u  ; 
// void solve() {
//     cin>>n>>e>>u ;
//     bool chuaxet[n+5] ; 
//     for(int i=1 ; i<=n ; i++) chuaxet[i] = true ;  
//     memset(G , 0 ,sizeof(G) );
//     int dau , cuoi  ; 
//     while(e--){
//         cin>>dau>>cuoi ; 
//         G[dau][cuoi] = 1 ; 
//         G[cuoi][dau] = 1; 
//     }
//     stack<int> st ; 
//     chuaxet[u] = false ; 
//     st.push(u) ; 
//     cout<<u<<" "; 
//     while(!st.empty()){
//         int k = st.top() ; st.pop() ; 
//         for(int i=1 ; i<=n ; i++){
//             if(G[k][i] == 1 and chuaxet[i] == true ){
//                 cout<<i<<" "  ; 
//                 chuaxet[i] = false ; 
//                 st.push(k) ; 
//                 st.push(i) ; 
//                 break ; 
//             }
//         }
//     }
//     cout<<endl ; 
// }
// main(){
//     int t ; cin>>t ; 
//     while(t--) solve() ; 
// }