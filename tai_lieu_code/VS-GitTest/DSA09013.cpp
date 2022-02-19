#include<bits/stdc++.h>
using namespace std;
const int oo = 1e9;
int q, e;
vector< vector <int> > x;
vector<int> n, l, p;
vector< pair<int, int> > res;
void dfs(int u, int &no)
{
    for(int i = 0; i < x[u].size(); i++)
    {
        int v = x[u][i];
        if (v == p[u]) continue;
        if (n[v] == 0)
        {
            no++;
            n[v] = no;
            p[v] = u;
            dfs(v, no);
            if (n[u] < l[v]) 
            {
                if (u < v) res.push_back(make_pair(u, v));
                else res.push_back(make_pair(v, u));
            }
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
    p.resize(q + 1);
    n.resize(q + 1, 0);
    l.resize(q + 1, oo);
    res.clear();
    res.resize(0);
}
void solve()
{
    cin >> q >> e;
    Reset();
    for(itn i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        x[a].push_back(b);
        x[b].push_back(a);
    }
    int no = 1;
    n[1] = 1;
    dfs(1, no);
    sort(res.begin(), res.end());
    for(int i = 0; i < res.size(); i++)
    {
        cout << res[i].first << ' ' << res[i].second << ' ';
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}