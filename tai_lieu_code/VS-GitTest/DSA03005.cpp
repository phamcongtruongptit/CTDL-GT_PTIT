#include <bits/stdc++.h>
using namespace std;

long long n, k;
const int oo = 1e6 + 1;
long long a[oo];
long long res;

void xl()
{
	cin >> n >> k;
	res = 0;
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
		res += a[i];
	}
	sort(a, a + n);
	if (k > n - k) k = n - k;
	n = 0;
	for(int i = 0; i < k; i++)
	{
		n += a[i];
	}
	cout << res - n * 2;
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
