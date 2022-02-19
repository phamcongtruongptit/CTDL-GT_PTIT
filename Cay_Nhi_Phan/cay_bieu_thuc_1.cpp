#include<bits/stdc++.h>
using namespace std;
void solve(){
    string S;
    cin>>S;
    stack<string > st;
    int n=S.size();
    for(int i=0;i<n;i++){
        if(S[i]=='+'||S[i]=='-'||S[i]=='/'||S[i]=='*'){
            string n=st.top();
            st.pop();
            string x=st.top();
            st.pop();
            string l= x+S[i]+n;
            st.push(l);
        }
        else st.push(string(1,S[i]));
    }
    cout<<st.top()<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve() ; 
    }
}