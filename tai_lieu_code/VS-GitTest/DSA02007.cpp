#include<bits/stdc++.h>
using namespace std;
int main()
{
 	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t, k, dd;
	cin >> t;
	string s;
	char maxx;
	while(t--)
	{
		cin >> k >> s;
		for(int i = 0; i < s.size(); i++)
		{
			if(k == 0) break;
			maxx = s[i];
			dd = i;
			for(int j = s.size() - 1; j > i; j--)
			{
				if(s[j] > maxx)
				{
					maxx = s[j];
					dd = j;
				}
			}
			if(dd != i)
			{
				k--;
				swap(s[i], s[dd]);
			}
		}
		cout << s << endl;
	}
}
