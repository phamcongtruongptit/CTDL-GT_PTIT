#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[4][n];
        for(int i = 0; i < 4; i++)
        {
            for(int j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        }
        int res = 0;
        for(int i = 0; i < 4; i++)
        {
            for(int j = 0; j < n; j++)
            {
                res = max(res + a[i][j], min(res + a[i - 1][j - 1], res + a[i + 1][j + 1]));
            }
        }
        cout << res << endl;
    }
}