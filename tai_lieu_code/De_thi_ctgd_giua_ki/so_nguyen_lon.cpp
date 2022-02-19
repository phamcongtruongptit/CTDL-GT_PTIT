#include<bits/stdc++.h>
using namespace std ; 
string s1,s2 ; 
int n1 , n2; 
int F[1005][1005] ;
void input() {
    cin>>s1>>s2 ; 
    n1 = s1.size() ; 
    n2 = s2.size() ; 
}

int longmax() {
    memset(F , 0  , sizeof(F)) ; 
    for(int i=1 ; i<=n1 ; i++) {
        for(int j=1 ; j<=n2 ; j++){
            if(s1[i-1] == s2[j-1]) F[i][j] = F[i-1][j-1] + 1 ; 
            else  F[i][j] =  max(F[i-1][j] , F[i][j-1]) ; 
        }
    }
    return F[n1][n2] ; 
}
void solve() {
    input() ; 
    cout<<longmax()<<endl ; 
}

main() {
    int t ; 
    cin>>t ; 
    while(t--) solve() ; 
}