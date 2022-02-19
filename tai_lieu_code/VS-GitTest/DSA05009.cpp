#include <bits/stdc++.h>
using namespace std;

int n;
long long a[1000], k;
bool check = 0;
void Try(int vt, long long sum)
{
	for(int i = vt; i < n; i++)
	{
		if (check == 1 || sum + a[i] > k / 2) return;
		if (sum + a[i] < k / 2) Try(i, sum + a[i]);
		else if(sum + a[i] == k / 2)
		{
			check = 1;
			return;
		}
	}
}

void xl()
{
	check = 0;
	cin >> n;
	k = 0;
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
		k += a[i];
	}
	if (k % 2)
	{
		cout << "NO";
		return;
	}
	sort (a, a + n);
	Try (0,0);
	if (check) cout << "YES";
	else cout << "NO";
}

int main()
{
	int t; 
	cin >> t;
	while (t -- )
	{
		xl();
		cout << endl;
	}
}
