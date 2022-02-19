#include<bits/stdc++.h>
using namespace std ;
    int uu(char c){
        if(c == '^' ) return 12 ; 
        if(c== '*' or c== '/' ) return 8 ; 
        if(c== '+' or c== '-')  return 4 ; 
        return 0 ; 
    }
string trungto(string s){
    stack <string> st ; 
    for(int i=s.size()-1 ; i>=0 ; i--) {
        if(s[i] == '+' or s[i] == '-' or s[i] == '*' or s[i]=='/') {
            string top1  = st.top() ; st.pop() ; 
            string top2 = st.top() ; st.pop()  ; 
            string temp = "(" + top1 + s[i] + top2 + ")" ; 
            st.push(temp) ; 
        } 
        else {
            st.push(string(1,s[i])) ; 
        }
    }
    return st.top() ; 
}
string hauto(string s){
    string ans = "" ; 
    stack <char> st ; 
    for(int i=0 ; i<s.size() ; i++) {

        if( (s[i] >= 'A' and s[i] <='Z') or (s[i] >= 'a' and s[i] <= 'z')) ans+= s[i] ; // SAI Ở CHỖ OR AND. 
      //  if( (s[i] >= 'A' and s[i] <='Z') or (s[i] >= 'a' and s[i]<='z')) ans += s[i] ; 

        if(s[i] ==')' ){
            while(st.size() and st.top() != '(' ){
                ans+=st.top() ; 
                st.pop() ; 
            }
            st.pop() ; 
        }
        if(s[i] == '(' ) st.push(s[i]) ; 
        if (s[i] == '^' or s[i] == '+' or s[i] == '-' or s[i] == '*' or s[i]== '/'){
            while(st.size() and uu(st.top()) >= uu(s[i]) ){
                ans+= st.top() ; 
                st.pop()  ; 
            }
            st.push(s[i]) ; 
        }        
    }
    while(st.size() and st.top() != '('){
        ans +=st.top() ; 
        st.pop() ; 
    }
    return ans ; 
}
main() {
    int t; cin>>t ; 
    while(t--){
        string s  ; cin>>s  ; 
        string tt = trungto(s) ; 
        cout<<hauto(tt)<<endl ; 
    }
}
