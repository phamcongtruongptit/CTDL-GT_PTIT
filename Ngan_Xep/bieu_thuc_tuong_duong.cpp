#include<bits/stdc++.h>
using namespace std ; 
string tinh(string s){
    string ans = "" ; // chuỗi kết quả
    stack <int> st ; // ngắn xếp chỉ số
    for(int i=0 ; i<s.size() ; i++){
        if(s[i] == '(' ) st.push(i) ; // mở ngoặc thì đẩy chỉ số vào
        if(s[i] == ')' ){
                int top = st.top() ; st.pop() ; 
                if( top==0 ) continue ; // nếu cặp dấu ngoaực là thừa. ()2+3 ...vv..
                else if(s[top - 1 ] == '+') continue ; // nếu là dấu + thì không phải đổi
                else if(s[top-1] == '-' ) { // nếu là dấu từ thì đổi dấu 
                    for(int k=top ; k<=i ; k++){
                        if(s[k] == '+' ) s[k] = '-' ; 
                        else if(s[k] == '-' ) s[k] = '+' ; 
                    }
                }
            
        }
    }
    for(int i=0 ; i<s.size() ; i++){
        if(s[i] != '(' and s[i] != ')' ) ans+=s[i]; // loại bỏ các dấu
       
    }
    return ans  ;   
}
main(){
    int t; cin>>t ; 
    while(t--){
        string s ; cin>>s ; 
        cout<<tinh(s)<<endl ; 
    }
}
/*Cho biểu thức đúng P chỉ bao gồm các phép toán +, -, các toán hạng cùng với các ký tự ‘(’, ‘)’. 
Hãy bỏ tất cả các ký tự ‘(’, ‘)’ 
trong P để nhận được biểu thức tương đương. Ví dụ với P = a – (b + c) ta có kết quả P = a – b – c .
Input:
Dòng đầu tiên đưa vào số lượng bộ test T;
Những dòng tiếp theo mỗi dòng đưa vào một bộ test. Mỗi bộ test là một biểu thức P được viết trên một dòng.
Output:
Đưa ra kết quả mỗi test theo từng dòng.
Ràng buộc:
T, P thỏa mãn ràng buộc: 1≤T≤100; 1≤length(P)≤103.
Ví dụ:
Input
Output
2
a–(b+c)
a-(b-c-(d+e))-f

a-b-c
a-b+c+d+e-f
*/