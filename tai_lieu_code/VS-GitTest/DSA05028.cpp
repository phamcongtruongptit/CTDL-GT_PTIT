#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        int n = s1.size(), m = s2.size();
        int d[n + 1][m + 1] = {0};
        for(int i = 0; i <= n; i++)
        {
            for(int j = 0; j <= m; j++)
            {
                if(i == 0 || j == 0) d[i][j] = i + j;
                else if(s1[i - 1] == s2[j - 1]) d[i][j] = d[i - 1][j - 1];
                else d[i][j] = min(d[i - 1][j - 1], min(d[i - 1][j], d[i][j - 1])) + 1;
            }
        }
        cout << d[n][m] << endl;
    }
}