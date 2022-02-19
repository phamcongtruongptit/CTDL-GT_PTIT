#include<bits/stdc++.h>
using namespace std ; 
int M[105][105] ; 
int n ; 
int solve(string s ){
    for(int i=1 ; i<=n ; i++) {
        for(int j=0 , k = i  ; k<n ; k++ , j++ ){
            if(s[j] == s[k] ) M[j][k] = M[j+1][k-1] ; 
            else
            M[j][k] = min(M[j+1][k] , M[j][k-1]) +1 ; 
        }
    }
    return M[0][n-1] ; 
} 
main() {
    int t ;cin>>t ; 
    while(t--) {
        string s ; cin>>s ; 
        n = s.size() ; 
        cout<<solve(s)<<endl ; 
    } 
}