#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll oo = 1e9 + 7;
ll a[11][11], b[11][11];
int n;
ll k;
void tichmt(ll x[11][11], ll y[11][11])
{
	ll c[11][11];
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			c[i][j] = 0;
			for(int k = 0; k < n; k++)
			{
				c[i][j] += (x[i][k] * y[k][j]) % oo;
				c[i][j] %= oo;
			}
		}
	}
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			a[i][j] = c[i][j];
		}
	}
}
void Poww(ll a[11][11], ll x)
{
	if(x <= 1 ) return;
	Poww(a, x / 2);
	tichmt(a, a);
	if(x % 2 == 1) tichmt(a,b);
}
void xl()
{
	cin >> n >> k;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			cin >> a[i][j];
			b[i][j] = a[i][j];
		}
	}
	Poww(a, k);
	ll res = 0;
	for(int i = 0; i < n; i++)
	{
		res += a[i][0];
		res %= oo;
	}
	cout << res;
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
