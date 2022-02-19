#include<bits/stdc++.h>
using namespace std ; 
main(){
    int n  ; cin>>n ; cin.ignore() ; 
    int G[n+5][n+5] ; 
    memset(G, 0 , sizeof(G) );
    for(int i=1 ; i<=n ; i++){
        string s ; 
        getline(cin, s) ; 
        stringstream ss; 
        ss<<s  ; 
        int k ; 
        while(ss>>k) {
            G[i][k] = 1 ; 
            G[k][i] = 1 ; 
        }
    }
    for(int i=1 ; i<=n ; i++){
        for(int j=1 ; j<=n ; j++) cout<<G[i][j]<<" " ; 
        cout<<endl ; 
    }
}