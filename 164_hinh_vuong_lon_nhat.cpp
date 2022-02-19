#include<bits/stdc++.h>
using namespace std ; 
int hang , cot ; 
int M[502][502] , F[502][502] ; 
void input(){
    cin>>hang>>cot ; 
    for(int i=1 ; i<=hang ; i++) 
        for(int j=1 ; j<=cot  ; j++) cin>>M[i][j]  ; 

}
int tinh() {
    int kq = 0 ; 
    memset(F , 0 , sizeof(F) ) ; 
    for(int i=1 ; i<=hang ; i++){
        for(int j=1 ; j<=cot ; j++) {
            if(M[i][j]) F[i][j] = 1 +  min(F[i-1][j] , min(F[i-1][j-1]  , F[i][j-1]) ) ; 
            kq = max(F[i][j] , kq)  ; 
        }
    }
    return kq ; 
}
main() {
    int t; cin>>t ; 
    while(t--) {
        input() ; 
        cout<<tinh()<<endl ; 
    }
}