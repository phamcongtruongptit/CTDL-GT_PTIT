#include <bits/stdc++.h>
using namespace std;

long long res;
vector < long long > v;
long long n, x;
const long long  oo = 1e9 + 7;

void xl()
{
	cin >> n;
	res = 0;
	for(int i = 0; i < n; i++)
	{
		cin >> x;
		v.push_back(x);
	}
	sort(v.begin(), v.end());
	for(int i = 0; i < n; i++)
	{
		res += (i * v[i]) % oo;
		res %= oo;
	}
	cout << res;
    v.clear();
}

int main()
{
	int t; 
	cin >> t;
	while (t -- )
	{
		xl();
		cout << endl;
	}
}
