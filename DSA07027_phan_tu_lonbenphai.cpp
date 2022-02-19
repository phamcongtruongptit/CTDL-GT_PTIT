#include<bits/stdc++.h>
using namespace std ; 
// tư tưởng: đẩy từ cuối vào đầu mảng vào stack. Sau đó xem phần tử trước phần tử đã xét xem có giá trị nào trong strack lớn hơn nó hay ko
// bằng cách pop ra. Nếu không thì -1
void solve(){
    int  n ; cin>> n ; 
    int M[n] , ans[n] ; 
    for(int i=0 ; i<n ; i++){
        cin>>M[i] ; 
    }
    stack <int> st ; 
    for(int i=n-1  ; i>=0 ; i--){
        while(!st.empty() and st.top() <= M[i] ) st.pop() ; 
        if(st.empty()) ans[i] = -1  ; 
        else ans[i] = st.top() ; 
        st.push(M[i]) ; 
    }
    for(int i=0 ; i<n ; i++) cout<<ans[i]<<" " ; 
    cout<<endl ; 
}
main(){
    int t ; cin>>t  ; 
    while(t--){
        solve() ; 
    }
}