#include <bits/stdc++.h>
using namespace std;

string s;
int f[300];
int res;

void xl()
{
	cin >> s; res = 0;
	for(int i = 0; i < s.size(); i++) f[s[i]] ++;
	for(int i = 0; i < 300; i++)
	{
		if (f[i])
		{
			res = max (res, f[i]);
			f[i] = 0;
		}
	}
	int n = s.size();
	if (n % 2 && n / 2 + 1 >= res) cout << "1";
	else if(n % 2 == 0 && n / 2 >= res) cout << "1";
	else cout << "-1";
	
}
int main()
{
	int t; 
	cin >> t;
	while (t-- )
	{
		xl();
		cout << endl;
	}
}
