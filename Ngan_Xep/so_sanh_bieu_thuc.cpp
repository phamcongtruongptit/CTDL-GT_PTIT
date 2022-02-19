#include<bits/stdc++.h>
using namespace std ; // thuật toán tương tự như bài biểu thức tương đương. 
// tìm xâu đã bỏ dấu ngoặc rồi so sánh thôi
string tinh(string s){
    string ans = "" ; 
    stack<int> st ; 
    for(int i=0 ; i<s.size() ; i++){
        if(s[i] == '(' ) st.push(i) ; 
        else if(s[i]== ')' ){
            int top = st.top() ; st.pop() ; 
            if(top == 0) continue ; 
            else if(s[top-1] == '+' ) continue ; 
            else if(s[top -1 ] == '-' ) {
                for(int k=top ; k<=i ; k++){
                    if(s[k] == '+' ) s[k] = '-' ; 
                    else if(s[k] == '-' ) s[k] = '+' ; 
                }
            }
        }
    }
    for(int i=0 ; i<s.size() ; i++) {
        if(s[i] != '(' and s[i] != ')') ans+=s[i] ; 
    }
    return ans; 
}
main(){
    int t ; cin>>t ; 
    while(t--){
        string s1 ,  s2 ; 
        cin>>s1 >>s2 ; 
        if(tinh(s1) == tinh(s2) ) cout<<"YES"<<endl ; 
        else cout<<"NO"<<endl ; 
    }
}
/*Cho P1, P2 là hai biểu thức đúng chỉ bao gồm các ký tự mở 
ngoặc ‘(’ hoặc đóng ngoặc ‘)’ và các toán hạng in thường. Nhiệm vụ của bạn là định xem P1 
và P2 có giống nhau hay không.
Input:
Dòng đầu tiên đưa vào số lượng bộ test T;
Những dòng tiếp theo mỗi dòng đưa vào một bộ test. Mỗi bộ test gồm hai dòng: dòng 
thứ nhất đưa vào P1, dòng tiếp theo đưa vào P2.
Output:
Đưa ra kết quả mỗi test theo từng dòng.
Ràng buộc:
T, P thỏa mãn ràng buộc: 1≤T≤100; 1≤length(P) ≤100.
Ví dụ:
Input
Output
2
-(a+b+c)
-a-b-c
a-b-(c-d)
a-b-c-d

YES
NO
*/