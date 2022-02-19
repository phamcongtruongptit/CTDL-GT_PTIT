#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll x, k;
int n;
vector < ll > a;
int BS(int l, int r, ll value)
{
	int mid, res = -2;
	while (l <= r)
	{
		mid = (l + r) / 2;
		if(a[mid] <= value)
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
	cin >> n >> x;
	for(int i = 0; i < n; i++)
	{
		cin >> k;
		a.push_back(k);
	}
	sort(a.begin(), a.end());
	cout << BS(0, n - 1, x);
	a.clear();
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
