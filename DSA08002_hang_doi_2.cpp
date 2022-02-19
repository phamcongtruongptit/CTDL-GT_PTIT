#include<bits/stdc++.h>
using namespace std ; 
main(){
    int n ; cin>>n ; 
    string s; 
    queue <int> Q  ; 
    while(n--){
        cin>>s ; 
        if(s== "PUSH"){
            int  k ; cin>> k ; 
            Q.push(k) ; 
        }
        if(s=="PRINTFRONT") {
            if(Q.empty()) cout<<"NONE"<<endl ; 
            else cout<<Q.front()<<endl ; 
        }
        if(s=="POP"){
            if(Q.empty()) continue ; 
            else Q.pop() ; 
        }
    }
}