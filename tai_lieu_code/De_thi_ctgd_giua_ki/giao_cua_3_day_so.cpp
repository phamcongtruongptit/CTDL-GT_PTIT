#include<bits/stdc++.h>
using namespace std ;
int A[100002] , b[1000002] , c[1000002] ; 
int n , m , k  ; 
void solve() {
    int i= 0  , j= 0  , l = 0 ; 
    bool ch = false ; 
    while(i<n and j<m and l<k ){
        if(A[i] == b[j] and A[i] == c[l] ) {
            cout<<A[i]<<" "; 
            ch = true ; 
            i++ ; j++ ; l++ ; 
        }
        else {
            int maxx = max(A[i] , max(b[j] , c[l]) ) ; 
            if(A[i] < maxx ) i++ ; 
            if(b[j] < maxx) j++ ; 
            if(c[l] < maxx) l++  ; 
        }
    }
    if(!ch) cout<<-1  ; 
}

main() {
    int t ; cin>>t ; 
    while (t--) {
        cin>>n>>m>>k  ; 
        for(int i=0 ; i<n ; i++) cin>>A[i] ; 
        for(int i=0  ; i<m ; i++ ) cin>>b[i] ; 
        for(int i=0  ; i<k ; i++) cin>>c[i] ;
        solve() ; 
        cout<<endl ; 
    }
}