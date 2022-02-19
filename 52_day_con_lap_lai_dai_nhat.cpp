#include<bits/stdc++.h>
using namespace std ; 
string s  ; int n ; 
int F[1005][1005] ; 
void input() {
    cin>>n ;
    cin>>s ; 
    n = s.size() ; 
}
int longmax() {
    memset(F , 0 , sizeof(F)) ; 
    for(int i=1 ; i<=n ; i++){
        for(int j=1  ; j<=n ; j++) {
            if(s[i-1] == s[j-1] and i!=j) F[i][j] = F[i-1][j-1] + 1; 
            else F[i][j] = max(F[i-1][j] , F[i][j-1]) ; 
        }
    }
    return F[n][n] ; 
}
void solve() {
     input() ; 
    cout<<longmax()<<endl ; 
}
main(){
    int t ; cin>>t ; 
    while(t--) solve() ; 

}