#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, res;
    cin >> t;
    string s;
    int f[105][105];
    while(t--)
    {
        cin >> n >> s;
        n++;
        res = 0;
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++) f[i][j] = 0;
        for(int i = 1; i < n; i++)
        {
            for(int j = 1; j < n; j++)
            {
                if(s[i - 1] == s[j - 1] && i != j) f[i][j] = f[i - 1][j - 1] + 1;
                else f[i][j] = max(f[i - 1][j - 1], max(f[i - 1][j], f[i][j - 1]));
                res = max(res, f[i][j]);
            }
        }
        cout << res << endl;
    }
}
