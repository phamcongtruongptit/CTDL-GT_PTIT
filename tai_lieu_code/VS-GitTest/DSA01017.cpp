#include<bits/stdc++.h>
using namespace std;
vector< vector<string> > gC(15);
void pre()
{
	gC[1].push_back("0");
	gC[1].push_back("1");
	for(int i = 2; i <= 10; i++)
	{
		for(int j = 0; j < gC[i - 1].size(); j++)
		{
			gC[i].push_back('0' + gC[i - 1][j]);
		}
		for(int j = gC[i - 1].size() - 1; j >= 0 ; j--)
		{
			gC[i].push_back('1' + gC[i - 1][j]);
		}
	}
}
void solve()
{
	string s;
	cin >> s;
	int vt = 0;
	for(int i = s.length() - 1; i >= 0; i--)
	{
		if (s[i] == '1') vt = vt + (1 << (s.length() - i - 1));
	}
	cout << gC[s.length()][vt] << endl;
}
int main()
{
	pre();
	int t;
	cin >> t;
	while (t--) solve();
}