#include<bits/stdc++.h>
using namespace std;
bool isOp(char c)
{
    switch (c)
        case '+':
        case '-':
        case '/':
        case '*':
            return 1;
    return 0;
}
void solve()
{
    string s;
    stack <string> st;
    cin >> s;
    for(int i = 0; i < s.length(); i++)
    {
        if (isOp(s[i]))
        {
            string s1 = st.top();
            st.pop();
            string s2 = st.top();
            st.pop();
            st.push(s[i] + s2 + s1);
        }
        else 
        {
            string tmp = "";
            tmp += s[i];
            st.push(tmp);
        }
    }
    cout << st.top() << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--) solve();
}