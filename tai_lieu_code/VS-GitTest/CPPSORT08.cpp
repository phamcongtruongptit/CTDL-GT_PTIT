#include <bits/stdc++.h>
using namespace std;
int a[100005], b[100005], c[105] = {0};
int main()
{
	int t;
    cin >> t;
	while(t--)
    {
		int n, m;
        cin >> n >> m;
		c[0] = 0;
		c[1] = 0;
		c[2] = 0;
		for(int i = 0; i < n; i++) cin >> a[i];
		for(int i = 0; i < m; i++)
        {
			cin >> b[i];
			if(b[i] == 1 || b[i] == 2 || b[i] == 0) c[b[i]]++;
		}
		sort(b, b + m);
		long long res = 0;
		for(int i = 0; i < n; i++)
        {
			if(a[i] == 0);
			else if(a[i] == 1) res += c[0];
			else if(a[i] == 2)
            {
				res += c[0]; res += c[1];
				int *p = upper_bound(b, b + m, 4);
				res += ((b + m) - p);
			}
			else if(a[i] == 3)
            {
				res += c[0]; res += c[1]; res += c[2];
				int *p = upper_bound(b, b + m, 3);
				res += ((b + m) - p);
			}
			else
            {
				res += c[0]; res += c[1];
				int *p = upper_bound(b, b + m, a[i]);
				res += ((b + m) - p);
			}
		}
		cout << res << endl;
	}
}