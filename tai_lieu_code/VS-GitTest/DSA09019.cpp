#include<bits/stdc++.h>
#define F first
#define S second

using namespace std;
vector<vector<int> > x;
vector<int> trace,dd;
bool check = 0;
void bfs(int s)
{
    queue<pair<int,int> > q;
    q.push(make_pair(s, 0));
    while (!q.empty())
    {
        int u = q.front().F, pre = q.front().S;
        q.pop();
        for(int i = 0; i < x[u].size(); i++)
        {
            int v = x[u][i];
            if (dd[v] && v != pre)
            {
                check = 1;
                return;
            }
            if (dd[v] == 0)
            {
                dd[v] = 1;
                q.push(make_pair(v, u));
            }
            
        }
    }
}
void Reset(int V)
{
    x.clear();
    dd.clear();
    trace.clear();
    trace.resize(V + 1, -1);
    x.resize(V + 1);
    dd.resize(V + 1, 0);
    check = 0;
}
void solve()
{
    int E,V;
    cin >> V >> E;
    Reset(V);
    for(int i = 0; i < E; i++)
    {
        int a,b;
        cin >> a >> b;
        x[a].push_back(b);
        x[b].push_back(a);
    }
    for(int i = 1; i <= V; i++)
        if (dd[i] == 0)
        {
            dd[i] = 1;
            bfs(i);
        }
    (check) ? (cout << "YES") : (cout << "NO");
    cout<<endl;
}
int main()
{
    int t;
    cin >> t;
    for(int i = 0; i < t; i++) solve();
    return 0;
}