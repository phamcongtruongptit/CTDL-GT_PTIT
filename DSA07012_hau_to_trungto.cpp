#include<bits/stdc++.h>
using namespace std ; 
string tinh(string s){
    stack<string> st ; 
    for(int i= 0 ; i<s.size() ; i++){
        if(s[i] == '+' or s[i] == '-' or s[i] == '*' or s[i] == '/' ) {
            string top1 = st.top() ; st.pop() ; 
            string top2 = st.top() ; st.pop() ; 
            string temp = "(" + top2 + s[i] + top1 + ")" ; 
            st.push(temp)  ;
        }
        else { 
            st.push(string(1 , s[i])) ; 
        }
    }
    return st.top() ; 
}
main(){
    int t ; 
    cin>>t  ; 
    while(t--){
        string s ; cin>>s; 
        cout<<tinh(s) <<endl ; 
    }
}