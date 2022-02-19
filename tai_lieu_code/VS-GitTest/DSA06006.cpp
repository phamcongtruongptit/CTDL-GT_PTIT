#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int oo = 1e5 + 1;
ll a[3];
int x;
ll n;
void xl()
{
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> x;
		a[x] ++;
	}
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < a[i]; j++) cout << i << " ";
		a[i] = 0;
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
