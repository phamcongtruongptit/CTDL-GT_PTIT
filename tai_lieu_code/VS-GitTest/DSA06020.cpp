#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int oo = 1e6 + 1;
ll a[oo], X;
int n;
int BS(int l, int r, ll value)
{
	int mid;
	while (l <= r)
	{
		mid = (l + r) / 2;
		if(a[mid] == value) return 1;
		else if (a[mid] > value) r = mid - 1;
		else l = mid + 1;
	}
	return -1;
}
void xl()
{
	cin >> n >> X;
	for(int i = 0; i < n; i++) cin >> a[i];
	cout << BS(0, n, X);
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
