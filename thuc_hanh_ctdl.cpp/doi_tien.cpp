#include<iostream>
using namespace std ; 
main() {
    int t ; 
    cin>>t ; 
    int M[10] = {1,2, 5 , 10,20, 50, 100, 200, 500, 1000} ; 
    while(t--) {
        int n ; 
        int k = 9 ,  d = 0 ;
        cin>>n ; 
        while(n) {
            d+=n / M[k] ; 
            n%=  M[k] ; 
            k-- ; 
        }
        cout<<d<<endl ; 
    }

}