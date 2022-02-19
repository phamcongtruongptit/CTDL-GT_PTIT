#include<bits/stdc++.h>
#define ll long long
using namespace std;
struct so
{
	ll so;
	ll value;
	int index;
};
const int oo = 1e6 + 1;
so a[oo];
int n;
ll x;
bool cmp(so y, so z)
{
	if(y.value == z .value) return y.index < z.index;
	return y.value < z.value;
}
void xl()
{
	cin >> n >> x;
	for(int i = 0; i < n; i++)
	{
		cin >> a[i].so;
		a[i].value = abs(x - a[i].so);
		a[i].index = i;
	}
	sort (a, a + n, cmp);
	for(int i = 0; i < n; i++) cout << a[i].so <<" ";
	cout << "\n";
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
