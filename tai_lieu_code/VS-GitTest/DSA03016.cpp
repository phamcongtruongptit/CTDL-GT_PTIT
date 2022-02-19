#include <bits/stdc++.h>
using namespace std;
int s, d;
stack <int> st;
void xl()
{
	cin >> s >> d;
	if(d == 1 && s == 0)
	{
		cout << "0";
		return;
	}
	if(s == 0 || d * 9 < s)
	{
		cout << "-1";
		return;
	}
	s --;
	while(d --)
	{
		if(s >= 9)
		{
			st.push(9);
			s -= 9;
		}
		else if (s > 0)
		{
			st.push(s);
			s = 0;
		}
		else st.push(0);
	}
	cout << st.top() + 1; st.pop();
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
