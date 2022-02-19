#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n;
	long long res = 0;
	cin >> n;
	vector<int> a(n), b(n);
	for(int i = 0; i< n;i++) cin >> a[i];
	for(int i = 0; i< n;i++) cin >> b[i];
	sort(a.begin(), a.end());
	sort(b.begin(), b.end(), greater<int>());
	for(int i = 0; i< n; i++)
	{
		res += a[i] * b[i];
	}
	cout << res << endl;
}
int main()
{
	int t;
	cin >> t;
	while (t--) solve();
}