#include<bits/stdc++.h>
using namespace std ; 
#define MAX 1000 
main() {
    int n ;
    int  M[MAX] , N[MAX] , m=1  ; 
    cin>>n  ; 
    for(int i=0 ; i<n ; i++) cin>>M[i] ; 
    for(int i=0 ; i<n ; i++) {
        N[i]=1 ; 
        for(int j=0; j<i ; j++) {
            if(M[j] < M[i]) N[i] = max(N[j] + 1 , N[i]) ; 
        }
        m = max(m , N[i]); 
    }
    cout<<m<<endl ; 
}