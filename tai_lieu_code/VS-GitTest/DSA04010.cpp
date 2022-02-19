#include <bits/stdc++.h>
#define ll long long
using namespace std;
int n;
ll x, res, ans;
void xl()
{
	cin >> n;
	cin >> res;
	ans = res;
	for(int i = 1; i < n; i++)
	{
		cin >> x;
		if(res + x >= x) res += x;
		else res = x;
		ans = max (res, ans);
	}
	cout << ans;
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
