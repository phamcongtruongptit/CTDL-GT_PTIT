#include <bits/stdc++.h>
#define ll long long
using namespace std;
int k,n;
int a[30];
ll po(ll mu)
{
	if (mu == 0) return 1;
	ll res = po(mu / 2);
	res = res * res;
	if(mu % 2) return res * 2;
	return res;
}
void Try(int i)
{
	for(int j = 0; j < 2; j++)
	{
		a[i] = j;
		if (i == k)
		{
			for(int i = 1; i <= k; i++)
			{
				if (a[i]) cout << "8";
				else cout << "6";
			}
			cout << " ";
		}
		else Try (i + 1);
	}
}
void xl(){
	cin >> n;
	k = 1;
	cout << po(n + 1) - 2 << endl;
	while (k <= n)
	{
		Try(1);
		k++;
	}
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
