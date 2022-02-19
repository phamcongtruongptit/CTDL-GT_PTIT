#include <bits/stdc++.h>
#define ll long long
using namespace std;
int n, m, x;
priority_queue <int, vector <int>, greater <int> > q;
void xl()
{
	cin >> n >> m;
	while(n--)
	{
		cin >> x;
		q.push(x);
	}
	while(m--)
	{
		cin >> x;
		q.push(x);
	}
	while(!q.empty())
	{
		cout << q.top() << " ";
		q.pop();
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
