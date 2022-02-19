#include<bits/stdc++.h>
using namespace std ;
string tinh(string s){
    stack<string> st; 
    for(int i=s.size() - 1 ; i>=0 ; i-- ) { // duyệt từ cuối ra sau
        if(s[i] == '+' or s[i] == '-' or s[i] == '*' or s[i] == '/' ){ // gặp dấu thì tạo thành một cụm string mới. 
            string top1 = st.top() ; st.pop() ; 
            string top2 = st.top() ; st.pop() ; 
            string moi = "(" + top1  + s[i] + top2 + ")" ; 
            st.push(moi) ; 
        }
        else {
            st.push(string(1,s[i])) ;  // string(1,char c) : chuyển kí tự thành string
        }
    }
    return st.top() ; 
}
main(){
    int t ; cin>>t ; 
    while(t--) {
        string s ; cin>>s ; 
        cout<<tinh(s)<<endl ;
    }
}
/*
Hãy viết chương trình chuyển đổi biểu thức biểu diễn dưới dạng tiền tố về dạng trung tố.
Input:
Dòng đầu tiên đưa vào số lượng bộ test T;
Những dòng tiếp theo mỗi dòng đưa vào một bộ test. Mỗi bộ test là một biểu thức tiền tố exp.
Output:
Đưa ra kết quả mỗi test theo từng dòng.
Ràng buộc:
T, exp thỏa mãn ràng buộc: 1≤T≤100; 2≤length(exp)≤106.
Ví dụ:
Input
Output
2
*+AB-CD
*-A/BC-/AKL

((A+B)*(C-D))
((A-(B/C))*((A/K)-L)
*/