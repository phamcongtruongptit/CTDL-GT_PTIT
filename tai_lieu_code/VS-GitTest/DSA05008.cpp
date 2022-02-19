#include <bits/stdc++.h>
#define ll long long
using namespace std;
int n;
ll s;
void xl()
{
	cin >> n >> s;
	int a[n];
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	bool L[s + 1] = {0};
	L[0] = 1;
	for(int i = 0; i < n; i++)
	{
		for(int j = s; j >= 0; j--)
		{
			if(L[j] == 0 && L[j - a[i]] == 1) L[j] = 1;
		}
	}
	if (L[s]) cout << "YES";
	else cout << "NO";

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
