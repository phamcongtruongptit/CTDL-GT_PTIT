#include <bits/stdc++.h>
#define ll long long
using namespace std;
int n;
vector <ll> v;
void xl()
{
	cin >> n;
	v.resize(n);
	if(n == 1)
	{
		cin >> v[0];
		cout << v[0];
		return;
	}
	if(n == 2)
	{
		cin >> v[0] >> v[1];
		cout << max(v[0], v[1]);
		return;
	}
	cin >> v[0] >> v[1] >> v[2];
	v[2] += v[0];
	for(int i = 3; i < n; i++)
	{
		cin >> v[i];
		v[i] += max(v[i - 2], v[i - 3]);
	}
	cout << max(v[n - 1], max(v[n - 2], v[n - 3]));
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
