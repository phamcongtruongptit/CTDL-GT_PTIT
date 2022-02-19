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
		string s;
		cin >> s;
		int res = 0, k = 0;
		for(int i = s.size() - 1; i >= 0; i--)
		{
			if(s[i] == '1')
			{
				if(k % 4 == 0) res += 1;
				else if(k % 4 == 1) res += 2;
				else if(k % 4 == 2) res += 4;
				else if(k % 4 == 3) res += 3;
			}
			k++;
		}
		if(res % 5 == 0) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
}