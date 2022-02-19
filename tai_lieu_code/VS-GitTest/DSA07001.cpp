#include <bits/stdc++.h>
using namespace std;
stack <int> q, res;
int x;
string s;
void xl()
{
	while (cin >> s)
	{
		if (s == "push")
		{
			cin >> x;
			q.push(x);
		}
		else if (s == "pop")
		{
			if( !q.empty()) q.pop();
		}
		else
		{
			if (q.empty())
			{
				cout << "empty\n";
				continue;
			}
			while(!q.empty())
			{
				x = q.top();
				res.push(x);
				q.pop();
			}
			while (!res.empty())
			{
				x = res.top();
				q.push(x);
				cout << x << " ";
				res.pop();
			}
			cout << endl;
		}
	}
}
int main ()
{
	xl();
}