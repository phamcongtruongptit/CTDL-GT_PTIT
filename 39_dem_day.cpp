#include<iostream>
using namespace std ;
// Số dãy  = 2^(n-1)
long long n ; 
int M = 123456789 ; 
int poww(long long n) {
    if (n==0) return 1 ; 
    long long k = poww(n/2) % M ; 
    if(n%2 == 0) return (k*k) % M ; 
    else
    return ((2%M)*((k*k) % M) ) %M ; 
}
void solution() {
    cin>>n ;
    cout<<poww(n-1) <<endl;  
}
main() {
    int t; cin>>t ; 
    while(t--) {
        solution() ; 
    }
}