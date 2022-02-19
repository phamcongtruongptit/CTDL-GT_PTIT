#include<bits/stdc++.h>
using namespace std ; 
void solve(string s){
    stack<string> st ; 
    string temp = "" ; // khai báo một chuỗi tạm thời
    for(int i=0 ; i<s.size() ; i++){
        if(s[i] == ' '  and temp != "" ){ 
            st.push(temp) ; // nếu gặp dấu cách thì push cái chuỗi đó vào
            temp = "" ; // trả lại chuỗi rỗng
        }
        else {
            temp += s[i] ; // có không thì nối các ký tự lại thành từ
        }
    }
    if (temp != "") st.push(temp) ; // push từ cuối cùng vào
    while(!st.empty()){
        cout<<st.top()<<" " ;  
        st.pop() ; 
    }
    cout<<endl ; 
}
main(){
    int t; cin>>t ; 
    cin.ignore() ; 
    while(t--){
        string s ; 
        getline(cin ,s ) ; 
        solve(s) ; 
    }
}
/*Cho xâu ký tự S. Nhiệm vụ của bạn là đảo ngược các từ trong S. Ví dụ 
S =  “I like this program very much”, ta nhận được kết quả là “much very program this like I”.
Input:
Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test là một xâu ký tự S.
T, S thỏa mãn ràng buộc: 1≤ T ≤100; 1≤ Length(S)≤103.
Output:
Đưa ra kết quả mỗi test theo từng dòng.
Ví dụ:
Input:
Output:
2
I like this program very much
much very program this like I

much very program this like I
I like this program very much
 */