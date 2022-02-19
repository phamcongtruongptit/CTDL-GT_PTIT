#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll k, res;
stack <int> st;
ll cd(string s)
{
	ll tmp = 0;
	for(int i = 0; i < s.size(); i++)
	{
		tmp = tmp * k + (s[i] - '0');
	}
	return tmp;
}
void xl()
{
	string s;
	cin >> k >> s;
	res = cd(s);
	cin >> s;
	res += cd(s);
	while(res)
	{
		st.push(res % k);
		res /= k;
	}
	while (!st.empty())
	{
		cout << st.top();
		st.pop();
	}
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
