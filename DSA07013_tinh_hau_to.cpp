    #include<bits/stdc++.h>
    using namespace std ; 
    int tinh(string s){
        stack <int> st ; 
        for(int i=0 ; i<s.size() ; i++){
            if(s[i] == '+' or s[i] == '-' or s[i] == '*' or s[i] == '/' or s[i] == '^' ){
                int top2 = st.top() ; st.pop() ; 
                int top1  = st.top() ; st.pop() ; 
                if(s[i]=='+') st.push(top1 + top2) ; 
                else if(s[i]=='-') st.push(top1 - top2) ; 
                else if(s[i] == '*') st.push(top1 * top2) ; 
                else if(s[i]=='/') st.push(top1 / top2) ; 
            }
            else {
                st.push((int)s[i] - 48) ; 
            }
        }
        return st.top() ; 
    }
    main() {
        int t ; 
        cin>>t ; 
        while(t--){
            string s ; cin>>s ; 
            cout<<tinh(s)<<endl ; 
        }
    }