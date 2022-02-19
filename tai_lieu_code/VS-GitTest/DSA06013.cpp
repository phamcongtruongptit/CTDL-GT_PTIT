#include<bits/stdc++.h>
using namespace std;
const int oo = 1e5 + 1;
int a[oo];
int k, n;
int up (int l, int r, int v)
{
	int mid;
	int res = n;
	while (l <= r)
	{
		mid = (l + r) / 2;
		if (a[mid] > v)
		{
			res = mid;
			r = mid - 1;
		}
		else l = mid + 1;
	}
	return res - 1;
}
int lowe (int l, int r, int v)
{
	int mid;
	int res = -1;
	while (l <= r)
	{
		mid = (l + r) / 2;
		if (a[mid] < v)
		{
			res = mid;
			l = mid + 1;
		}
		else r = mid - 1;
	}
	return res + 1;
}
void xl()
{
	cin >> n >> k;
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int res;
	n --;
	res = up(0, n, k) - lowe(0, n, k) + 1;
	if (res) cout << res;
	else cout << "-1";
	cout <<"\n";
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		xl();
	}
}
