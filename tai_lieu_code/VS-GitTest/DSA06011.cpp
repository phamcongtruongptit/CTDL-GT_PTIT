#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define ull unsigned long long
using namespace std;
int n;
vector <int> a;
int res;
void xl()
{
	cin >> n;
	a.resize(n);
	for(int i = 0; i < n; i++) cin >> a[i];
	res = a[0] + a[1];
	for(int i = 0; i < n - 1; i++)
	{
		for(int j = i + 1; j < n; j++)
		{
			if(abs(res) > abs(a[i]+a[j])) res = a[i] + a[j];
		}
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
