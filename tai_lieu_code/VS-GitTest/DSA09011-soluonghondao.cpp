#include<bits/stdc++.h>
#define mp make_pair
using namespace std;
pair<int,int> b[8] = {mp(-1, -1), mp(-1, 0), mp(-1, 1), mp(0, -1), mp(0, 1), mp(1, -1), mp(1, 0), mp(1, 1)};
vector<vector<int> > a, dd;
int n,m;
void loang(int ii, int jj, int d)
{
    queue<pair<int, int> > q;
    q.push(mp(ii, jj));
    while (!q.empty())
    {
        int u = q.front().first, v = q.front().second;
        q.pop();
        for(int i = 0; i < 8; i++)
        {
            int uu = u + b[i].first, vv = v + b[i].second;
            if (uu >= 0 && uu < n && vv >= 0 && vv < m && dd[uu][vv] == 0 && a[uu][vv] == 1)
            {
                dd[uu][vv] = d;
                q.push(mp(uu, vv));
            }
        }
    }
}
void Reset()
{
    dd.clear();
    a.clear();
    dd.resize(n, vector<int> (m));
    a.resize(n, vector<int> (m));
}
void solve()
{
    cin >> n >> m;
    Reset();
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++) cin >> a[i][j];
    int d = 0;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            if (a[i][j] == 1 && dd[i][j] == 0)
            {
                d++;
                dd[i][j] = d;
                loang(i, j, d);
            }
    cout << d << endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}