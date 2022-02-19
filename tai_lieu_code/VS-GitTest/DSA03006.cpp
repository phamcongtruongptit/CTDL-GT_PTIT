#include <bits/stdc++.h>
using namespace std;

int n;
vector <int> a, b;

void xl()
{
	cin >> n;
	a.resize(n); b.resize(n);
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
		b[i] = a[i];
	}
	sort(b.begin(), b.end());
	for(int i = 0;i < n; i++)
	{
		if(a[i] == b[i] || a[i] == b[n - i - 1] ) continue;
		else
		{
			cout << "No";
			return;
		}
	}
	cout << "Yes";
	a.clear();
	b.clear ();
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
