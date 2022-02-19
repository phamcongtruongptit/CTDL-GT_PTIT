#include<bits/stdc++.h>
using namespace std; 
long long C[26][26] ; // phai khai bao long long. 
void tinh(){
    memset(C , 0 ,sizeof(C)) ; 
    for(int i=1 ; i<=25 ; i++) {
        C[i][0] = 1 ; 
        C[0][i] = 1 ; 
    }
    for(int i=1; i<=25 ; i++){
        for(int j=1 ; j<=25 ; j++){
            C[i][j] = C[i][j-1] + C[i-1][j] ; 
        }
    }
}

main() {
    int t ; cin>>t ; 
    while(t--) {
        int m , n ; cin>> n>>m ; 
        tinh() ; 
        cout<<C[n][m]<<endl ; 
    }
}