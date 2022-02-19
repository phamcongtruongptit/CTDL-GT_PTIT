#include<bits/stdc++.h>
using namespace std ; 
void solve() {
    stack <int> st ; 
    st.empty() ; 
    string s ; 
    while(cin>>s) {
        if(s == "push" ) {
            int k ; cin>>k ; 
            st.push(k) ; 
        }
        else if( s== "pop" ){
            if(!st.empty()){
                st.pop() ; 
            }
        } else if ( s =="show" ){
            if(st.empty()) {
                cout<<"empty"<<endl ; 
                continue ; 
            }
            vector <int> v ; 
            while( !st.empty() ){
                v.push_back(st.top()) ; 
                st.pop() ; 
            }
            reverse(v.begin() , v.end()) ; 
            for(int i=0 ; i<v.size() ; i++) {
                cout<<v[i]<<" " ; 
                st.push(v[i]) ; 
            }
            cout<<endl ;
        } 
    }
}
main(){
    solve() ; 
}