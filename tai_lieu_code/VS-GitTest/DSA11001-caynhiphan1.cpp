#include<bits/stdc++.h>
using namespace std;
bool isOP(char c)
{
    switch (c)
        case '+':
        case '-':
        case '/':
        case '*':
            return true;
    return false;
}
string fmid(string s)
{
    stack <string> st;
    for(int i = 0; i < s.length(); i++)
    {
        if (isOP(s[i]))
        {
            string s1 = st.top();
            st.pop();
            string s2 = st.top();
            st.pop();
            string tmp = "";
            tmp = s2 + s[i] + s1;
            st.push(tmp);
        }
        else
        {
            string tmp = "";
            tmp += s[i];
            st.push(tmp);
        }
    }
    return st.top();
}
void solve()
{
    string s;
    cin >> s;
    cout << fmid(s) << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--) solve();
}