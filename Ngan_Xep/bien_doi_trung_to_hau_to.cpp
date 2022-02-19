    #include<bits/stdc++.h>
    using namespace std ; 
    int uu(char c){ // hàm ưu tiên các toán tử
        if(c == '^' ) return 12 ; 
        if(c== '*' or c== '/' ) return 8 ; 
        if(c== '+' or c== '-')  return 4 ; 
        return 0 ; 
    }

    string hauto(string s){
        string ans = "" ; // khai báo chuỗi hậu tố
        stack <char> st ; // ngăn xếp ký tự 
        for(int i=0 ; i<s.size() ; i++) { // duyệt từ đầu ra sau
            if(s[i] == '(' ) st.push(s[i]) ; // gặp dấu ngoặc thì đẩy vào stack
            if( (s[i] >='A' and s[i]<='Z') or (s[i] >='a' and s[i]<='z')) ans += s[i] ;  // Gặp chữ thì in ra
            if(s[i] == ')' ){
                while(st.size() and st.top() != '(' ){ // gặp dấu đóng ngược thì in hết phần tử trong stack ra cho đến dấu 
                    ans += st.top()  ;  // mở ngoặc '(' tương ứng
                    st.pop() ; 
                }
                st.pop() ; // lấy dấu mở ngoặc ra để xét tiếp
            }
            if(s[i] == '^' or s[i] == '+' or s[i] == '-' or s[i] == '*' or s[i]== '/' ){
                while(st.size() and uu(st.top()) >= uu(s[i]) ) { // khi độ ưu tiên của đỉnh >= phần tử đang xét thì lấy đỉnh ra
                    ans+= st.top() ; 
                    st.pop() ; 
                }
                st.push(s[i]) ; // còn nếu ưu tiên đỉnh < phần tử đang xét thì push phần tử đó vào
            }
        }

        while(st.size() and st.top() != '(' ){ // trong trường hợp biểu thức trung tố thừa dấu mở ngoặc thì phải lấy ra
            ans+= st.top() ; //các phần tử dấu trước đó
            st.pop() ; 
        }
        return ans ; 
    }
main() {
        int t ; cin>>t ; 
        while(t--){
            string trungto ; cin>>trungto ; 
            cout<<hauto(trungto) <<endl ; 
        }
    }
/*Hãy viết chương trình chuyển đổi biểu thức biểu diễn dưới dạng trung tố về dạng hậu tố.
Input:
Dòng đầu tiên đưa vào số lượng bộ test T;
Những dòng tiếp theo mỗi dòng đưa vào một bộ test. Mỗi bộ test là một biểu thức tiền tố exp.
Output:
Đưa ra kết quả mỗi test theo từng dòng.
Ràng buộc:
T, exp thỏa mãn ràng buộc: 1≤T≤100; 2≤length(exp)≤10.
Ví dụ:
Input
Output
2
(A+(B+C)
((A*B)+C)

ABC++
AB*C+
*/