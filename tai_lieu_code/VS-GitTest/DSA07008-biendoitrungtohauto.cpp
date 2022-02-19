#include<bits/stdc++.h>
using namespace std;
string OP = "+-*/^";
bool Op(char c)
{
    for(int i = 0; i < OP.length(); i++)
        if (OP[i] == c) return 1;
    return 0;
}
int Deg(char c)
{
    switch (c)
    {
        case '^':
            return 50;
        case '*':
        case '/':
            return 100;
        case '+':
        case '-':
            return 200;
        default:
            return 1000;
    }
}
string toPost(string s)
{
    string res = "";
    stack<char> st;
    st.push('#');
    for(int i = 0;i < s.length(); i++)
    {
        if (s[i] == '(')
        {
            st.push(s[i]);
            continue;
        }
        if (s[i] == ')')
        {
            while (st.top() != '(')
            {
                res = res + st.top();
                st.pop();
            }
            st.pop();
            continue;
        }
        if (s[i] != '(' && s[i] != ')' && (!Op(s[i])))
        {
            res = res + s[i];
            continue;
        }
        if (Op(s[i]))
        {
            while (Deg(st.top()) <= Deg(s[i]))
            {
                res = res + st.top();
                st.pop();
            }
            st.push(s[i]);
            continue;
        }
    }
    while (st.top() != '#')
    {
        res = res + st.top();
        st.pop();
    }
    return res;
}
void solve()
{
    string s;
    cin >> s;
    cout << toPost(s) << endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}