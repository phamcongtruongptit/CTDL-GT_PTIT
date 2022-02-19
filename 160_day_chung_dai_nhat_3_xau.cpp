#include<bits/stdc++.h>
using namespace std ; 
int a,b,c ; 
string A,B,C ; 
int F[105][105][105] ; 
void input(){
    cin>>a>>b>>c ; 
    cin>>A>>B>>C ; 
}
int longmax(){
    memset(F , 0 , sizeof(0) ) ; 
    for(int i=1 ; i<= a ; i++) {
        for(int j=1 ; j<=b ; j++) {
            for(int k=1 ; k<=c ; k++) {
                if(A[i-1] == B[j-1] and A[i-1] == C[k-1]) F[i][j][k] = F[i-1][j-1][k-1] + 1 ; 
                else F[i][j][k] = max(F[i-1][j][k] , max(F[i][j-1][k] , F[i][j][k-1] )) ;  
            }
        }
    }
    return F[a][b][c] ; 
}
void solve(){
    input() ; 
    cout<<longmax()<<endl ; 
}

main() {
    int t; cin>>t ;
    while(t--) solve() ; 
}