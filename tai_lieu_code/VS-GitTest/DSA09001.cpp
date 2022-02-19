#include <bits/stdc++.h>
using namespace std;
void process()
{
    int n, e;
    cin >> n >> e;
    int a[n + 1][n + 1] = {0};
    for(int i = 0; i < e; i++)
    {
        int x, y;
        cin >> x >> y;
        a[x][y] = a[y][x] = 1;
        
    }
    for(int i = 1; i <= n; i++)
    {
        cout << i << ": ";
        for(int j = 1; j <= n; j++)
        {
            if(a[i][j] == 1) cout << j << " ";
        }
        cout << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        process();
    }
}