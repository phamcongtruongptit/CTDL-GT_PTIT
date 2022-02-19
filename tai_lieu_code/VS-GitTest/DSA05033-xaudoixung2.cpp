#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin >> s;
    int f[s.length()][s.length()] = {};
    for(int len = 1; len <= s.length(); len++)
        for(int i = 0; i <= s.length() - len; i++)
        {
            int j = i + len - 1;
            if (len == 1)
            {
                f[i][j] = 1;
                continue;
            }
            if (len == 2)
            {
                f[i][j] = 1 + (s[i] == s[j]);
                continue;
            }
            f[i][j] = max(f[i + 1][j], f[i][j - 1]);
            if (s[i] == s[j]) f[i][j] = max(f[i][j], f[i + 1][j - 1] + 2);
        }
    cout << s.length() - f[0][s.length() - 1] << endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}