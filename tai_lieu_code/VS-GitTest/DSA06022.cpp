#include <bits/stdc++.h>
#define ll long long
using namespace std;
int n, x;
int res1, res2;
bool check;
void xl()
{
	cin >> n;
	cin >> res1;
	check = 1;
	for(int i = 1; i < n; i++)
	{
		cin >> x;
		if(res1 == x) continue;
		if (res1 > x)
		{
			res2 = res1;
			res1 = x;
			continue;
		}
		if(check)
		{
			check = 0;
			res2 = x;
		}
		else if(res2 > x) res2 = x;
	}
	if(check || res1 == res2) cout << "-1";
	else cout << res1 << " " << res2;
}
int main()
{
	int t; 
	cin >> t;
	while (t--)
	{
		xl();
		cout << endl;
	}
}
