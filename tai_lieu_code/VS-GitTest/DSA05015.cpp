#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n, k, res ;
const ll oo = 1e9 + 7;
void xl()
{
	cin >> n >> k;
	if(k > n)
	{
		cout << "0";
		return;
	}
	if(k == 0)
	{
		cout << "1";
		return;
	}
	res = 1;
	for(int i = n - k + 1; i < n + 1; i++)
	{
		res *= i;
		res %= oo;
	}
	cout << res;
}
int main()
{
	int t; 
	cin >> t;
	while (t--)
	{
		xl();
		cout << "\n";
	}
}
