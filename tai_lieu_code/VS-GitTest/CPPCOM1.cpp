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
		int a[n];
		for(int i = 0; i < n; i++)
		{
			a[i] = 0;
			cout << a[i];
		}
		cout << " ";
		while(1)
		{
			for(int i = n - 1; i >= 0; i--)
			{
				int check = 0;
				if(a[i] == 0)
				{
					a[i] = 1;
					check = 1;
					for(int j = i + 1; j < n; j++) a[j] = 0;
				}
				if(check == 1) break;
			}
			int dem = 0;
			for(int i = 0; i < n; i++)
			{
				if(a[i] == 1) dem++;
				cout << a[i];
			}
			cout << " ";
			if(dem == n) break;
		}
		cout << endl;
	}
}