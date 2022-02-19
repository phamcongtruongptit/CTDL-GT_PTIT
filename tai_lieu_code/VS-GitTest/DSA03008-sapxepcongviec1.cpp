#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.second < b.second;
}
void solve()
{
    int n, res = 1;
    cin >> n;
    pair<int, int> a[n] = {};
    for(int i = 0; i < n; i++) cin >> a[i].first;
    for(int i = 0; i < n; i++) cin >> a[i].second;
    sort(a, a + n, cmp);
    int kt = a[0].second;
    for(int i = 1; i < n; i++)
    {
        if (a[i].first >= kt)
        {
            kt = a[i].second;
            res++;
        }
    }
    cout << res << endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}