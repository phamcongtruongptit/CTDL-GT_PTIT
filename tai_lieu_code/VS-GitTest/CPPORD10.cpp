#include <bits/stdc++.h>
using namespace std;
int res[1004] = {0};
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n, res1 = 0;
		cin >> n;
		int a[n + 3];
		for(int i = 1; i <= n; i++) cin >> a[i];
		for(int i = 1; i <= n; i++)
		{
			res[i] = 1;
			for(int j = 1; j < i; j++)
			{
				if(a[i] > a[j]) res[i] = max(res[i], res[j] + 1);
			}
			res1 = max(res1, res[i]);
		}
		cout << res1 << endl;
		for(int i = 0; i < 1004; i++) res[i] = 0;
	}
}