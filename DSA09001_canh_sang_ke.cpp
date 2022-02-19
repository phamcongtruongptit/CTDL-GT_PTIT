// #include<bits/stdc++.h>
// using namespace std ; 
// int G[1005][1005] ; 
// void solve(){
//     memset(G,  0 , sizeof(G)) ; 
//      int V , E ; 
//      cin>>V>>E ; 
//      int dau, cuoi ; 
//      vector< vector<int> > KE(V+1) ;
//      while(E--){
//         cin>>dau>>cuoi ; 
//         G[dau][cuoi] = 1  ; 
//         G[cuoi][dau] = 1 ; 
//      }
//      for(int i=1 ; i<=V ; i++){
//          cout<<i<<": " ; 
//          for(int j=0 ; j<=V ; j++){
//             if(G[i][j] == 1 )
//                 cout<<j<<" "; 
//          }
//          cout<<endl ;
//      }
// }
// main(){
//     int t; cin>>t  ; 
//     while(t--){
//         solve() ; 
//     }
// }
#include<bits/stdc++.h>
using namespace std ; 
vector <int> List[1005] ; 
void solve(){
    for(int i=0 ;i<1005 ; i++) List[i].clear() ; 
    int v , e ; 
    cin>>v>>e ; 
    int dau,cuoi ; 
    while(e--){
        cin>>dau>>cuoi ; 
        List[dau].push_back(cuoi) ; 
        List[cuoi].push_back(dau) ; 
    }
    for(int i=1 ; i<=v ; i++){
        cout<<i<<": " ; 
        for(int j=0 ; j<List[i].size(); j++) cout<<List[i][j]<<" " ; 
        cout<<endl ; 
    }
    
}
main(){
    int t ; cin>>t ; 
     while(t--){
         solve() ; 
     }
}