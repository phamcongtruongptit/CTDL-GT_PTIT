#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n, m;
    cin >> n >> m;
    vector< vector<int> > a(n, vector<int> (m));
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++) cin >> a[i][j];
    for(int j = 1; j < m; j++) a[0][j] += a[0][j - 1]; 
    for(int i = 1; i < n; i++)
        for(int j = 0; j < m; j++)
        {
            int tmp = a[i - 1][j];
            if (j - 1 >= 0) tmp = min(tmp, (min(a[i - 1][j - 1], a[i][j - 1])));
            a[i][j] += tmp;
        }
    cout << a[n - 1][m - 1] << endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}