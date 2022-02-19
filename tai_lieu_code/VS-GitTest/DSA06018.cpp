#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int oo = 1e6 + 1;
bool a[oo];
int n, x, y, k;
void xl()
{
	cin >> n;
	cin >> x;
	y = x;
	a[x] = 1;
	for(ll i = 1; i < n; i++)
	{
		cin >> k;
		a[k] = 1;
		x = min (k, x);
		y = max(k, y);
	}
	a[x] = 0; a[y] = 0;
	int dem = 0;
	for(ll i = x + 1; i < y; i++)
	{
		if(!a[i]) dem ++;
		else a[i] = 0;
	}
	cout << dem;
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
