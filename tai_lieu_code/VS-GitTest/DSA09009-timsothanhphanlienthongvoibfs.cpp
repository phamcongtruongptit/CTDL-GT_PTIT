#include<bits/stdc++.h>
using namespace std;
int q, e, st, fn;
vector<bool> dd;
vector< vector<int> > x;
void init()
{
    dd.clear();
    x.clear();
    dd.resize(q + 5, 0);
    x.resize(q + 5);
}
void bfs(int u)
{
    queue<int> q;
    q.push(u);
    dd[u] = 1;
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for(int v: x[u])
        {
            if (dd[v] == 0) 
            {
                dd[v] = 1;
                q.push(v);
            }
        }
    }
}
void solve()
{
    int dem = 0;
    cin >> q >> e;
    init();
    for(int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        x[a].push_back(b);
        x[b].push_back(a);
    }
    for(int i = 1; i <= q; i++)
        if (dd[i] == 0)
        {
            bfs(i);
            dem ++;
        }
    cout << dem << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--) solve();
}