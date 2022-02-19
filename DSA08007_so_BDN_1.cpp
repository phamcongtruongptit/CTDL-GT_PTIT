#include<bits/stdc++.h>
using namespace std ; 
long long tinh(long long n){
    deque <long long> Q; 
    Q.push_front(1) ; 
    int count = 0 ; 
    while(true){
        long long k = Q.front() ; 
        if(k<=n) count ++ ; 
        else return count  ; 
        Q.pop_front() ; 
        Q.push_back(k*10)  ; 
        Q.push_back(k*10 + 1) ; 
    }
}
main(){
    int t ; cin>>t  ; 
    while(t--){
        long long n ; cin>>n ; 
        cout<<tinh(n) <<endl ; 
    }
}