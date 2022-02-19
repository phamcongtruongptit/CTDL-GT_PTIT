#include<iostream>
using namespace std ;
int n , i, k, M[1000] ;

void cauhinhdau(){
    for(int i = 1 ; i<=n ; i++) cin>>M[i] ; 
}

void sinhhoanvi() {
    i  = n-1; 
    while(M[i] > M[i+1] && i>0) i-- ; 
    if(i == 0) {
        for(int i=1 ; i<=n ; i++) cout<<i<<" "; 
        cout<<endl ; 
    } else {
        k = n ; 
        while(M[k] < M[i]) k-- ; 
        int tmp = M[k] ;
        M[k] = M[i] , M[i] = tmp ; 
        int l = i+1  ,  r = n ; 
        while(l<r) {
            int tmp = M[l]  ; M[l] = M[r] ; M[r] = tmp ; 
            l++ ; r-- ; 
        }
        for(int i =1 ; i<=n ; i++) cout<<M[i]<<" " ; 
        cout<<endl ;

    }
    
}

main(){
    int t; cin>>t ; 
    while(t--){
        cin>>n ; 
        cauhinhdau();
        sinhhoanvi() ;
    }
}