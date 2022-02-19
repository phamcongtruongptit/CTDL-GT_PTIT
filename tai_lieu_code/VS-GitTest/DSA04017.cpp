#include <bits/stdc++.h>
#define ll long long
using namespace std;
int n;
vector <ll> a;
ll x;
bool check;
void xl()
{
	cin >> n;
	a.resize(n);
	check = 1;
	for(int i = 0; i < n; i++) cin >> a[i];
	for(int i = 0; i < n - 1; i++)
	{
		cin >> x;
		if (x != a[i] && check)
		{
			cout << i + 1;
			check = 0;
		}
	}
	a.clear();
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
