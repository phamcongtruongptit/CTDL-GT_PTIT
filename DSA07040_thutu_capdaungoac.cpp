#include<bits/stdc++.h>
using namespace std ; 
void solve(string s){
    int tt = 1 ; 
    stack <int> st ; 
    for(int i = 0 ; i<s.size() ; i++){
        if(s[i] == '(' ) {
            st.push(tt) ; 
            cout<<tt<<" " ; 
            tt++ ; 
        } 
        if (s[i] == ')' ){
            cout<<st.top()<<" " ; 
            st.pop() ; 
        }
        
    }
    cout<<endl ; 
}
main(){
    int t ; cin>>t ; 
    cin.ignore() ; 
    while(t--){
        string s ; 
        getline(cin,s) ; 
        solve(s) ; 
    }

}