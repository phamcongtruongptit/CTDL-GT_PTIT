#include<bits/stdc++.h>
using namespace std;
int n;
void xl()
{
	deque <int> q;
	cin >> n;
	int x, lp;
	while(n--)
	{
		cin >> lp;
		if (lp == 1) cout << q.size() << "\n";
		else if (lp == 2)
		{
			if (q.empty()) cout << "YES\n";
			else cout << "NO\n";
		}
		else if (lp == 3)
		{
			cin >> x;
			q.push_back(x);
		}
		else if (lp == 4)
		{
			if (!q.empty()) q.pop_front();
		}
		else if (lp == 5)
		{
			if (q.empty()) cout << "-1";
			else cout << q.front();
			cout << endl;
		}
		else
		{
			if (q.empty()) cout << "-1";
			else cout << q.back();
			cout << endl;
		}
	}
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		xl();
		cout << endl;
	}
}
