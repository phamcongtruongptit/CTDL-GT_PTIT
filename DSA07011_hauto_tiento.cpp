#include<bits/stdc++.h>
using namespace std ; 
int uutien( char c){
    if(c == '*' or c== '/') return 12  ; 
    if(c=='+' or c== '-') return 10 ; 
    return 2 ;
}
string trungto(string s){ // hauto --> trungto
    stack <string> st ; 
    for(int i=0 ; i<s.size() ; i++){
        if(s[i]  =='+' or s[i] == '-' or s[i] == '/' or s[i] == '*' ){
            string top1 = st.top() ; st.pop() ; 
            string top2 = st.top() ; st.pop()  ; 
            string temp = "(" + top2 + s[i] + top1 + ")" ; 
            st.push(temp) ; 
        }
        else {
            st.push(string (1 , s[i])) ; 
        }
    }
    return st.top() ; 
}

string tiento(string s){ // trungto --> tiento : ((A+B)*(C-D)) --> *+AB-CD
    string ans= "" ; 
    stack<char> st ; 
    for(int i=s.size() -1 ; i>=0 ; i--){
        if(s[i] == ')') st.push(s[i]) ; 
        if(s[i] == '(' ) {
            while(st.size() and st.top() != ')' ) {
                ans = st.top() + ans ; 
                st.pop() ; 
            } 
            st.pop() ; 
        }
        if((s[i] >= 'A' and s[i] <='Z') or (s[i] >= 'a' and s[i] <='z')) ans  = s[i] + ans ; 
        if(s[i] == '+' or s[i]== '-' or s[i] == '*' or s[i] == '/' ) {
            while( st.size() and uutien(st.top())  >= uutien(s[i])) {
                ans = st.top() + ans ; 
                st.pop() ; 
            }
            
                st.push(s[i]) ; 
            
        }
    }
    return ans ; 
}
main(){
    int t; cin>>t  ; 
    while(t--){
        string hauto ; 
        cin>>hauto; 
      //  cout<<tiento(hauto)<<endl ; 
       // cout<<trungto(hauto)<<endl ; 
        cout<<tiento(trungto(hauto))<<endl ; 
    }
}