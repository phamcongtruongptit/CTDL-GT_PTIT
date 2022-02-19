#include<bits/stdc++.h>
using namespace std ;
long long U[1002] ; 
void tinh() {
    U[1] =1 ; 
    int i2 = 1 , i3 = 1 , i5 = 1 ; 
    for(int i=2 ; i<=1000 ; i++) {
        U[i] = min(U[i2]*2 , min(U[i3]*3 , U[i5] * 5)) ; 
        if(U[i] == U[i2] *2) i2++ ; 
        if(U[i] == U[i3] *3) i3++ ; 
        if(U[i] == U[i5] *5) i5++ ; 
    }
}
main(){
    tinh() ; 
    int t ; 
    cin>>t ; 
    while(t--) {
        int n ; cin>>n ; 
        cout<<U[n]<<endl ; 
    }
}