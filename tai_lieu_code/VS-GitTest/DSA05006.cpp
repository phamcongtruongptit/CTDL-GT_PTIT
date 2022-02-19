#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll f[1005];
ll a[1005];
int main()
{
    int t, n;
    cin >> t;
    ll res;
    while(t--)
    {
        cin >> n;
        n++;
        res = 0;
        for(int i = 1; i < n; i++)
        {
            cin >> a[i];
            f[i] = a[i];
        }
        for(int i = 1; i < n; i++)
        {
            for(int j = 1; j < i; j++) if(a[i] > a[j]) f[i] = max(f[i], f[j] + a[i]);
            res = max(res, f[i]);
        }
        cout << res << "\n";
    }
}
