    #include<bits/stdc++.h>
    using namespace std ; 
    int uu(char c){
        if(c == '^' ) return 12 ; 
        if(c== '*' or c== '/' ) return 8 ; 
        if(c== '+' or c== '-')  return 4 ; 
        return 0 ; 
    }

    string hauto(string s){
        string ans = "" ; 
        stack <char> st ; 
        for(int i=0 ; i<s.size() ; i++) {
            if(s[i] == '(' ) st.push(s[i]) ; 
            if( (s[i] >='A' and s[i]<='Z') or (s[i] >='a' and s[i]<='z')) ans += s[i] ;  // Gặp chữ thì in ra
            if(s[i] == ')' ){
                while(st.size() and st.top() != '(' ){ // gặp dấu đóng ngược thì in hết phần tử trong stack ra cho đến dấu 
                    ans += st.top()  ;  // mở ngoặc tương ứng
                    st.pop() ; 
                }
                st.pop() ; // lấy dấu mở ngoặc ra để xét tiếp
            }
            if(s[i] == '^' or s[i] == '+' or s[i] == '-' or s[i] == '*' or s[i]== '/' ){
                while(st.size() and uu(st.top()) >= uu(s[i]) ) { // khi độ ưu tiên của đỉnh >= phần tử thì lấy đỉnh ra
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
        int t ; cin>>t ; 
        while(t--){
            string trungto ; cin>>trungto ; 
            cout<<hauto(trungto) <<endl ; 
        }
    }