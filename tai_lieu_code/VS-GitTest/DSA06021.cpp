#include <bits/stdc++.h>
#define ll long long
using namespace std;
int n, x, k;
void xl()
{
	cin >> n >> x;
	for(int i = 0; i < n; i++)
	{
		cin >> k;
		if(k == x) cout << i + 1;
	}
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
