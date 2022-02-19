#include<bits/stdc++.h>
using namespace std ; 
string tinh(string s){
    string ans = "" ; 
    stack <int> st ; 
    for(int i=0 ; i<s.size() ; i++){
        if(s[i] == '(' )st.push(i) ; 
        if(s[i] == ')' ){
            if(!st.empty()){
                int top = st.top() ; st.pop() ; 
                if( top==0 ) continue ; 
                else if(s[top - 1 ] == '+') continue ; 
                else if(s[top-1] == '-' ) {
                    for(int k=top ; k<=i ; k++){
                        if(s[k] == '+' ) s[k] = '-' ; 
                        else if(s[k] == '-' ) s[k] = '+' ; 
                    }
                }
            }
        }
    }
    for(int i=0 ; i<s.size() ; i++){
        if(s[i] != '(' and s[i] != ')' ) ans+=s[i]; 
       
    }

    return ans  ;   
}
main(){
    int t; cin>>t ; 
    while(t--){
        string s ; cin>>s ; 
        cout<<tinh(s)<<endl ; 
    }
}