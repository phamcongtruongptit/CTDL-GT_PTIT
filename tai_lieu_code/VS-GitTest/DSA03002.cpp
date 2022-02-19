#include <bits/stdc++.h>
using namespace std;

int n;
long long res1, res2 , a, b;
string s;

void xl()
{
	cin >> s;
	a = 0; b = 0;
	for(int i = 0; i < s.size(); i++)
	{
		if (s[i] == '5')
		{
			a = a * 10 + 6;
			b = b * 10 + 5;
		}
		else if (s[i] == '6')
		{
			a = a * 10 + 6;
			b = b * 10 + 5;
		}
		else
		{
			a = a * 10 + int (s[i] - '0');
			b = b * 10 + int (s[i] - '0');
		}
	}
	res1 = a; res2 = b;
	cin >> s;
	a = 0; b = 0;
	for(int i = 0; i < s.size(); i++)
	{
		if (s[i] == '5')
		{
			a = a * 10 + 6;
			b = b * 10 + 5;
		}
		else if (s[i] == '6')
		{
			a = a * 10 + 6;
			b = b * 10 + 5;
		}
		else
		{
			a = a * 10 + int (s[i] - '0');
			b = b * 10 + int (s[i] - '0');
		}
	}
	res1 += a;
	res2 += b;
	cout << res2 << " " << res1;

}

int main()
{
	int t; 
	t = 1;
	while (t -- )
	{
		xl();
	}
}
