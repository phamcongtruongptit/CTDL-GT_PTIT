#include <bits/stdc++.h>
#define ll long long
using namespace std;
stack <ll> st;
string s;
ll tmp;
void xl()
{
	cin >> s;
	for(int i = s.size() - 1; i >= 0; i--)
	{
		if(s[i] == '+')
		{
			tmp = st.top();
			st.pop();
			tmp += st.top();
			st.pop();
			st.push(tmp);
		}
		else if(s[i] == '-')
		{
			tmp = st.top();
			st.pop();
			tmp -= st.top();
			st.pop();
			st.push(tmp);
		}
		else if(s[i] == '*')
		{
			tmp = st.top();
			st.pop();
			tmp *= st.top();
			st.pop();
			st.push(tmp);
		}
		else if(s[i] == '/')
		{
			tmp = st.top();
			st.pop();
			tmp /= st.top();
			st.pop();
			st.push(tmp);
		}
		else st.push(s[i] - '0');
	}
	while(!st.empty())
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
