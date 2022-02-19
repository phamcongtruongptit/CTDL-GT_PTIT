#include <bits/stdc++.h>
using namespace std;
int n;
long long a[100], k;
bool dd[100];
bool check = 1;
void Try(int vt, long long sum)
{
	if (sum > k) return;
	for(int i = vt; i < n; i++)
	{
		if(dd[i] == 0)
		{
			dd [i] = 1;
			if (sum + a[i] < k)
			{
				dd [i] = 1;
				Try(i, sum + a[i]);
				dd [i] = 0;
			}
			else if(sum + a[i] == k)
			{
				cout << "[";
				for(int j = 0; j < i; j++)
				{
					if (dd[j]) cout << a[j] << " ";
				}
				cout << a[i] << "] ";
				check = 0;
			}
			dd[i] = 0;
		}
	}
}

void xl()
{
	check = 1;
	cin >> n >> k;
	for(int i = 0; i < n; i++) cin >> a[i];
	sort (a, a + n);
	Try (0, 0);
	if (check) cout << "-1";

}
int main()
{
	int t; 
	cin >> t;
	while (t -- )
	{
		xl();
		cout << "\n";
	}
}
