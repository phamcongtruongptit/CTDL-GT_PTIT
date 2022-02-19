#include<bits/stdc++.h>
using namespace std ;
int n ; int M[1005] ; int F[1005] ; 
int longmax(){
    F[1] = 1 ; 
    int kq=0 ; 
    for(int i=2 ; i<=n ; i++) {
        F[i] =1 ; 
        for(int j=1; j<i ; j++) {
            if(M[j] < M[i])
                 F[i] = max(F[i] , F[j] + 1) ; // them duoc thang M[i]
        }
        kq = max(kq , F[i]) ; 
    }
    return kq ; 
}

main() {
    cin>>n ; 
    for(int i=1; i<=n ; i++) cin>>M[i] ; 
    cout<<longmax()<<endl ; 
}