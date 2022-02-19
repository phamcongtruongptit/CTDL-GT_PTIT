#include <bits/stdc++.h>
using namespace std;
int d[1005][1005];
struct data
{
    int a = 0;
    int c = 0;
};
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, v;
        cin >> n >> v;
        data b[n + 1];
        for(int i = 1; i <= n; i++) cin >> b[i].a;
        for(int i = 1; i <= n; i++) cin >> b[i].c;
        memset(d, 0, sizeof(d));
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= v; j++)
            {
                if(j >= b[i].a) d[i][j] = max(d[i - 1][j], d[i - 1][j - b[i].a] + b[i].c);
                else d[i][j] = d[i - 1][j];
            }
        }
        cout << d[n][v] << endl;
    }
}