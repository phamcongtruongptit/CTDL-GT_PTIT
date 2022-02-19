#include <bits/stdc++.h>
using namespace std;
priority_queue <int> q;
int n;
bool x;
void xl()
{
	cin >> n;
	int res = n;
	for(int i = 0; i < n; i++)
	{
		cin >> x;
		if (x) res -- ;
	}
	cout << res;
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
