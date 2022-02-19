#include<bits/stdc++.h>
using namespace std  ; 
string s  ; int F[1005][1005] ; 
int n ; 
void input() {
    cin>>s ;
    n = s.size() ;  
}
int doixungmax() {
    memset(F , 0 ,sizeof(F)); 

    for(int i=0 ; i<n ; i++) F[i][i] = 1 ; 
    for(int k = 1; k<n  ; k++) {
        for(int i=0 ; i<=n-k-1 ; i++){
            int j=i+k ; 
            if(k==1) {
                if(s[i] == s[j]) F[i][j] =1 ; 
            } else if(s[i] == s[j]) F[i][j] = F[i+1][j-1] ; 
        }
    }
     int max  = 0 ; 
     for(int i=0 ; i<n-1 ; i++) {
         for(int j=i ; j<n ; j++) {
             if(F[i][j] == 1 and j-i+1 > max) max = j-i+1 ;  
         }
     }
     return max; 
}
void solve() {
    input() ; 
    cout<<doixungmax()<<endl ; 
}
main() {
    int t  ; cin>>t  ; 
    while(t--) solve() ; 
}