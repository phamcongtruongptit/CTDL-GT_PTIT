#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int, int> a, pair<int, int> b)
{
    return (a.first < b.first) || (a.first == b.first && a.second < b.second);
}
void solve()
{
    int n;
    cin >> n;
    vector<pair<int, int> > a(n);
    vector<int> z(n);
    for(int i = 0; i < n; i++) 
    {
        cin >> a[i].first >> a[i].second;
    }
    sort(a.begin(), a.end(), cmp);
    for(int i = 0; i < n; i++)
    {
        z[i] = 1;
        for(int j = 0; j < i; j++)
            if (a[i].first > a[j].second) z[i] = max(z[i], z[j] + 1);
    }
    int res = 0;
    for(int i = 0; i < n; i++)
        res = max(res, z[i]);
    cout << res << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--) solve();
}