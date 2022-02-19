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
        cout << s[0];
        int tmp = (int)(s[0] - '0');
        for(int i = 1; i < s.size(); i++)
        {
            int k = (int)(s[i] - '0');
            if(k != tmp)
            {
                tmp = 1;
                cout << tmp;
            }
            else
            {
                tmp = 0;
                cout << tmp;
            }
        }
        cout << endl;
    }
}
