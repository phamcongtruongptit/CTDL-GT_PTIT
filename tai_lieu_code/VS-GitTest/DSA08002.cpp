#include<bits/stdc++.h>
using namespace std;
int n;
void xl()
{
	deque <int> q;
	cin >> n;
	int x;
	string s;
	while (n--)
	{
		cin >> s;
		if (s == "PUSH")
		{
			cin >> x;
			q.push_back (x);
		}
		else if (s == "PRINTFRONT")
		{
			if(q.empty()) cout <<"NONE\n";
			else cout << q.front() <<"\n";
		}
		else if (!q.empty()) q.pop_front();

	}
}
int main()
{
	int t;
	t = 1;
	while (t--)
	{
		xl();
		cout << endl;
	}
}
