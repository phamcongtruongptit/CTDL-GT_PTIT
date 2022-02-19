#include<bits/stdc++.h>
using namespace std ; 
long long tinh(int n){
    deque <long long> Q ; 
    Q.push_front(1) ; 
    while(true){
        long long k=Q.front() ; 
        if(k%n == 0 ) return k ; 
        Q.pop_front() ; 
        Q.push_back(k*10) ; 
        Q.push_back(k*10+1) ; 
    }
}
main(){
    int t ; cin>> t; 
    while(t--){
        int n ; cin>>n ; 
        cout<<tinh(n)<<endl  ; 
    }
}