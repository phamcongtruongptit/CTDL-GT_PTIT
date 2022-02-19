#include <bits/stdc++.h>
#define long long ll
using namespace std;
ll gcd(ll a, ll b)
{
	if(b == 0)return a;
	else return gcd(b, a % b);
}
ll lcm(ll a, ll b)
{
	return (a * b) / gcd(a, b);
}
int main()
{
	ll t, m, n;
	ll ma, aa, bb, ans;
	cin >> t;
	while(t--)
	{
		cin >> m >> n;
    	ma = lcm(m - 1, n - 1);
    	aa = ma / (m - 1);
    	bb = ma / (n - 1);
    	ans = 1 + ma - ((aa - 1) * (bb - 1)) / 2;
    	cout << ans << endl;
	}
	return 0;
}