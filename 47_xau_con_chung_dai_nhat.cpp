#include<bits/stdc++.h>
using namespace std ; 
string s1 , s2 ; 
int n1,n2  , F[1005][1005] ; 
 // F[n1][n2]
 // neu s1[i] == s2[j] thi F[i][j] = F[i-1][j-1] + 1 ; 
 // neu s1[i] != s2[j] thi F[i][j] = max(f[i-1][j] ,F[i][j-1])
void input() {
    cin>>s1>>s2  ; 
    n1 = s1.size() ; 
    n2 = s2.size() ; 
}
int longmax() {
    // for(int i=0 ; i<=n1  ; i++ ) F[i][0] = 0  ;
    // for(int i=0 ; i<=n2 ; i++) F[0][i] = 0 ; 
    memset(F ,0 , sizeof(F)) ;  // lenh dien tat ca cac vi tri trong ma tran bang 0
    for(int i=1 ; i<=n1 ; i++){
        for(int j=1 ; j<=n2 ; j++) {
            if(s1[i-1] == s2[j-1] ) F[i][j] = F[i-1][j-1] + 1 ; 
            else F[i][j] = max(F[i-1][j] , F[i][j-1]) ;  
        }
    }
    return F[n1][n2] ; 
}
void solve(){
    input() ; 
    cout<<longmax()<<endl ; 
}
main() {
    int t ; cin>>t ; 
    while(t--) solve() ; 
}