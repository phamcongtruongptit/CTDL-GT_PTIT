#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll a[2005][2005], dp[2005][2005] = {0}, n, m;
ll maxRectangle()
{
    ll ans = 0;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            ll sum = 0;
            for(int k = j; k <= m; k++)
            {
                sum += a[i][k];
                dp[j][k] = (dp[j][k] >= 0)? dp[j][k] + sum : sum;
                ans = max(ans, dp[j][k]);
            }
        }
    }
    return ans;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= m; j++)
            {
                cin >> a[i][j];
            }
        }
        for(int i = 0; i < 2005; i++)
        {
            for(int j = 0; j < 2005; j++) dp[i][j] = 0;
        }
        cout << maxRectangle() << endl;
    }
}