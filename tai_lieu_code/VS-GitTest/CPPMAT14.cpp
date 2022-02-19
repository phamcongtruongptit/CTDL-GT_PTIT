#include<bits/stdc++.h>
#define ll long long
using namespace std;
int a[1005][1005], dd[1005][1005] = {0};
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
            for(int j = 1; j <= m; j++)
            {
                if(a[i][j])
                {
                    dd[i][j] = min(dd[i - 1][j], min(dp[i - 1][j - 1], dd[i][j - 1]));
                    dd[i][j] += 1;
                }
                else dd[i][j] = 0;
                ans = max(ans, dd[i][j]);
            }
        }
        cout << ans << endl;
    }
}