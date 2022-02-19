#include <bits/stdc++.h>
using namespace std;
vector<int> ke[1005];
bool ok[1005];
int truoc[1005];
void DFS(int u, int v)
{
    if(ok[v]) return;
    ok[u] = true;
    for(int i = 0; i < ke[u].size(); i++)
    {
        if(!ok[ke[u].at(i)])
        {
            truoc[ke[u].at(i)] = u;
            DFS(ke[u].at(i), v);
        }
    }
}
void Trace(int u, int v)
{
    if(!ok[v])
    {
        cout << -1;
        return;
    }
    vector<int> a;
    while(u != v)
    {
        a.push_back(u);
        u = truoc[u];
    }
    a.push_back(v);
    reverse(a.begin(), a.end());
    for(int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        for(int i = 0; i < 1005; i++)
        {
            ke[i].clear();
        }
        memset(ok, false, sizeof(ok));
        memset(truoc, 0, sizeof(truoc));
        int a, b, st, en;
        cin >> a >> b >> st >> en;
        for(int i = 0; i < b; i++)
        {
            int u, v;
            cin >> u >> v;
            ke[u].push_back(v);
            ke[v].push_back(u);
        }
        DFS(st, en);
        Trace(en, st);
        cout << endl;
    }
}