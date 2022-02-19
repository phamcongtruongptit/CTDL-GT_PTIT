#include<bits/stdc++.h>
using namespace std;
map<pair<int, int>, bool> dd;
vector< vector<int> > a;
int n, m, res;
const pair<int, int> b[4] = {make_pair(-1, 0), make_pair(0, -1), make_pair(1, 0), make_pair(0, 1)};
struct cmp
{
    bool operator() (pair<pair<int, int>, int> a, pair<pair<int, int>, int> b)
    {
        return a.second > b.second;
    }
};
void loang(int x, int y)
{
    priority_queue<pair<pair<int, int>, int >, vector<pair<pair<int, int>, int > >, cmp > q;
    q.push(make_pair(make_pair(x,y), a[0][0]));
    while (!q.empty())
    {
        pair<int, int> u = q.top().first;
        int w = q.top().second;
        dd[u] = 1;
        q.pop();
        if (u.first == n - 1 && u.second == m - 1) 
        {
            cout << w << endl;
            return;
        }
        for(int i = 0; i < 4; i++)
        {
            pair<int, int> v = u;
            v.first += b[i].first;
            v.second += b[i].second;
            if (v.first >= 0 && v.second >= 0 && v.first < n && v.second < m && dd[v] == 0) 
                q.push(make_pair(v, w + a[v.first][v.second]));
        }
    }
}
void Reset()
{
    res = 1e9;
    dd.clear();
    a.clear();
    a.resize(n, vector<int> (m));
}
void solve()
{
    cin >> n >> m;
    Reset();
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++) cin >> a[i][j];
    loang(0, 0);
}
int main()
{
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}