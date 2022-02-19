#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll dem;
string s;
ll res;
void xl ()
{
	res = 0; dem = 0;
	cin >> s;
	for(int i = 0; i < s.size(); i++)
	{
		if (s[i] == '(') dem ++;
		else
		{
			if (dem == 0)
			{
				res ++;
				dem ++;
			}
			else dem --;
		}
	}
	res += dem / 2;
	cout << res;
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
