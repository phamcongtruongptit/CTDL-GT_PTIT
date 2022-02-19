#include<bits/stdc++.h>
#define ll long long
using namespace std;
int a[1005], dd[1005] = {0};
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
    	int n;
        cin >> n;
    	for(int i = 0; i < n; i++)
        {
    		cin >> a[i];
            dd[i] = 0;
		}
		dd[0] = a[0];
		int ans = dd[0];
    	for(int i = 1; i < n; i++)
        {
    		int res = 0;
    		for(int j = 0; j < i; j++)
            {
    			if(a[j] < a[i]) res = max(res, dd[j]);
			}
			dd[i] = res + a[i];
			ans = max(ans, dd[i]);
		}
		cout << ans << endl;
    }
}