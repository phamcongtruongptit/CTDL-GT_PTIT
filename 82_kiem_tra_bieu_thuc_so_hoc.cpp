#include<bits/stdc++.h>
using namespace std ; 
bool solve(string s){ // hàm check biếu thức đó có thừa hay không
    bool check ; 
    stack <char> st ; 
    for(int i=0 ; i<s.size() ; i++){ // duyệt từ dều đến cuối
        if(s[i] == ')'){
            check = true  ; 
            char top = st.top()  ; st.pop() ; // check xem top
            while(top != '(' ){ // xác định xem đoạn con trong 2 ngoặc gần nhất có làm 2 ngoặc đó thừa hay không
                if(top == '+' or top == '-' or top == '*' or top == '/' ){ // nếu chứa những dấu này thì không thừa
                    check = false ; 
                }
                top = st.top() ;  st.pop() ; 
            }
            if(check) break ; // nếu xâu thừa thì không cần check nữa. break ra luôn
        }
        else {
            st.push(s[i]) ;  // nếu ko phải kí tự ')' thì đẩy vào ngăn xếp
        }
    }
    return check ; 
} 
main() {
    int t ; 
    cin>>t ;
    cin.ignore() ; // nhap xong t thi se co mot xau rong. nen phai co lenh nay  để xóa cái xâu rỗng đó
    while(t--) {
        string s ; 
        getline(cin ,s)  ; 
        if(solve(s) == true) cout<<"Yes"<<endl ;
        else cout<<"No"<<endl; 
    }
}





/////////////////////
#include<bits/stdc++.h>
using namespace std ; 
/*
3
((a+b))
(a + (b)/c)
(a + b*(c-d))
*/
string s  ; 
bool check(){
    stack<int> c , d; // khai báo 2 stack một chưa dấu ngoặn và một chứ dấu +-*/
    for(int i=0 ; i<s.size() ;i++) {
        if(s[i] == '(' ) c.push(i) ; 
        else if(s[i] == '+' or s[i] == '-' or s[i] =='/' or s[i] == '*' ){
            d.push(i) ; 
        } else if(s[i] == ')'){
            if(!c.empty() and d.empty() ){
                return false ; 
            }
            if(!c.empty() and !d.empty() ){ // nghĩa là cặp ngoặc không bao lấy biểu thức chưa +-*/. vd: (a)
                if(c.top() > d.top() ) return false  ;  
            }
            if(!c.empty()) c.pop() ; // phải xóa đi để xét các cặp ngoặc khác
            if(!d.empty()) d.pop() ; 
        }
    }
    return true; 
}
main() {
    int t ; cin>>t ; 
    cin.ignore() ; 
    while(t--){
        getline(cin ,s )  ; 
        if(!check()) cout<<"Yes"<<endl ; 
        else cout<<"No"<<endl ; 
    }
}