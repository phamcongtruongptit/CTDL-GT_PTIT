#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int n, m;
    cin >> n >> m;
    ll x[n + 1][n + 1] = {};
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
            x[i][j] = (i == j) ? 0: 1e18;
    for(int i = 0; i < m; i++)
    {
        int a, b;
        ll c;
        cin >> a >> b >> c;
        x[a][b] = x[b][a] = c;
    }
    for(int k = 1; k <= n; k++)
        for(int i = 1; i <= n; i++)
            for(int j = 1; j <= n; j++)
                x[i][j] = min(x[i][j], x[i][k] + x[k][j]);
    int Q;
    cin >> Q;
    while (Q--)
    {
        int a, b;
        cin >> a >> b;
        cout << x[a][b] << endl;
    }
}
int main()
{
    solve();
}