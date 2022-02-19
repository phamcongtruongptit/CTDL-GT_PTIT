#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        string s;
        getline(cin, s);
        stack<char> st;
        bool ok;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == ')')
            {
                ok = true;
                char top = st.top(); st.pop();
                while(top != '(')
                {
                    if(top == '+' || top == '-' || top == '*' || top == '/') ok = false;
                    top = st.top(); st.pop();
                }
                if(ok) break;
            }
            else st.push(s[i]);
        }
        if(ok) cout << "Yes";
        else cout << "No";
        cout << endl;
    }
}