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
		int dd[150] = {0};
		string s;
		cin >> s;
		for(int i = 0; i < s.size(); i++)
		{
			dd[s[i]]++;
		}
		for(int i = 0; i < s.size(); i++) if(dd[s[i]] == 1) cout << s[i];
		cout << endl;
	}
}