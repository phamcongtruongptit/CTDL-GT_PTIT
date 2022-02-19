#include <bits/stdc++.h>
using namespace std;
priority_queue <int> q;
int n, m, k;
int x;
void xl()
{
	while(!q.empty()) q.pop();
	cin >> n >> m >> k;
	for(int i = 0; i < n; i++)
	{
		cin >> x;
		q.push(x);
		while(q.size() > k) q.pop();
	}
	for(int i = 0; i < m; i++)
	{
		cin >> x;
		q.push(x);
		while(q.size() > k) q.pop();
	}
	cout << q.top();
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
