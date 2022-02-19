#include<bits/stdc++.h>
using namespace std ; 
bool check(string s){
    bool k ; 
    stack <char> st ; 
    for(int i=0 ; i<s.size() ; i++){
        if(s[i] == ')' ) {
             k = true ; 
            char top = st.top() ; st.pop() ; 
            while(top != '(' ) {
                if( top =='+' or top == '-' or top == '*' or top == '/' ){ // nếu mà có dấu trong một cặp ngoặc thì cặp ngoặc đó đúng
                // còn nếu không có thì đó là cặp ngoặc thừa thì giữ nghuyên k
                    k = false ; 
                }
                top = st.top() ; st.pop() ; 
            }
            if(k==true) break ;   //k == true nghĩa là ngoặc thừa nên break ; 
        }
        else {
            st.push(s[i]) ; // 
        }
    }
    return k ; 
}   
main(){
    int t ; cin>>t ; 
    cin.ignore() ; 
    while(t--){
        string s ; getline(cin, s) ; 
        if(!check(s)) cout<<"No"<<endl ; 
        else cout<<"Yes"<<endl ; 
    }
}
/*Cho biểu thức số học, hãy cho biết biểu thức số học có dư thừa các cặp ký hiệu ‘(’,’) ‘ hay không?
Input:
Dòng đầu tiên đưa vào số lượng bộ test T;
Những dòng tiếp theo mỗi dòng đưa vào một bộ test. Mỗi bộ test là một biểu thức tiền tố exp.
Output:
Đưa ra kết quả mỗi test theo từng dòng.
Ràng buộc:
T, exp thỏa mãn ràng buộc: 1≤T≤100; 2≤length(exp)≤20.
Ví dụ:
Input
Output
3
((a+b))
(a + (b)/c)
(a + b*(c-d))

Yes
Yes
No
*/