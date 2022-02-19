#include<iostream>
using namespace std ; 
int n ; 
long long F[55]  ;
void input(){
    cin>> n ; 
    F[1] = 1 ; F[2] = 2 ; F[3] = 4 ; 
    for(int i=4 ; i<=n ; i++) {
        F[i] = F[i-1] + F[i-2] + F[i-3] ; 
    }
}
main() {
    int t ; cin>>t ; 
    while(t--) {
        input()  ; 
        cout<<F[n]<<endl ; 
    }
}