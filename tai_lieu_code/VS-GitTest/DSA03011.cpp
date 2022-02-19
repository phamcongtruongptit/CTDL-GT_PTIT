#include <bits/stdc++.h>
#define ll long long
using namespace std;
int n;
ll res, x, ans;
priority_queue < int, vector <int> , greater <int> > q;
const ll oo = 1e9 + 7;
void xl()
{
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> x;
		q.push(x);
	}
	ans = 0;
	while (q.size() > 1)
	{
		res = q.top(); q.pop();
		res += q.top (); q.pop(); res %= oo;
		ans += res; ans %= oo;
		q.push(res);
	}
	while (!q.empty())
	{
		q.pop();
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
