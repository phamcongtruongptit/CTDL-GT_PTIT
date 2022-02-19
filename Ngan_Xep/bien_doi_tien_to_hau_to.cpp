#include<bits/stdc++.h>
using namespace std ; // ý tưởng:  chuyển tiền tồ --> trung tố  rồi trung tố --> về hậu tố. 
int uutien(char c){
        if(c == '^' ) return 12 ; 
        if(c== '*' or c== '/' ) return 8 ; 
        if(c== '+' or c== '-')  return 4 ; 
        return 0 ; 
}
string trungto(string s){
    stack <string> st ; 
    for(int i=s.size()-1 ; i>=0 ; i--) {
        if(s[i] == '+' or s[i] == '-' or s[i] == '*' or s[i]=='/') {
            string top1  = st.top() ; st.pop() ; 
            string top2 = st.top() ; st.pop()  ; 
            string temp = "(" + top1 + s[i] + top2 + ")" ; 
            st.push(temp) ; 
        } 
        else {
            st.push(string(1,s[i])) ; 
        }
    }
    return st.top() ; 
}
string hauto1(string s){
        string ans = "" ; 
        stack <char> st ; 
        for(int i=0 ; i<s.size() ; i++) {
            if(s[i] == '(' ) st.push(s[i]) ; 
            else if( (s[i] >='A' and s[i]<='Z') or (s[i] >='a' and s[i]<='z')) ans += s[i] ;  // Gặp chữ thì in ra
            else if(s[i] == ')' ){
                while(st.size() and st.top() != '(' ){ // gặp dấu đóng ngược thì in hết phần tử trong stack ra cho đến dấu 
                    ans += st.top()  ;  // mở ngoặc tương ứng
                    st.pop() ; 
                }
                st.pop() ; // lấy dấu mở ngoặc ra để xét tiếp
            }
            else if(s[i] == '^' or s[i] == '+' or s[i] == '-' or s[i] == '*' or s[i]== '/' ){
                while(st.size() and uutien(st.top()) >= uutien(s[i]) ) { // khi độ ưu tiên của đỉnh >= phần tử thì lấy đỉnh ra
                    ans+= st.top() ; 
                    st.pop() ; 
                }
                st.push(s[i]) ; // còn nếu ưu tiên đỉnh < phần tử thì push phần tử đó vào
            }
        }
        while(st.size() and st.top() != '(' ){ // trong trường hợp biểu thức trung tố thừa dấu mở ngoặc thì phải lấy ra
            ans+= st.top() ; //các phần tử dấu trước đó
            st.pop() ; 
        }
        return ans ; 
    }
main() {
    int t; cin>>t ; 
    while(t--){
        string s  ; cin>>s  ; 
        string tt = trungto(s) ; 
        cout<<hauto1(tt)<<endl ; 
    }
}
/*Hãy viết chương trình chuyển đổi biểu thức biểu diễn dưới dạng tiền tố về dạng hậu tố.
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

AB+CD-*
ABC/-AK/L-*
*/