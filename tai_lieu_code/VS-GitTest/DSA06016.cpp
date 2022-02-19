#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int oo = 1e6 + 1;
int n, m;
ll res, x, y;
void xl()
{
	cin >> n >> m;
	cin >> res;
	for(ll i = 1; i < n; i++)
	{
		cin >> x;
		res = max(res, x);
	}
	cin >> y;
	for(ll i = 1; i < m; i++)
	{
		cin >> x;
		y = min (x,y);
	}
	cout << res * y;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		xl();
		cout << endl;
	}
}
