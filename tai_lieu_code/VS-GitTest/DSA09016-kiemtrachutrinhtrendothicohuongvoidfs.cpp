#include<bits/stdc++.h>
using namespace std;
vector< vector<int> > x;
vector<int> trace, dd;
bool check = 0;
void dfs(int u,int pre)
{
    dd[u] = 1;
	for(int v: x[u])
		if( dd[v] == 0)
		{
			dfs(v, u);
		}
		else if (dd[v]== 1)
		{
			check = 1;
			return;
		}
	dd[u] = 2;
}
void Reset(int w)
{
    x.clear();
    dd.clear();
    x.resize(w + 1);
    dd.resize(w + 1, 0);
    check = 0;
}
void solve()
{
    int e, w;
    cin >> w >> e;
    Reset(w);
    for(int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        x[a].push_back(b);
    }
    for(int i = 1; i <= w; i++)
        if (dd[i] == 0)
        {
            dfs(i, 0);
        }
    (check) ? (cout << "YES") : (cout << "NO");
    cout<<endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}