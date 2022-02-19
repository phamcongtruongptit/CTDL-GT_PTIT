#include<bits/stdc++.h>
using namespace std ; 
int tinh(string s) {
    int count = 0 ; 
    int M[s.size()+5] ; 
    stack <int> st ; 
    memset(M , 0 , sizeof(M)) ; 
    for(int i=0 ; i<s.size() ;i++){ //           (())()))
        if(s[i]=='(')  st.push(i) ; 
        else if(s[i] ==')' and st.size()>0){
            int k = st.top() ; 
            M[k] =1 ; 
            M[i] = 1; 
            st.pop() ; 
        }
    }
    int dem = 0 ; 
    for(int i=0 ; i<s.size() ; i++) {
        if(M[i] == 1) dem++ ; 
        else dem = 0 ; 
        count = max(dem , count ) ; 
    }
    return count ; 
}
main() {
    int t; 
    cin>>t ; 
     while(t--){
         string s  ; cin>>s ; 
        cout<<tinh(s)<<endl ; 
     }
}



// #include<bits/stdc++.h>
// using namespace std ; 
// string s ; 
// void solve(){
//     int count = 0 ; 
//     stack <int> st ; 
//     st.push(-1); 
//     for(int i=0 ; i<s.size() ; i++ ){
//         if(s[i] == '(' ) st.push(i) ; 
//         if(s[i] == ')' ){
//             st.pop(); // lấy phần từ ngay trước nó nên phải pop ra. 
//             if(st.size()>0){
//                 count = max(count , i-st.top())  ; 
//             } else {
//                 st.push(i) ; // còn nếu không thì đẩy vào dể xét đoạn mới
//             }
//         }
//     }
//     cout<<count<<endl ; 
// }
// main() {
//     int t; cin>>t ; 
//     while(t--){
//         cin>>s ; 
//         solve() ; 
//     }
// }