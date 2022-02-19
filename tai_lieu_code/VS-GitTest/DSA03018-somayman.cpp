#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n, bb = 0, b = 0;
	cin >> n;
	bb = n / 7;
	while (bb >= 0)
	{
		if ((n - bb * 7) % 4 == 0) 
		{
			b = (n - bb * 7) / 4;
			break;
		}
		bb--;
	}
	if (bb < 0) cout << -1;
	else
	{
		for(int i = 0; i < b; i++) cout << 4;
		for(int i = 0; i < bb; i++) cout << 7;
	}
	cout << endl;
}
int main()
{
	int t;
	cin >> t;
	while (t--) solve();
}