#include <bits/stdc++.h>
using namespace std;

int n;
bool a[20][20];
bool res;

void Try(int x, int y, string s)
{
	if (x == n && y == n)
	{
		res = 0;
		cout << s << " ";
		return;
	}
	if(a[x + 1][y]) Try(x + 1, y, s + 'D');
	if(a[x][y + 1]) Try(x, y + 1, s + 'R');
}

void xl()
{
	cin >> n; res = 1; n ++;
	for(int i = 1; i < n; i++)
	{
		for(int j = 1; j < n; j++) cin >> a[i][j];
	}
	for(int i = 0; i < n + 1; i++)
	{
		a[0][i] = 0;
		a[i][0] = 0;
		a[n][i] = 0;
		a[i][n] = 0;
	}
	n --;
	if (!a[1][1])
	{
		cout << "-1";
		return;
	}
	Try(1, 1, "");
	if (res) cout << "-1";
}
int main()
{
	int t;
	cin >> t;
	while (t -- )
	{
		xl();
		cout << "\n";
	}
}
