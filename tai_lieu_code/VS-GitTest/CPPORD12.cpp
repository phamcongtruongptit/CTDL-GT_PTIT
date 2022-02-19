#include<bits/stdc++.h>
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
		for(int i = 0; i < n; i++) cin >> a[i];
		int x = 1;
		while(1)
		{
			int stop = 1;
			for(int i = 0; i < n; i++)
			{
				if(a[i] == x)
				{
					stop = 0;
					break;
				}
			}
			if(stop == 0) x++;
			else break;
		}
		cout << x << endl;
	}
}