#include<bits/stdc++.h>
using namespace std  ;
int n ,e ; 
int G[1005][1005] ; 
void input(){
    memset(G , 0 , sizeof(G)) ; 
    int d , c ; 
    cin>>n>>e ; 
    while(e--){
        cin>>d>>c ; 
        G[d][c] = 1 ; 
    }
}
int tinh(){
    int vao , ra ; 
    for(int i=1 ; i<=n ; i++){
        vao = 0  ; ra = 0 ; 
        for(int j=1 ; j<=n ; j++){
            if(G[i][j] == 1) vao++ ;
            if(G[j][i] == 1) ra ++  ;  
        }
        if(vao!=ra) return 0 ; 
    }
    return 1; 
}
main(){
    int t ; cin>>t ; 
    while(t--){
        input() ; 
        cout<<tinh()<<endl ; 
    }
}