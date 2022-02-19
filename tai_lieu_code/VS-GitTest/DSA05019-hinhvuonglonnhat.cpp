#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll oo = 1e9 + 7;
int a[1000][1000];
int m, n;
int main()
{
	int t, m, n, ans;
	cin >> t;
	while(t--)
	{
		ans = 0;
		cin >> m >> n;
		for(int i = 1; i < m + 1; i++)
		{
			for(int j = 1; j < n + 1; j++) 
			{
				cin >> a[i][j];
				if(a[i][j]) a[i][j] = a[i - 1][j] + 1;
			}
			stack <ll> k;
			int left[1005];
			int right[1005];
			for(ll j = 1; j <= n; j++)
	        {
	            while(!k.empty() && a[i][j] <= a[i][k.top()]) k.pop();
	            left[j] = k.empty() ? 0 : k.top();
	            k.push(j);
	        }
	        while (!k.empty()) k.pop();
	        for(ll j = n; j > 0; j--)
	        {
	            while(!k.empty() && a[i][j] <= a[i][k.top()]) k.pop();
	            right[j] = k.empty()? n+1: k.top();
	            k.push(j);
	        }
	        for(ll j = 1; j <= n; j++) ans = max(ans, min(a[i][j], right[j] - left[j] - 1));
		}
		cout << ans << "\n";
	}
	return 0;
}
