#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int oo = 1e5 + 1;
bool a[10];
string s;
ll n;
void xl()
{
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> s;
		for(int i = 0; i < s.size(); i++)
		{
			a[s[i] - '0'] = 1;
		}
	}
	for(int i = 0; i < 10; i++)
	{
		if(a[i]) cout << i << " ";
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
