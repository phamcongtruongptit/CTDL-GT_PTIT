#include<bits/stdc++.h>
using namespace std;
int w, e, st, fn;
vector<bool> dd;
vector<vector<int> > x;
int dem, res;
void init()
{
    dd.clear();
    x.clear();
    dd.resize(w + 1, 0);
    x.resize(w + 1);
    dem  = 0;
    res = 0;
}
void dfs(int u)
{
    dd[u] = 1;
    dem++;
    for(int v: x[u])
    {
        if (dd[v]==0) dfs(v);
    }
}
void solve()
{
    cin >> w >> e;
    init();
    for(int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        x[a].push_back(b);
        x[b].push_back(a);
    }
    for(int i = 1; i <= w; i++)
        if (dd[i] == 0)
        {
            dfs(i);
            res = max(res, dem);
            dem = 0;
        }
    cout << res << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--) solve();
}