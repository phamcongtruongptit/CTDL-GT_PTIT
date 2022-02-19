#include<bits/stdc++.h>
using namespace std ; 
main(){
    int t ;cin>>t ; 
    string s ; 
    stack<int> st ; 
    st.empty() ; 
    while(t--) {
        cin>>s;  
        if(s == "PUSH"){
            int k ; cin>>k ; 
            st.push(k) ; 
        } else if(s=="POP"){
            if(!st.empty()) st.pop() ; 
        } else {
            if(st.empty()){
                cout<<"NONE"<<endl ; 
            } else {
                cout<<st.top()<<endl ; 
            }
        }
    }
}