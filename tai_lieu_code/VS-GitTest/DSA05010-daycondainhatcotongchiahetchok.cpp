#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n, k;
	cin >> n >> k;
	int a[n] = {};
	for(int i = 0; i < n; i++) 
	{
		cin >> a[i];
		a[i] %= k;
	}
	vector<int> f(k, -1e9), ff(k);
	f[0] = 0;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < k; j++)
		{
			int tmp = (j - a[i]) % k;
			if (tmp < 0) tmp += k;
			ff[j] = max(f[j], f[tmp] + 1);
		}
		f = ff;
	}
	cout << f[0] << endl;
}
int main()
{
	int t;
	cin >> t;
	while (t--) solve();
}