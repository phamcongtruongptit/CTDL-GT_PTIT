#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--)
	{
		int dd[100] = {0};
		string s;
		cin >> s;
		int k;
		cin >> k;
		if(s.size() < 26) cout << 0 << endl;
		else
		{
			for(int i = 0; i < s.size(); i++)
			{
				int k = (int)(s[i] - '0');
				dd[k] = 1;
			}
			int dem = 0;
			for(int i = 0; i < 100; i++)
			{
				if(dd[i] == 1)
				{
					dem++;
					dd[i] = 0;
				}
			}
			if(26 - dem > k) cout << 0 << endl;
			else cout << 1 << endl;
		}
	}
}