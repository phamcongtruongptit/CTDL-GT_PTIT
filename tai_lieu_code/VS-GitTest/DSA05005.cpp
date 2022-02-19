#include<bits/stdc++.h>
using namespace std;
int a[1005];
int main()
{
    int t;
    cin >> t;
    int n, res;
    int dem = 0;
    while(t--)
    {
        cin >> n;
        for(int i = 0; i < n; i++) cin >> a[i];
        res = 0;
        int f[1005] = {0};
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < i; j++) if(a[j] <= a[i]) f[i] = max(f[i], f[j]);
            f[i]++;
            res = max(res, f[i]);
        }
        cout << n - res << endl;
    }
}
