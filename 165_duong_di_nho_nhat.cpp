#include<bits/stdc++.h>
using namespace std ; 
int hang, cot ; 
int M[1005][1005] , C[1005][1005] ; 
void input() {
    cin>>hang>>cot; 
    for(int i=1 ; i<=hang; i++)
        for(int j=1 ; j<=cot ; j++) cin>>M[i][j] ; 
}
int tinh(){
    memset(C ,   0 , sizeof(C)) ; 
    C[1][1] = M[1][1] ; 
    for(int i=2; i<=cot ; i++) {
        C[1][i]  = M[1][i] +  C[1][i-1] ; 
    }
    for(int i=2 ; i<=hang ; i++ ){
        C[i][1] = M[i][1] +  C[i-1][1] ; 
    }
    for(int i=2 ; i<=hang ; i++){
        for(int j=2 ; j<=cot ; j++) {
            C[i][j] = min(M[i][j] + C[i-1][j] , min(M[i][j] + C[i][j-1] , M[i][j]+ C[i-1][j-1])); 
        }
    }
    return C[hang][cot] ; 
}
main() {
    int t ; cin>>t ; 
    while(t--) {
        input() ; 
        cout<<tinh()<<endl ; 
    }
} 
// tu tuong: duyet quy hoach dong tren ma tran. Tinh min 3 vi tri ma co the di den no. 