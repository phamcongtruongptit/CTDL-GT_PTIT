#include<bits/stdc++.h>

using namespace std;

void solve()
{
	int n;
	cin >> n;
	int a[n], it[n];
	for(int i =0; i < n; i++)
	{
		cin >> a[i];
	}
	stack<int> st;
	st.push(0);
	for(int i = 1; i < n; i++)
	{
		while (st.size() && a[i] > a[st.top()])
		{
			it[st.top()]= i;
			st.pop();
		}
		st.push(i);
	}
	while (st.size())
	{
		it[st.top()] = -1;
		st.pop();
	}
	for(int i:it)
	{
		if (i == -1) cout << -1 <<' ';
		else cout << a[i] <<' ';
	}
	cout << endl;
}
int main()
{
	int t = 1;
	cin >> t;
	while (t--) solve();
}