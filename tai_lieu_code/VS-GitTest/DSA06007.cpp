#include <bits/stdc++.h>
#define ll long long
using namespace std;
int n;
vector <int> a;
priority_queue <int, vector <int>, greater <int> > q;
int k;
void xl()
{
	cin >> n;
	n++;
	a.resize(n);
	for(int i = 1; i < n; i++)
	{
		cin >> a[i];
		q.push(a[i]);
	}
	int i = 1;
	while(!q.empty())
	{
		if(a[i] != q.top())
		{
			cout << i << " ";
			break;
		}
		i ++;
		q.pop();
	}
	while(!q.empty())
	{
		if(a[i] != q.top()) k = i;
		i ++;
		q.pop();
	}
	cout << k;
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
