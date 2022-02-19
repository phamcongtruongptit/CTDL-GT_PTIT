#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int oo = 1e7+5;
int a[oo];
int main()
{
	cin.tie(0);
    ios_base::sync_with_stdio(false);
	int t;
    cin >> t;
	while(t--)
    {
		int n, k;
        cin >> n >> k;
		for(int i = 0; i < n; i++) cin >> a[i];
		int res = 0;
		for(int i = 0; i < k; i++) res = max(res, a[i]);
		cout << res << " ";
		for(int i = 1; i <= n - k; i++)
        {
			if(a[i - 1] == res)
            {
				res = 0;
				for(int j = i; j <= i + k; j++) res = max(res, a[j]);
			}
			else if(a[k + i - 1] > res) res = a[k + i - 1];
			cout << res << " ";
		}
		cout << endl;
	}
}