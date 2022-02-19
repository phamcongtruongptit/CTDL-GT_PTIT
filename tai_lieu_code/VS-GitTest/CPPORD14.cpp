#include <bits/stdc++.h>
using namespace std;
int n;
struct so
{
    long long s;
    long long ind;
};
bool cmp(so x, so y)
{
    return x.s < y.s;
}
bool cp(so x, so y)
{
    return x.ind < y.ind;
}
so a[1000005];
int process(long long x)
{
    int l = 0, r = n - 1, mid, res = -1;
    while(l <= r)
    {
        mid = (l + r) / 2;
        if(a[mid].s > x)
        {
            res = mid;
            r = mid - 1;
        }
        else if(a[mid].s <= x)
        {
            l = mid + 1;
        }
    }
    return res;
}
void solve()
{
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i].s;
        a[i].ind = i;
    }
    int x;
    sort(a, a + n, cmp);
    for(int i = 0; i < n; i++)
    {
        x = process(a[i].s);
        if(x == -1) a[i].s = -1;
        else a[i].s = a[x].s;
    }
    sort(a, a + n, cp);
    for(int i = 0; i < n; i++)
    {
        if(a[i].s == -1) cout << "_ ";
        else cout << a[i].s << " ";
    }
    cout << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}