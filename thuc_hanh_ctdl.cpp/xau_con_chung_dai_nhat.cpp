#include<bits/stdc++.h>
using namespace std ; 
int dodaimax(string s1, string s2){
    int c[1005][1005] ; 
    memset(c,0 , sizeof c) ; 
    int l1 = s1.length() , l2 = s2.length() ; 
    for(int i=1 ; i<=l1; i++ ){
        for(int j=1; j<=l2; j++){
            if(s1[i-1] == s2[j-1]) c[i][j] = c[i-1][j-1]+1 ; 
            else {
                c[i][j] = max(c[i-1][j] , c[i][j-1]) ; 
            }
        }
    }
    return c[l1][l2] ; 
}

main() {
    int t ; cin>>t ; 
    while(t--) {
        string s1,s2 ; 
        cin>>s1>>s2 ; 
        cout<<dodaimax(s1,s2)<<endl ; 
    }
}