#include<bits/stdc++.h>
#define ll long long
using namespace std;
int a[1005][1005];
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        vector<int> v;
        int n, m, k;
        cin >> n >> m >> k;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++) cin >> a[i][j];
        }
        int d = 0, l = n, s = m;
        int count = 0;
        while(d <= n / 2 && d <= m / 2)
        {
            for(int i = d; i < s; i++) v.push_back(a[d][i]);
            for(int i = d + 1; i < l; i++) v.push_back(a[i][s - 1]);
            for(int i = s - 2; i >= d; i--) v.push_back(a[l - 1][i]);
            for(int i = l - 2; i > d; i--) v.push_back(a[i][d]);
            d++;
            l--;
            s--;
        }
        cout << v[k-1] << endl;
    }
}
