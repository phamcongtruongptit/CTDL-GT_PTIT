#include<bits/stdc++.h>
using namespace std;
int w, e;
bool check;
vector< vector<int> > x;

int bfs(int s)
{
	vector<bool> dd(w + 1,0);
	queue<int> q;
	q.push(s);
	dd[s] = 1;
	while (!q.empty())
	{
		int u = q.front();
		q.pop();
		for(int v: x[u])
			if (dd[v] == 0)
			{
				dd[v] = 1;
				q.push(v);
			}
	}
	for(int i = 1; i <= w; i++)
		if(dd[i] == 0) return 0;
	return 1;
}
void init()
{
	x.clear();
	x.resize(w + 1);
	check = 1;
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
	}
	FORT(int s = 1; s <= w; s++) 
	{
		if(!check) break;
		check = bfs(s);
	}
	(check)? (cout << "YES" << endl): (cout << "NO" << endl);
}
int main()
{
	int t;
	cin >> t;
	while (t--) solve();
}