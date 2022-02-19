// bafi fanboinaci wworl 
 
#include<iostream>
using namespace std ; 
#define M 1e9 +7 
long long F[100] ; 
char Fiba(int n , long long k) {
    if (n==1 ) return 'A' ; 
    if(n==2 ) return 'B' ; 
    if (n<=F[n-2]) return Fiba(n-2 , k) ;
    return Fiba(n-1 , k-F[n-2]) ; 
}
main(){
    int t;  cin>>t ;
    while(t--){
    int n ; long long  k ; 
    cin>>n>>k ; 
    F[0] = 0 ; F[1] = 1 ; 
    for(int i=2 ; i<92 ; i++) {
        F[i] = F[i-1] +F[i-2] ;  
    }
    cout<<Fiba(n,k)<<endl ; 

    }
}