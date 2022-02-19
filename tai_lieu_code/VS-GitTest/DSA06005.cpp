#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define ull unsigned long long
using namespace std;
const int oo = 1e5 + 1;
vector <pair <int, int> > v;
vector <int> res;
int n, m, x;
void xl()
{
	v.resize(oo, mp(0, 0));
	cin >> n >> m;
	for(int i = 0; i < n; i++)
	{
		cin >> x;
		v[x].F ++;
	}
	for(int i = 0; i < m; i++)
	{
		cin >> x;
		v[x].S ++;
	}
	for(int i = 0; i < oo; i++)
	{
		if(v[i].F || v[i].S) cout << i << " ";
		if (v[i].F && v[i].S) res.pb(i);
	}
	cout << endl;
	for(int i = 0; i < res.size(); i++)
	{
		cout << res[i] << " ";
	}
	v.clear();
	res.clear();
}
int main()
{
	int t;
	cin >> t;
	while (t-- )
	{
		xl();
		cout << endl;
	}
}
