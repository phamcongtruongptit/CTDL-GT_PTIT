#include <bits/stdc++.h>
using namespace std;
const long long mod = 1e9 + 7;
long long dao(long long n)
{
	long long a = 0;
	while (n > 0)
	{
		a = a * 10 + n % 10;
		n /= 10;
	}
	return a;
}
long long lT(long long x, long long y)
{
	if (y == 1) return x;
	long long res = lT(x, y / 2) % mod;
	res = (res * res) % mod;
	if (y % 2 == 0) return res;
	return (res * x) % mod;
}
void xl ()
{
	long long n;
	cin >> n;
	long long r = dao(n);
	cout << lT(n, r);
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
