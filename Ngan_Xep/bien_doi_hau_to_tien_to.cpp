#include<bits/stdc++.h>
using namespace std ; 
// tư tưởng: hậu tố --> trung tố.  Sau đó trung tố --> tiền tố.
// Biến đổi trung tố về tiền tố thuật toán giống như trung tố sang hậu tố. Khác ở chỗ duyệt từ cuối ra sau. Gặp ) thì đẩy zô
//. gặp ( thì xét. CÒn về trung về hậu thì gặp (  thì đẩy vào
int uutien( char c){
    if(c == '*' or c== '/') return 12  ; 
    if(c=='+' or c== '-') return 10 ; 
    return 2 ;
}
string trungto(string s){ // hauto --> trungto
    stack <string> st ; 
    for(int i=0 ; i<s.size() ; i++){
        if(s[i]  =='+' or s[i] == '-' or s[i] == '/' or s[i] == '*' ){
            string top1 = st.top() ; st.pop() ; 
            string top2 = st.top() ; st.pop()  ; 
            string temp = "(" + top2 + s[i] + top1 + ")" ; 
            st.push(temp) ; 
        }
        else {
            st.push(string (1 , s[i])) ; 
        }
    }
    return st.top() ; 
}

string tiento(string s){ // trungto --> tiento : ((A+B)*(C-D)) --> *+AB-CD
    string ans= "" ; 
    stack<char> st ; 
    for(int i=s.size() -1 ; i>=0 ; i--){
        if(s[i] == ')') st.push(s[i]) ; 
        if(s[i] == '(' ) {
            while(st.size() and st.top() != ')' ) {
                ans = st.top() + ans ; 
                st.pop() ; 
            } 
            st.pop() ; 
        }
        if((s[i] >= 'A' and s[i] <='Z') or (s[i] >= 'a' and s[i] <='z')) ans  = s[i] + ans ; 
        if(s[i] == '+' or s[i]== '-' or s[i] == '*' or s[i] == '/' ) {
            while( st.size() and uutien(st.top())  >= uutien(s[i])) {
                ans = st.top() + ans ; 
                st.pop() ; 
            }
            
                st.push(s[i]) ; 
            
        }
    }
    return ans ; 
}
main(){
    int t; cin>>t  ; 
    while(t--){
        string hauto ; 
        cin>>hauto; 
        cout<<tiento(trungto(hauto))<<endl ; 
    }
}
/*
Hãy viết chương trình chuyển đổi biểu thức biểu diễn dưới dạng hậu tố về dạng tiền tố.
Input:
Dòng đầu tiên đưa vào số lượng bộ test T;
Những dòng tiếp theo mỗi dòng đưa vào một bộ test. Mỗi bộ test là một biểu thức tiền tố exp.
Output:
Đưa ra kết quả mỗi test theo từng dòng.
Ràng buộc:
T, exp thỏa mãn ràng buộc: 1≤T≤100; 2≤length(exp)≤106.
Ví  dụ:
Input
Output
2
AB+CD-*
ABC/-AK/L-*

*+AB-CD
*-A/BC-/AKL
*/