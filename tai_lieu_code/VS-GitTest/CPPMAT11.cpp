#include<bits/stdc++.h>
using namespace std;
int a[20][20];
int maxR(int l, int r, int m)
{
    int res = 0;
    for(int i = 1; i <= m; i++)
    {
        bool isFull_1 = false;
        for(int j = l; j <= r; j++)
        {
            if(!a[j][i])
            {
                isFull_1 = true;
                break;
            }
        }
        if(!isFull_1) res++;
    }
    return res;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= m; j++) cin >> a[i][j];
        }
        int ans = 0;
        for(int i = 1; i <= n; i++)
        {
            for(int j = i; j <= n; j++)
            {
                ans = max(ans, maxR(i, j, m) * (j - i + 1));
            }
        }
        cout << ans << endl;
    }
}