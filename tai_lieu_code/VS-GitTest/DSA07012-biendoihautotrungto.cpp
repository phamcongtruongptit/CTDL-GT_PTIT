#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        stack<string> k;
        int len = s.size();
        for(int i = 0; i < len; i++)
        {
            if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '%' || s[i] == '^')
            {
                string a = k.top(); k.pop();
                string b = k.top(); k.pop();
                string tmp = '(' + b + s[i] + a + ')';
                k.push(tmp);
            }
            else k.push(string(1, s[i]));
        }
        cout << k.top() << endl;
    }
}