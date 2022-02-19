/*
4
))(( 
((((
(((())
)(())(((
    */
#include<bits/stdc++.h>
using namespace std ; 
int tinh(string s){
    int count = 0 ; 
    stack<char> st ; 
    st.empty() ; 
    for(int i=0 ; i<s.size() ; i++){
        if(s[i] == '(' ) st.push('(') ; 
        else if(s[i] == ')'){
            if(!st.empty()){
                st.pop() ; 
            }else if(st.empty()){
                count+=1 ; 
                st.push('(') ; 
            }
        }
    }
    return count + st.size()/2 ; 
}
 main() {
     int t ; cin>>t ; 
     while(t--){
         string s ; cin>>s; 
         cout<<tinh(s) <<endl ; 
     }
 } 