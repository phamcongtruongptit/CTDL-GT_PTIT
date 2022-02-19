#include<bits/stdc++.h>
using namespace std;
string add(string s1, string s2)
{
	if(s1.length() < s2.length()){
		string s = s1; s1 = s2; s2 = s;
	}
	s2.insert(0, s1.length() - s2.length(), '0');
	int res = 0;
	string ans;
	for(int i = s1.length() - 1; i >= 0; i--)
    {
		int tmp = s1.at(i) - '0' + s2.at(i) - '0' + res;
		ans.insert(0, 1, tmp % 10 + '0');
		res = tmp / 10;
	}
	if(res != 0) ans.insert(0, 1, res + '0');
	return ans;
}
bool kt(string s, int vt, int dai1, int dai2)
{
	string s1 = s.substr(vt, dai1);
	string s2 = s.substr(vt + dai1, dai2);
	string s3 = add(s1, s2);
	int n = s.length();
	int m = s3.length();
	if(m > n - vt - dai1 - dai2)
	return false;
	if(s3 == s.substr(vt + dai1 + dai2, m))
    {
		if (vt + dai1 + dai2 + m == n) return true; 
		return kt(s, vt + dai1, dai2,m);
	}
	return false;
}
bool inkq(string s)
{
	int n = s.length();
	for(int i = 1; i < n; i++)
    {
		for(int j = 1; i + j < n; j++)
        {
			if(kt(s, 0, i, j))
            {
			    return true;
		    }
	    }
    }
	return false;
}
int main()
{
    int t;
	cin >> t;
	while(t--)
	{
		string s;
		cin >> s;
		if(inkq(s)) cout << "Yes";
		else cout << "No";
		cout << endl;
	}
	return 0;
}