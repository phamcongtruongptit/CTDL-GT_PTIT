#include<bits/stdc++.h>
using namespace std;
const int oo = 1e9;
int q, e;
vector<vector<int> > x;
vector<int> n, l, p;
vector<bool> res;
void dfs(int u,int no)
{
    for(int i = 0; i < x[u].size(); i++)
    {
        int v = x[u][i];
        if (v == p[u]) continue;
        if (n[v] == 0)
        {
            n[v] = no;
            p[v] = u;
            dfs(v, no + 1);
            if (n[u] <= l[v]) res[u]=1;
            l[u] = min(l[v], l[u]);
        }
        else l[u] = min(l[u], n[v]);
    }
}
void Reset()
{
    x.clear();
    n.clear();
    l.clear();
    p.clear();
    x.resize(q + 1);
    p.resize(q + 1, -1);
    n.resize(q + 1, 0);
    l.resize(q + 1, oo);
    res.clear();
    res.resize(q + 1, 0);
}
void solve()
{
    cin >> q >> e;
    Reset();
    for(int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        x[a].push_back(b);
        x[b].push_back(a);
    }
    int no = 1;
    for(int i = 1; i < q + 1; i++)
        if (n[i] == 0)
        {
            n[i] = 1;
            dfs(i, no + 1);
            int check = 0;
            for(int j = 0; j < x[i].size(); j++) if(n[x[i][j]] == 2) check++;
            if (check < 2) res[i] = 0;
        }
    for(int i = 1; i < q + 1; i++) if (res[i]) cout << i << ' ';
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}