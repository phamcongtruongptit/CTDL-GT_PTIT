#include<bits/stdc++.h>
using namespace std ; 
int tinh(string s){
    stack <int> st ; 
    for(int i=0 ; i<s.size() ; i++){ // duyệt từ đầu đến cuối. Gặp dấu thì tính rồi pop vào xem như tính được 1 cặp
        if(s[i] == '+' or s[i] == '-' or s[i] == '*' or s[i] == '/' or s[i] == '^' ){
            int top2 = st.top() ; st.pop() ; 
            int top1  = st.top() ; st.pop() ; 
            if(s[i]=='+') st.push(top1 + top2) ; 
            else if(s[i]=='-') st.push(top1 - top2) ; 
            else if(s[i] == '*') st.push(top1 * top2) ; 
            else if(s[i]=='/') st.push(top1 / top2) ; 
        }
        else {
            st.push((int)s[i] - 48) ; // chuyển kí tự số thành số nguyên
        }
    }
    return st.top() ; 
}
main() {
    int t ; 
    cin>>t ; 
    while(t--){
        string s ; cin>>s ; 
        cout<<tinh(s)<<endl ; 
    }
}
/*Hãy viết chương trình chuyển tính toán giá trị của biểu thức hậu tố.
Input:
Dòng đầu tiên đưa vào số lượng bộ test T;
Những dòng tiếp theo mỗi dòng đưa vào một bộ test. Mỗi bộ test là một biểu thức hậu tố exp. 
Các số xuất hiện trong biểu thức là các số đơn có 1 chữ số.
Output:
Đưa ra kết quả mỗi test theo từng dòng, chỉ lấy giá trị phần nguyên.
Ràng buộc:
T, exp thỏa mãn ràng buộc: 1≤T≤100; 2≤length(exp)≤20.
Ví dụ:
Input
Output
2
231*+9–
875*+9-

-4
34
*/