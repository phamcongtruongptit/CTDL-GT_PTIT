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
		string s;
		cin.ignore();
		getline(cin, s);
		string tmp = "";
		vector<string> a;
		for(int i = 0; i < s.size(); i++)
		{
			if(s[i] != ' ' && s[i] != '\t' && i != s.size() - 1) tmp += s[i];
			else if(i == s.size() - 1)
			{
				tmp += s[i];
				a.push_back(tmp);
				tmp = "";
			}
			else
			{
				a.push_back(tmp);
				tmp = "";
			}
		}
		cout << a.size() << endl;
	}
}