#include <bits/stdc++.h>
#define ll long long
using namespace std;
stack <char> st, tmp;
string s;
void xl()
{
	cin >> s;
	for(int i = 0; i < s.size(); i++)
	{
		if(s[i] != ')') st.push(s[i]);
		else
		{
			while(st.top() != '(' || st.empty())
			{
				tmp.push(st.top());
				st.pop();
			}
			st.pop();
			if(!st.empty() && st.top() == '-')
			{
				while (!tmp.empty())
				{
					if(tmp.top() == '+') st.push('-');
					else if(tmp.top() == '-') st.push('+');
					else st.push(tmp.top());
					tmp.pop();
				}
			}
			else
			{
				while (!tmp.empty())
				{
					st.push(tmp.top());
					tmp.pop();
				}
			}
		}
	}
	while(!st.empty())
	{
		tmp.push(st.top());
		st.pop();
	}
	while (!tmp.empty())
	{
		cout << tmp.top();
		tmp.pop();
	}
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		xl();
		cout << "\n";
	}
}
