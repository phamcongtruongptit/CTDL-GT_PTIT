#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n, res = 0;
    cin >> n;
    vector<int> a(n), inc(n), dec(n);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        inc[i] = a[i];
        dec[i] = a[i];
    }
    for(int i = 0; i < n; i++)
        for(int j = i + 1; j < n; j++)
        {
            if (a[j] > a[i])
                inc[j] = max(inc[j], inc[i] + a[j]);
        }
    for(int i = n - 1; i >= 0; i--)
        for(int j = i - 1; j >= 0; j--)
        {
            if (a[j] > a[i])
                dec[j] = max(dec[j], dec[i] + a[j]);
        }
    for(int i = 0; i < n; i++)
        res = max(res, inc[i] + dec[i] - a[i]);
    cout << res << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--) solve();
}