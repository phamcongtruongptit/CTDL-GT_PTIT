#include <bits/stdc++.h>
using namespace std;
string s;
unsigned long long x, n, tmp;
void xl()
{
	cin >> s >> n;
	x = s.size();
	while (x < n)
	{
		x *= 2;
	}
	while(x > s.size())
	{
		tmp = x/2;
		if(n > tmp)
		{
			n-= tmp;
			n--;
			if(n == 0) n = tmp;
		}
		x /= 2;
	}
	cout << s[n - 1];
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
