#include <bits/stdc++.h>
using namespace std;
stack <string> st;
string tmp, s, k;
void xl()
{
	cin >> s;
	for(int i = s.size() - 1; i >= 0; i--)
	{
		if(s[i] != '+' && s[i] != '-' && s[i] != '*' && s[i] != '/')
		{
			tmp = "";
			tmp = tmp + s[i];
			st.push(tmp);
		}
		else
		{
			tmp = st.top();
			tmp = '(' + tmp;
			st.pop();
			k = st.top();
			k = k + ')';
			st.pop();
			tmp = tmp + s[i];
			tmp = tmp + k;
			st.push(tmp);
		}
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
