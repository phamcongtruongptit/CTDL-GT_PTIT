#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s1, s2;
	getline(cin, s1);
	getline(cin, s2);
	vector<string> a;
	string tmp = "";
	for(int i = 0; i < s1.size(); i++)
	{
		if(s1[i] != ' ' && i != s1.size() - 1) tmp += s1[i];
		else if(i == s1.size() - 1)
		{
			tmp += s1[i];
			a.push_back(tmp);
			tmp = "";
		}
		else
		{
			a.push_back(tmp);
			tmp = "";
		}
	}
	vector<string> b;
	for(int i = 0; i < s2.size(); i++)
	{
		if(s2[i] != ' ' && i != s2.size() - 1) tmp += s2[i];
		else if(i == s2.size() - 1)
		{
			tmp += s2[i];
			b.push_back(tmp);
			tmp = "";
		}
		else
		{
			b.push_back(tmp);
			tmp = "";
		}
	}
	for(int i = 0; i < a.size(); i++)
	{
		int kt = 1;
		for(int j = 0; j < b.size(); j++)
		{
			if(a[i] == b[j])
			{
				kt = 0;
				break;
			}
		}
		if(kt == 1) cout << a[i] << " ";
	}
}