#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	getline(cin, s);
	vector<string> a;
	string tmp = "";
	for(int i = 0; i < s.size(); i++)
	{
		if(s[i] >= 'A' && s[i] <= 'Z') s[i] = s[i] - 'A' + 'a';
		if(s[i] != ' ' && s[i] != '\t' && i != s.size() - 1) tmp += s[i];
		else if(i == s.size() - 1)
		{
			tmp += s[i];
			if(tmp != "") a.push_back(tmp);
		}
		else
		{
			if(tmp != "") a.push_back(tmp);
			tmp = "";
		}
	}
	cout << a[a.size() - 1];
	for(int i = 0; i < a.size() - 1; i++) cout << a[i].at(0);
	cout << "@ptit.edu.vn";
}