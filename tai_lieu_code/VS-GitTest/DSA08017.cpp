#include <bits/stdc++.h>
using namespace std;
int k, n;
int a[30];
void Try(int i)
{
	for(int j = 0; j < 2; j++)
	{
		a[i] = j;
		if (i == k)
		{
			for(int i = 1; i < k + 1; i++)
			{
				if (a[i]) cout << "6";
				else cout << "8";
			}
			cout <<" ";
		}
		else Try (i + 1);
	}
}
void xl()
{
	cin >> n;
	k = n;
	while (n -- )
	{
		Try(1);
		k --;
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
