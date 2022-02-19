#include <bits/stdc++.h>
using namespace std;
const long long oo = 1e9 + 7;
int main()
{
	int t;
	cin >> t;
	long long p, q, tmp;
	while(t--)
	{
		cin >> p >> q;
		while(1)
		{
			if(q % p == 0) 
			{
				cout << "1/" << q / p;
				break;
			}
			else
			{
				tmp = q / p + 1;
				cout << "1/" << tmp << " + ";
				p = p * tmp - q;
				q *= tmp;
			}
		}
		cout<< "\n";
	}
	return 0;
}
