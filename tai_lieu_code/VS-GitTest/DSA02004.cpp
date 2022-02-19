#include <bits/stdc++.h>
using namespace std;
int n;
bool a[15][15];
vector <string> res;
int x[] = {1, 0, 0, -1};
int y[] = {0, 1, -1, 0};
char si[] = {'D', 'R', 'L', 'U'};
void Try(int X, int Y, string s)
{
	if(X == n && Y == n) res.push_back(s);
	for(int i = 0; i < 4; i++)
	{
		if(a[X + x[i]][Y + y[i]])
		{
			a[X + x[i]][Y + y[i]] = 0;
			Try(X + x[i], Y + y[i], s + si[i]);
			a[X + x[i]][Y + y[i]] = 1;
		}
		
	}
}
void xl()
{
	cin >> n;
	n += 2;
	for(int i = 0; i < n; i++)
	{
		a[i][0] = a[0][i] = a[n - 1][i] = a[i][n - 1] = 0;
	} 
	n--;
	for(int i = 1; i < n; i++)
	{
		for(int j = 1; j < n; j++) cin >> a[i][j];
	}
	n --;
	res.clear();
	a[1][1] = 0;
	Try(1, 1, "");
	if(res.size() == 0)
	{
		cout << "-1";
		return;
	}
	sort(res.begin(), res.end());
	for(int i = 0; i < res.size(); i++) cout << res[i] << " ";
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
