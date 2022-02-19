#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n, k;
ll gap(int n, ll k)
{
	long long x = pow(2, n - 1);
	if(k == x) return n;
	if(k < x)  return gap(n - 1, k);
	return gap(n - 1, k - x);
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		cin >> n >> k;
		cout << gap(n, k) << endl;
	}
	return 0;
}
