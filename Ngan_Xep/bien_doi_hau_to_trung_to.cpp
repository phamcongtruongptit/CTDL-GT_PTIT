#include<bits/stdc++.h>
using namespace std ; 
string tinh(string s){
    stack<string> st ; 
    for(int i= 0 ; i<s.size() ; i++){ // duyệt từ đầu ra cuối. Gặp dấu thì xét. Gặp phần tử thì đẩy zô
        if(s[i] == '+' or s[i] == '-' or s[i] == '*' or s[i] == '/' ) {
            string top1 = st.top() ; st.pop() ; 
            string top2 = st.top() ; st.pop() ; 
            string temp = "(" + top2 + s[i] + top1 + ")" ; 
            st.push(temp)  ;
        }
        else { 
            st.push(string(1 , s[i])) ; 
        }
    }
    return st.top() ; 
    
}
main(){
    int t ; 
    cin>>t  ; 
    while(t--){
        string s ; cin>>s; 
        cout<<tinh(s) <<endl ; 
    }
}
/*
Hãy viết chương trình chuyển đổi biểu thức biểu diễn dưới dạng hậu tố về dạng trung tố.
Input:
Dòng đầu tiên đưa vào số lượng bộ test T;
Những dòng tiếp theo mỗi dòng đưa vào một bộ test. Mỗi bộ test là một biểu thức tiền tố exp.
T, exp thỏa màng ràng buộc: 1≤T≤100; 2≤length(exp)≤106.
Output:
Đưa ra kết quả mỗi test theo từng dòng.
Ràng buộc:
T, exp thỏa mãn ràngbuộc: 1≤T≤100; 2≤length(exp)≤106.
Ví dụ:
Input
Output
2
ABC++
AB*C+

(A+(B+C)
((A*B)+C)
*/