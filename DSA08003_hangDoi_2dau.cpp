#include<bits/stdc++.h>
using namespace std ; 
main(){
    int n ; cin>>n ; 
    deque<int> Q ; 
    string s ;
    while(n--){
        cin>>s ; 
        if(s== "PUSHFRONT"){
            int x ; cin>>x ; 
            Q.push_front(x) ; 
        }
        if(s=="PRINTFRONT"){
            if(Q.empty()) cout<<"NONE"<<endl ; 
            else cout<<Q.front()<<endl ; 
        }
        if(s=="POPFRONT"){
            if(Q.empty()) continue;
            else Q.pop_front() ; 
        }
        if(s=="PUSHBACK"){
            int x ; cin>>x ; 
            Q.push_back(x) ; 
        }
        if(s=="PRINTBACK"){
            if(Q.empty()) cout<<"NONE"<<endl ; 
            else cout<<Q.back()<<endl  ; 
        }
        if(s=="POPBACK") {
            if(Q.empty()) continue ; 
            else  Q.pop_back() ; 
        }
    }
}