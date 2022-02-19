#include<bits/stdc++.h>
using namespace std; 
main(){
    int n  ;cin>>n ; 
    int G[n+5][n+5] ; 
    for(int i=1 ; i<=n ; i++) 
        for(int j=1 ; j<=n; j++) cin >>G[i][j] ;
    for(int i=1 ; i<=n ; i++){
        for(int j=1 ;j<=n ; j++){
            if(G[i][j] == 1 ) {
                cout<<j<<" " ; 
            }
        }
        cout<<endl ; 
    } 
}