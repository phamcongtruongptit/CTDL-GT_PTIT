#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int mod = 1e9+7;
int a[1005][1005], b[1005][1005] = {0}, n, m;
vector<pair<int, int> > v;
void haveRoad(int row, int col, queue<pair<int, int> > &q)
{
    if(a[row - 1][col] && !b[row - 1][col]) q.push(pair<int, int>(row - 1, col));
    if(a[row][col - 1] && !b[row][col - 1]) q.push(pair<int, int>(row, col - 1));
    if(a[row + 1][col] && !b[row + 1][col]) q.push(pair<int, int>(row + 1, col));
    if(a[row][col + 1] && !b[row][col + 1]) q.push(pair<int, int>(row, col + 1));
}
void BFS(){
    for(int i = 0; i < v.size(); i++)
    {
        if(!b[v[i].first][v[i].second])
        {
            queue<pair<int, int> > q;
            if(!b[v[i].first][v[i].second]) q.push(v[i]);
            while(!q.empty())
            {
                pair<int, int> par = q.front(); q.pop();
                b[par.first][par.second] = 1;
                haveRoad(par.first, par.second, q);
            }
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        v.clear();
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= m; j++)
            {
                b[i][j] = 0;
                char c;
                cin >> c;
                if(c == 'O')
                {
                    a[i][j] = 1;
                    if(i == 1 || j == 1 || i == n || j == m)
                    {
                        pair<int, int> p = pair<int, int>(i, j);
                        v.push_back(p);
                    }
                }
                else a[i][j] = 0;
            }
        }
        BFS();
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= m; j++)
            {
                if(b[i][j]) cout << 'O' << " ";
                else cout << 'X' << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
}
