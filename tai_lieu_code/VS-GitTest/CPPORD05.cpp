#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int res = -1;
		int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		for(int i = 0; i < n - 1; i++)
		{
			for(int j = i + 1; j < n; j++)
			{
				if(a[i] <= a[j])
				{
					int tmp = a[j] - a[i];
					if(tmp > res) res = tmp;
				}
			}
		}
		cout << res << endl;
	}
}