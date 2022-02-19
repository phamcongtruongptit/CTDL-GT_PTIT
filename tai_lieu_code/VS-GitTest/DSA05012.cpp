#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll a[1001] [1001];
const ll oo = 1e9 + 7;
ll C(int k, int n)
{
	if(a[n][k]) return a[n][k];
	if(k == 0 || k == n) a[n][k] = 1;
	else if(k == 1) a[n][k] = n;
	else a[n][k] = C(k - 1, n - 1) + C(k, n - 1);
	a[n][k] %= oo ;
	return a[n][k];
}
void xl()
{
	int n, k;
	cin >> n >> k;
	cout << C(k, n);
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
