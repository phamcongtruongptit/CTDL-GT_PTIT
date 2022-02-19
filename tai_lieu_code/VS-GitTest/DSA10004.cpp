#include<bits/stdc++.h>
using namespace std;
int q, e;
vector< vector <int> > x;
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
		x[a].push_back(b);
		x[b].push_back(a);
	}
	int dem = 0;
	for(int i = 1; i <= q; i++)
	{
		if(x[i].size() % 2 == 0) dem++;
	}
	if (dem == q) cout << 2 << endl;
	else
		if (dem == q - 2) cout << 1 << endl;
		else cout << 0 <<endl;
}

int main()
{
	int t;
	cin >> t;
	while (t--) solve();
}