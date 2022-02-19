#include<iostream>
#include<algorithm>
using namespace std ;
#define max 1000000007
long  solve() {
    long    n ; cin>>n  ; 
    long   M[n] ; 
    long  sum = 0 ; 
    for(long i=0 ; i<n ; i++)cin>>M[i] ; 
    sort( M , M+n ) ; 
    for(long i= 0 ; i<n ; i++) {
     //   sum = sum%max + ((M[i]%max) * (i%max) ) % max  ; // baì này thậm chí 
     // không cần áp dụng công thức lấy phần dư trong lúc tính tổng
     // tính một cách thực dụng hơn nhiều. 
     sum+=M[i] * i ; 
    }
    return sum%max ; 
}
main() {
    int t ; cin>>t ;
    while(t--) {    
        cout<< solve()<<endl   ; 
    }   
}