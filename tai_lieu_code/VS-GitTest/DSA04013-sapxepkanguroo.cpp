#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int &i :a) cin >> i;
    sort(a.begin(), a.end());
    int x = n / 2 - 1, y = n - 1;
    int dem = n;
    while (x >= 0 && y >= n / 2)
    {
        if (a[y] >= a[x] * 2) 
        {
            dem--;
            x--; y--;
        }
        else x--;
    }
    cout << dem << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--) solve();
}