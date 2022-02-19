#include <bits/stdc++.h>
using namespace std;
stack <int> q;
int x;
string s;
void xl()
{
	cin >> s;
	if (s == "PUSH")
	{
		cin >> x;
		q.push (x);
		return;
	}
	if (s == "POP")
	{
		if (!q.empty()) q.pop();
		return;
	}
	if(q.empty()) cout << "NONE\n";
	else cout << q.top() << "\n";
}
int main()
{
	int t;
	cin >> t;
	while (t-- )
	{
		xl();
	}
}
