#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
        int res = 0;
        stack<int> s;
        s.push(-1);
        for(int i = 0; i < str.size(); i++)
        {
            if(str[i] == '(') s.push(i);
            else
            {
                s.pop();
                if(s.size() > 0) res = max(res, i - s.top());
                if(s.size() == 0) s.push(i);
            }
        }
        cout << res << endl;
    }
}