#include<bits/stdc++.h>
using namespace std;

const long long mod = 1e9 + 7;
long long n, k;

long long luythua(long long x, long long y)
{
	if ( y == 0) return 1;
	long long res = luythua(x, y / 2);
	res = res * res;
	res %= mod;
	if ( y % 2) return (res * x) % mod;
	return res;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		cin >> n >> k;
		n %= mod;
		cout << luythua(n , k) << endl;
	}
}
