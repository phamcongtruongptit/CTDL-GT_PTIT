#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector <ll> v;
ll res;
int n;
void xl()
{
	v.clear();
	cin >> n;
	res = 0;
	v.resize(n);
	cin >> v[0] >> v[1] >> v[2];
	v[2] += v[0];
	for(int i = 0; i < 3; i++) res = max (res, v[i]);
	for(int i = 3; i < n; i++)
	{
		cin >> v[i];
		v[i] += max(v[i - 2], v[i - 3]);
		res = max (res, v[i]);
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
