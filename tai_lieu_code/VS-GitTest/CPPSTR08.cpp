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
        long long sum = 0;
        long long res = 0;
        for(int i = 0; i < s.size() + 1; i++)
        {
            if(s[i] >= '0' && s[i] <= '9')
            {
                sum = sum * 10 + (s[i] - '0');
            }
            else
            {
                res += sum;
               sum = 0;
            }
        }
        cout << res << endl;
    }
    return 0;
}