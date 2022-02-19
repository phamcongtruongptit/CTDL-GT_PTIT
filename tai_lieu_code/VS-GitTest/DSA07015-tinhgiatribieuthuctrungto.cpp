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
    for(int i = 0; i < s.length(); i++)
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
        long long so = 0;
        bool ok = 0;
        while (i < s.length() && s[i] != '(' && s[i] != ')' && (!Op(s[i])))
        {
            long long ss = s[i] - '0';
            i++;
            so = so * 10 + ss;
            ok = 1;
        }
        if (ok) i--;
        res = res + "(" + to_string(so) + ")";
    }
    while (st.top() != '#')
    {
        res = res + st.top();
        st.pop();
    }
    return res;
}
long long tinh(string s)
{
    stack<long long> st;
    int i = 0;
    while (i < s.length())
    {
        if (s[i] == '(') 
        {
            i++;
            long long so = 0;
            while (s[i] != ')') 
            {
                so = so * 10 + (s[i] - '0');
                i++;
            }
            i++;
            st.push(so);
        }
        else
        {
            long long tmp1 = st.top();
            st.pop();
            long long tmp2 = st.top();
            st.pop();
            if (s[i] == '+') st.push(tmp2 + tmp1);
            if (s[i] == '-') st.push(tmp2 - tmp1);
            if (s[i] == '*') st.push(tmp2 * tmp1);
            if (s[i] == '/') st.push(tmp2 / tmp1);
            i++;
        }
    }
    return st.top();
}
void solve()
{
    string s;
    cin >> s;
    cout << tinh(toPost(s)) << endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}