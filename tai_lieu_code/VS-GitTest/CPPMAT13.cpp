#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int mod = 1e9 + 7;
int a[1005][1005], h[1005] = {0};
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m; cin >> n >> m;
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= m; j++) cin >> a[i][j];
        }
        int ans = 0;
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= m; j++) h[j] = (a[i][j])? h[j] + 1 : 0;
            int l[1005], r[1005], d[1005], u[1005];
            int top = 0;
            d[0] = 0;
            for(int j = 1; j <= m; j++)
            {
                while(top > 0 && h[d[top]] >= h[j]) top--;
                l[j] = d[top] + 1;
                d[++top] = j;
            }
            u[0] = m + 1; top = 0;
            for(int j = m; j >= 1; j--)
            {
                while(top > 0 && h[u[top]] >= h[j]) top--;
                r[j] = u[top] - 1;
                u[++top] = j;
            }
            for(int j = 1; j <= m; j++) ans = max(ans, (r[j] - l[j] + 1) * h[j]);
        }
        cout << ans << endl;
    }
}
