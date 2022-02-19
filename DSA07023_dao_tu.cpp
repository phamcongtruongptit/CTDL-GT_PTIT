#include<bits/stdc++.h>
using namespace std ; 
void solve(string s){
    stack<string> st ; 
    string temp = "" ; 
    for(int i=0 ; i<s.size() ; i++){
        if(s[i] == ' '  and temp != "" ){
            st.push(temp) ; 
            temp = "" ; 
        }
        else {
            temp += s[i] ; 
        }
    }
    if (temp != "") st.push(temp) ; 
    while(!st.empty()){
        cout<<st.top()<<" " ; 
        st.pop() ; 
    }
    cout<<endl ; 
}
main(){
    int t; cin>>t ; 
    cin.ignore() ; 
    while(t--){
        string s ; 
        getline(cin ,s ) ; 
        solve(s) ; 
    }
}