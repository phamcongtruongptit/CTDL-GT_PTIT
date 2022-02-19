#include<bits/stdc++.h>
using namespace std;
int a[100005];
int main()
{
	cin.tie(0);
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--)
    {
    	int n;
        cin >> n;
    	for(int i = 0; i < n; i++) cin >> a[i];
		int maxMulti = 0, ans = 0;
		for(int i = 0; i < n; i++)
        {
			int tmp = a[i], count = 0;
			while(a[i] > 1)
            {
				if(a[i] % 2 != 0) ans++;
				a[i] /= 2; count++;
			}
			if(a[i]) ans++;
			maxMulti = max(maxMulti, count);
		}
    	cout << ans + maxMulti << endl;
    }
}