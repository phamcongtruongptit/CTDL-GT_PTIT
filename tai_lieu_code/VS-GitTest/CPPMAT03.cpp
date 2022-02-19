#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        a[n + 5][m + 5];
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++) cin >> a[i][j];
        }
        int d = 0, row = n, col = m;
        int count = 0;
        while(d <= n / 2 && d <= m / 2)
        {
            for(int i = d; i < col && count++ < n * m ; i++) cout << a[d][i] << " ";
            for(int i = d + 1; i < row && count++ < n * m; i++) cout << a[i][col - 1] << " ";
            for(int i=col-2; i>=d && count++ < n * m; i--) cout << a[row - 1][i] << " ";
            for(int i = row - 2; i > d && count++ < n * m; i--) cout << a[i][d] << " ";
            d++; row--; col--;
        }
        cout << endl;
    }
}
