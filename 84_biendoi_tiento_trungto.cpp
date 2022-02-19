#include<bits/stdc++.h>
/*
2

*+AB-CD

*-A/BC-/AKL

*/
// cachs làm: duyệt từ cuối ra đầu. Gặp chữ thì push vào stack, gặp dấu thì lấy 2 phần từ đầu của stack tạo thành 1 biểu thức với cái dấu đó sau đó 
// pust biểu thức đó vào stack tiếp. Cứ vòng lặp như vậy.
// lưu ý: phép chuyển kí tự char i sang string là : string(1, i) 
using namespace std ; 
string trungto(string s){
    stack<string> st ; 
    for(int i = s.size()-1 ; i>=0 ; i--){
        if(s[i] == '+' or s[i] =='-' or s[i]=='*' or s[i]=='/' ){
            // lấy 2 phần tử đầu để tạo biểu thức
            string top1 = st.top() ; st.pop() ; 
            string top2 = st.top() ; st.pop() ; 
            string tmp = "(" + top1 + s[i] + top2 + ")" ; 
            st.push( tmp ) ; // đẩy biểu thức vào stack
        } 
        else {
            st.push( string(1,s[i]) ) ; 
        }
    }
    return st.top() ;  // phần tử còn lại là phần tử cuối cùng
}
main(){
    int t ; cin>>t ; 
    cin.ignore() ; 
    while(t--){
        string s ; 
        cin>>s ; 
        cout<<trungto(s)<<endl ; 
    }
}