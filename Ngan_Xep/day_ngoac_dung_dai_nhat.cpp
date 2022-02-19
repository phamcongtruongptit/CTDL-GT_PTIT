#include<bits/stdc++.h>
using namespace std ;
int tinh(string s){
    stack <int> st ; // tạo ngăn xếp chỉ số
    st.push(-1) ; // c
    int count =0 ; 
    for(int i=0 ; i<s.size() ; i++) {
        if(s[i] == '(') st.push(i) ; 
        else if(s[i] == ')' ) {
            st.pop() ; 
            if(st.size() > 0) {
                count = max(count , i-st.top()) ; 
            }
            else {
                st.push(i)  ; 
            }
        }
    }
    return count ; 
}
main(){
    int t ; cin>>t ; 
    while(t--) {
        string s ; cin>>s ; 
        cout<<tinh(s)<<endl ;
    }
}
/*Cho một xâu chỉ gồm các kí tự ‘(‘ và ‘)’. Một dãy ngoặc đúng được định nghĩa như sau:
-     Xâu rỗng là 1 dãy ngoặc đúng.
-     Nếu A là 1 dãy ngoặc đúng thì (A) là 1 dãy ngoặc đúng.
-     Nếu A và B là 2 dãy ngoặc đúng thì AB là 1 dãy ngoặc đúng.
Cho một xâu S. Nhiệm vụ của bạn là hãy tìm dãy ngoặc đúng dài nhất xuất hiện trong xâu đã cho.
Input: Dòng đầu tiên là số lượng bộ test T (T ≤ 20).
Mỗi test gồm một xâu S có độ dài không vượt quá 105 kí tự.
Output:  Với mỗi test in ra một số nguyên là độ dài dãy ngoặc đúng dài nhất tìm được.
Ví dụ:
Input:
Output
3
((()
)()())
()(()))))

2
4
6
*/

//c2
/*
#include<bits/stdc++.h>
using namespace std ;
int tinh(string s){
    stack <int> st ; 
    st.push(-1) ; 
    int count =0 ; 
    for(int i=0 ; i<s.size() ; i++) {
        if(s[i] == '(') st.push(i) ; 
        else if(s[i] == ')' ) {
            st.pop() ; 
            if(st.size() > 0) {
                count = max(count , i-st.top()) ; 
            }
            else {
                st.push(i)  ; 
            }
        }
    }
    return count ; 
}
int tinh1(string s) {
    int M[s.size() +2] ; 
    memset(M ,0 , sizeof(M)) ;
    stack<int> st  ;  
    for(int i=0 ; i<s.size() ; i++) {
        if(s[i] == '(') st.push(i) ; 
        else if(s[i] == ')' and st.size() > 0 ) {
                int top  = st.top() ; 
                M[top] = 1; 
                M[i] = 1 ; 
                st.pop() ; 
        }
    }
    int count = 0 ; 
    int dem = 0 ; 
    for(int i=0 ; i<s.size()+2 ; i++) {
        if(M[i] == 1) {
            dem++ ; 
            count = max(count , dem ) ; 
        }
        else {
            dem =0 ;
        }
    }
    return count ; 
}
main(){
    int t ; cin>>t ; 
    while(t--) {
        string s ; cin>>s ; 
        cout<<tinh1(s)<<endl ;
    }
}
*/