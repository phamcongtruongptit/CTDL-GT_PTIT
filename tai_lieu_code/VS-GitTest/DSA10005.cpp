#include<bits/stdc++.h>
using namespace std;
int q, e;
vector< pair<int, int> > x;
void init()
{
	x.clear();
	x.resize(q + 1);
}
void solve()
{
	cin >> q >> e;
	init();
	for(int i = 0; i < e; i++) 
	{
		int a, b;
		cin >> a >> b;
		x[a].second++;
		x[b].first++;
	}
	for(int i = 1; i <= q; i++)
		if (x[i].first != x[i].second)
		{
			cout << 0 << endl;
			return;
		}
	cout << 1 << endl;
}
int main()
{
	int t;
	cin >> t;
	while (t--) solve();
}