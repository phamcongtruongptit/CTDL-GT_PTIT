#include<bits/stdc++.h>
using namespace std;
int w, e, st;
vector<vector<int> > x;
vector<pair<int, int > > res;
vector<bool> dd;
bool check = 0;
void in()
{
    for(pair<int, int> e: res)
    {
        cout << e.first << ' ' << e.second << endl;
    }
}
void dfs(int u)
{
    dd[u] = 1;
    for(int v: x[u])
        if (!dd[v])
        {
            res.push_back(make_pair(u, v));
            dfs(v);
        }
}
void init()
{
    x.clear();
    res.clear();
    dd.clear();
    x.resize(w + 1);
    dd.resize(w + 1, 0);
    check = 1;
}
void solve()
{
    cin >> w >> e >> st; 
    init();
    for(int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        x[a].push_back(b);
        x[b].push_back(a);
    }
    dfs(st);
    for(int i = 1; i <= w; i++)
    {
        if(!dd[i]) check = 0;
    }
    if (!check) cout << -1 << endl;
    else in();
}
int main()
{
    int t;
    cin >> t;
    while (t--) solve();
}