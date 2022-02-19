#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int a[n];
		for(int i = 0; i < n; i++)
		{
			a[i] = i + 1;
			cout << a[i];
		}
		cout << " ";
		while(1)
		{
			int k, kt = 1;
			for(int i = n - 1; i >= 1; i--)
			{
				if(a[i] > a[i - 1])
				{
					k = i - 1;
					kt = 0;
					break;
				}
			}
			if(kt == 1) break;
			int vt;
			for(int i = n - 1; i > k; i--)
			{
				if(a[i] > a[k])
				{
					vt = i;
					break;
				}
			}
			swap(a[k], a[vt]);
			sort(a + k + 1, a + n);
			for(int i = 0; i < n; i++) cout << a[i];
			cout << " ";
		}
		cout << endl;
	}
}