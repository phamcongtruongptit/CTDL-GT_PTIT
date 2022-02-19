#include<iostream>
using namespace std ; 
#define X 1000
int n  , M[X]  , x;  
int solve(){
    int k=0 ; 
    for(int i=0 ; i<n ; i++) {
        if (M[i] == x){
            k++ ;  
        }
    }
    if(k>0) return k ; 
    else return -1 ; 
}
main() {
    int t ; cin>>t ; 
    while(t--) {
        cin>>n>>x ; 
        for(int i=0 ; i<n ; i++) cin>>M[i] ; 
        cout<<solve()<<endl  ; 
    }
    
}