#include <bits/stdc++.h>
using namespace std;
vector<int> ke[1005];
bool ok[1005];
int truoc[1005];
void DFS(int u)
{
    ok[u] = true;
    for(int i = 0; i < ke[u].size(); i++)
    {
        if(!ok[ke[u].at(i)])
        {
            truoc[ke[u].at(i)] = u;
            DFS(ke[u].at(i));
        }
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
        int a, b;
        cin >> a >> b;
        for(int i = 0; i < b; i++)
        {
            int u, v;
            cin >> u >> v;
            ke[u].push_back(v);
            ke[v].push_back(u);
        }
        int res = 0;
        for(int i = 1; i <= a; i++)
        {
            if(!ok[i])
            {
                res++;
                DFS(i);
            }
        }
        cout << res << endl;
    }
}