#include<bits/stdc++.h>
using namespace std ; 
int  n ; int M[1005] , F[1005] ; 
void input(){
    cin>>n ; 
    for(int i=1 ;i<=n; i++) cin>>M[i] ; 
}
int tongmax() {
    int tong =  0 ; 
    memset(F , 0 , sizeof(F)) ; 
    F[1] = M[1] ; 
    tong = max(F[1] , tong ) ; 
    for(int i=2 ; i<=n ; i++) {
        F[i] = M[i] ; 
        for(int j=1 ; j<i ; j++){
            if(M[j]<M[i]) 
                F[i] = max(F[i]  , F[j] + M[i]) ; // them duoc thang M[i] vao tong
        }
    tong = max(tong , F[i]) ; 
    }
    return tong ; 
}
void solve(){
    input() ; 
    cout<<tongmax()<<endl ; 
}
main(){
    int t  ; 
    cin>>t ; 
    while(t--) solve() ; 
}