#include <bits/stdc++.h>
using namespace std;
int n, m, x;
int a[200][200];
void xl()
{
	cin >> n >> m;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++) cin >> x;
	}
	for(int i = 0; i < m; i++) a[0][i] = 1;
	for(int i = 0; i < n; i++) a[i][0] = 1;
	for(int i = 1; i < n; i++)
	{
		for(int j = 1; j < m; j++)
		{
			a[i][j] = a[i - 1][j] + a[i][j - 1];
		}
	}
	n --;
	m --;
	cout << a[n][m];
}

int main()
{
	int t; 
	cin >> t;
	while (t -- )
	{
		xl();
		cout << endl;
	}
}
