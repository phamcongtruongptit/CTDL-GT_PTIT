#include <bits/stdc++.h>
using namespace std;
void sX(int a[], int k, int n)
{
	for(int i = k + 1; i < n; i++)
	{
		for(int j = i + 1; j < n; j++)
		{
			if(a[i] < a[j])
			{
				swap(a[i], a[j]);
			}
		}
	}
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int a[n], k = -1;
		for(int i = 0; i < n; i++)
		{
			a[i] = n - i;
			cout << a[i];
		}
		cout << " ";
		do
		{
			for(int i = n - 1; i >= 1; i--)
			{
				if(a[i] < a[i - 1])
				{
					k = i - 1;
					break;
				}
				k = -1;
			}
			if(k != -1)
			{
				int max = -1, dd;
				for(int i = k + 1; i < n; i++)
				{
					if(a[i] > max && a[i] < a[k])
					{
						max = a[i];
						dd = i;
					}
				}
				if(max != -1) swap(a[k], a[dd]);
				sX(a, k, n);
				for(int i = 0; i < n; i++)
				{
					cout << a[i];
				}
				cout << " ";
			}
		}while(k != -1);
		cout << endl;
	}
}
