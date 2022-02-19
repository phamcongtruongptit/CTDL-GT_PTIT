#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int oo = 1e5 + 1;
int a[oo];
int k, n;
void xl()
{
	cin >> n >> k;
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	sort(a, a + n);
	int r = n - 1;
	while (k--)
	{
		cout << a[r--] << " ";
	}
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
