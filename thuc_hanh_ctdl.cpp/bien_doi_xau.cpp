#include<bits/stdc++.h>
using namespace std ; 
main() {
    int t; cin>>t;  
    while(t--) {
        string s1,s2 ; 
        cin>>s1>>s2  ; 
        int l1 = s1.length() , l2 = s2.length() ; 
        int M[l1+5][l2+5] ; 
        for(int i=0 ; i<=l1 ; i++) {
            for(int j=0 ; j<=l2 ; j++) {
                if(i==0 || j==0 ) {
                    M[i][j] = i+j ; 
                }
                else if(s1[i-1] == s2[j-1]) {
                    M[i][j] = M[i-1][j-1] ; 
                }
                else {
                    M[i][j] = min(M[i-1][j-1] , min(M[i-1][j] , M[i][j-1])) + 1 ; 
                }
            }
            
        }
        cout<<M[l1][l2]<<endl ;
    }
}