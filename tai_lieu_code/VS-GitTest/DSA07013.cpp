#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string s;
		cin >> s;
		stack<long long> st;
		int len = s.size();
		for(int i = 0; i < s.size(); i++)
		{
			if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '%' || s[i] == '^')
			{
				long long a = st.top(); st.pop();
				long long b = st.top(); st.pop();
				long long tmp;
				if(s[i] == '+') tmp = b + a;
				else if(s[i] == '-') tmp = b - a;
				else if(s[i] == '*') tmp = b * a;
				else if(s[i] == '/') tmp = b / a;
				else if(s[i] == '%') tmp = b % a;
				else if(s[i] == '^')
				{
					tmp = b;
					for(int i = 0; i < a - 1; i++)
					{
						tmp *= b;
					}
				}
				st.push(tmp);
			}
			else st.push((long long)(s[i] - '0'));
		}
		cout << st.top() << endl;
	}
}