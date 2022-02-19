#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int oo = 1e6 + 1;
ll a[oo];
int n;
void xl()
{
	cin >> n;
	for(int i = 0; i < n; i++) cin >> a[i];
	sort (a, a+n);
	int l = 0, r = n - 1;
	while (l < r)
	{
		cout << a[r--] << " " << a[l++] << " ";
	}
	if (n % 2) cout << a[l];
	cout << endl;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		xl();
	}
}
