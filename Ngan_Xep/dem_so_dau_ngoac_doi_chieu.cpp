#include<bits/stdc++.h>
using namespace std ;
int tinh(string s){
    stack <char> st ; 
    int count = 0 ; 
    for(int i=0 ; i<s.size() ; i++) {
        if(s[i] == '(') st.push('(') ; 
        if(s[i] == ')'){
            if(!st.empty()){
                st.pop() ; 
            }
            else if(st.empty()){
                count ++ ; 
                st.push('(') ; 
            }
        }
    }
    return count  + st.size()/2; 
}
main(){
    int t ; cin>>t ; 
    while(t--) {
        string s ; cin>>s ; 
        cout<<tinh(s)<<endl ;
    }
}
/*Cho một xâu chỉ gồm các kí tự ‘(‘, ‘) và có độ dài chẵn. 
Hãy đếm số lượng dấu ngoặc cần phải đổi chiều ít nhất, sao cho xâu mới thu được là một dãy ngoặc đúng.
Input:
Dòng đầu tiên là số lượng bộ test T (T ≤ 20).
Mỗi test gồm 1 xâu S có độ dài không vượt quá 100 000, chỉ gồm dấu ( và ).
Output: 
Với mỗi test, in ra đáp án tìm được trên một dòng.
Ví dụ:
Input:
Output
4
))((
((((
(((())
)(())(((

2
2
1
3
*/