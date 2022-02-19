#include <bits/stdc++.h>
using namespace std;

int n, s, m, day;

int chat(int l, int r)
{
	int res = -1;
	while (l <= r)
	{
		day = (l + r) / 2;
		if((day - day / 7) * n >= s*m)
		{
			res = day;
			r = day - 1;
		}
		else l = day + 1;
	}
	if(res != -1) res -= res / 7;
	return res;
}
void xl ()
{
	cin >> n >> s >> m;
	cout << chat(0, s);
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
