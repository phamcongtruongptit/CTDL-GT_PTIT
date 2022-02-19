#include<bits/stdc++.h>
using namespace std ; 
long MAX = 1e9 +7 ; 
int F[1005][1005] ;
int tinh(int  n , int  k ) {
    memset(F , 0 , sizeof(F)) ; 
    for(int i=0 ; i<=n ; i++) F[0][i] =1 ; 
    for(int i =1 ; i<=n ; i++)  {
        for(int j=i ; j<=n ; j++ ){
            F[i][j] = ( F[i-1][j-1]% MAX + F[i][j-1] % MAX) % MAX ; 
        }
    }
    return F[k][n] ; 
} 
main(){
    int t;  cin>> t ; 
    while(t--) {
        int  n  , k ; 
        cin>>n>>k ; 
        cout<<tinh(n , k )<<endl ; 
    }
}