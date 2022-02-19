#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int oo = 1e6 + 1;
int a[oo];
int n;
void xl()
{
	cin >> n;
	for(ll i = 0; i < n; i++) cin >> a[i];
	sort(a, a + n);
	for(ll i = 0; i < n; i++) cout << a[i] << " ";
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		xl();
		cout << endl;
	}
}
