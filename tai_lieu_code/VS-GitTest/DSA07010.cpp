#include <bits/stdc++.h>
using namespace std;
string prefixToPostfix(string s)
{
    reverse(s.begin(), s.end());
    stack<string> st;
    for(auto value:s)
    {
        if(value == '-' || value == '*' || value == '+' || value == '/') {
            string firstValue = st.top();
            st.pop();
            string secondValue = st.top();
            st.pop();
            string temp = firstValue + secondValue + value;
            st.push(temp);
        }
        else st.push(string(1, value));
    }
    return st.top();
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        cout << prefixToPostfix(s) << endl;
    }
}