#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector< vector<ll> > z;
ll Try(int n, int m)
{
	if (n == 0 || m == 0)
		return 1;
	if (z[n][m] != -1) return z[n][m];
	if (z[n - 1][m] == -1) z[n - 1][m] = Try(n - 1, m);
	if (z[n][m - 1] == -1) z[n][m - 1] = Try(n, m- 1);
	return z[n - 1][m] + z[n][m - 1];
}
void solve()
{
	int n, m;
	cin >> n >> m;
	z.clear();
	z.resize(n + 1, vector<ll> (m + 1, -1));
	cout << Try(n, m) << endl;
}
int main()
{
	int t;
	cin >> t;
	while (t--) solve();
}