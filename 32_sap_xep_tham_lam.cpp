#include<iostream>
#include <algorithm>
using namespace std ; 
int n ;
int M[51] ; 
int check[51] ; 
void input() {
    cin>>n ; 
    for(int i=0 ; i<n ; i++){
        cin>>M[i] ; check[i] = M[i] ; 
    }
}
string  in() {
    sort(check , check + n) ; 
    bool ok = true ; 
    for(int i=0 ; i<n ; i++) {
        if( (M[i] != check[i]) and (M[i] != check[n-i-1])   ) {
            ok = false ; break ; 
        }
    }
    if(ok) return "Yes" ; 
    else {
        return "No" ; 
    }
 
}
void solve() {
    input() ;
    cout<<in()<<endl ; 
}

main() {
    int t ; cin>>t  ; 
    while(t--) {
        solve() ; 
    }
}