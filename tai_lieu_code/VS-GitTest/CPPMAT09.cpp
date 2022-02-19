#include<bits/stdc++.h>
#include<queue>
using namespace std;
int a[20005][20005] = {0}, vs[20005][20005] = {0};
int n, m, x, y, z, t;
int BFS()
{
    int ans = 0;
    if(!a[x + 1][y + 1]) return -1;
    queue<pair<int, int> > q;
    q.push(pair<int, int>(x + 1, y + 1));
    while(!q.empty())
    {
        int len = 0, s = q.size();
        while(len < s)
        {
            pair<int, int> lc = q.front();
            q.pop();
            int i = lc.first, j = lc.second;
            if(i == z + 1 && j == t + 1) return ans;
            if(a[i + 1][j] && !vs[i + 1][j])
            {
                q.push(pair<int, int>(i + 1, j));
                vs[i + 1][j] = 1;
            }
            if(a[i][j + 1] && !vs[i][j + 1])
            {
                q.push(pair<int, int>(i, j + 1));
                vs[i][j + 1] = 1;
            }
            if(a[i - 1][j] && !vs[i - 1][j])
            {
                q.push(pair<int, int>(i - 1, j));
                vs[i - 1][j] = 1;
            }
            if(a[i][j - 1] && !vs[i][j - 1])
            {
                q.push(pair<int, int>(i, j - 1));
                vs[i][j - 1] = 1;
            }
            len++;
        }
        ans++;
    }
    return -1;
}
int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    int test;
    cin >> test;
    while(test--)
    {
        cin >> n >> m >> x >> y >> z >> t;
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= m; j++)
            {
                cin >> a[i][j];
                vs[i][j] = 0;
            }
        }
        cout << BFS() << endl;
    }
}
