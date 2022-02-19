#include<bits/stdc++.h>
using namespace std; 
// string tinh(int n){
//     queue <string> Q ; 
//     Q.push("9") ; 
//     while(true){
//         long long k = 0 ; 
//         string temp = Q.front() ; Q.pop() ; 
//         for(int i=0 ; i<temp.size() ; i++){
//             k = k*10 + (int)temp[i] - 48  ; 
//         } 
//         if(k % n == 0) return temp ; 
//         Q.push(temp + "0") ; 
//         Q.push(temp + "9") ; 
//     }
// }
// main(){
//     int t ; cin>>t ; 
//     while(t--){
//         int n ; cin>>n ; 
//         cout<<tinh(n)<<endl ; 
//     }
// }

long long tinh(int n){
    queue<long long> Q ; 
    Q.push(9) ; 
    if(Q.front() % n == 0) return Q.front() ; 
    while(true){
        long long k = Q.front() ; 
        if(k%n == 0 ) return k ; 
        Q.pop() ; 
        Q.push(k*10) ; 
        Q.push(k*10  + 9) ; 
    }
}
main(){
    int t ; cin>>t ; 
    while(t--){
        int n ; cin>>n ; 
        cout<<tinh(n)<<endl ; 
    }
}