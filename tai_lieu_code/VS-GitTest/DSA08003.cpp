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
		if (s == "PUSHFRONT")
		{
			cin >> x;
			q.push_front (x);
		}
		else if (s == "PRINTFRONT")
		{
			if(q.empty()) cout <<"NONE\n";
			else cout << q.front() <<"\n";
		}
		else if (!q.empty() && s == "POPFRONT") q.pop_front();
		else if (s == "PUSHBACK")
		{
			cin >> x;
			q.push_back (x);
		}
		else if (s == "PRINTBACK")
		{
			if(q.empty()) cout <<"NONE\n";
			else cout << q.back() <<"\n";
		}
		else if (!q.empty()) q.pop_back();

	}
}
int main()
{
	int T;
	T = 1;
	while (T--)
	{
		xl();
		cout << endl;
	}
}
