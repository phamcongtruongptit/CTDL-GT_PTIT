#include <bits/stdc++.h>
#define ll long long
using namespace std;
int n, m, x , k;
ll p[200], q[200];
ll res;
void xl()
{
	cin >> n >> m;
	for(int i = 0; i < n; i++) cin >> p[i];
	for(int i = 0; i < m; i++) cin >> q[i];
	ll res [n + m] = {0};
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			res[i + j] += p[i] * q[j];
		}
	}
	for(int i = 0; i < m + n - 1; i++)
	{
		cout << res [i] << " ";
	}
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
