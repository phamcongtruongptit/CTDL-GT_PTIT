#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll f[105][105] = {0};
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll mod, k; string s;
        cin >> k >> mod >> s;
        memset(f, 0, sizeof(f));
        for(int i = 1; i <= s.length(); i++)
        {
            f[i][(s[i - 1] - '0') % mod] = 1;
            for(ll j = 0; j < mod; j++)
            {
                f[i][j] += f[i - 1][j];
                f[i][(j * 10 + s[i - 1] - '0') % mod] += f[i - 1][j];
            }
        }
        cout << f[k][0] << endl;
    }
}
