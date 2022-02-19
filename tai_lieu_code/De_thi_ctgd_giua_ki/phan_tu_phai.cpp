#include<bits/stdc++.h>
using namespace std ; 
int A[1000005], B[1000005] ; 
int n ; 
void solve() {
    cin>>n ;  
    for(int i=0 ; i<n ; i++ ) cin>>A[i] ; 
    stack<int> st ; 
    for(int i=n-1 ; i>=0 ; i-- ) {
        while(!st.empty() and A[i] >= st.top()) {
            st.pop() ; 
        }
        if(!st.empty()){
            B[i] = st.top() ; 
        } else {
            B[i] = -1 ; 
        }
        st.push(A[i]) ; 
    }
    for(int i= 0 ; i<n ; i++ ) cout<<B[i]<<" " ; 
}
main() {
    int t ;cin>>t ; 
    while(t--) {
        solve() ; 
        cout<<endl ; 
    } 
}