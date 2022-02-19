#include<bits/stdc++.h>
#define ll long long
using namespace std;
int a[105][105], b[105][105];
class Local
{
    public:
    int x, y;
};
vector<Local> v;
void findLocal(int row, int col, queue<Local> &qt)
{
    for(int i = row - 1; i <= row + 1; i++)
    {
        for(int j = col - 1; j <= col + 1; j++)
        {
            if(a[i][j] && !b[i][j])
            {
                b[i][j] = 1;
                Local lc; lc.x = i; lc.y = j;
                qt.push(lc);
            }
        }
    }
}
int BreadthFirstSearch()
{
    queue<Local> q;
    int count = 0;
    for(int i=0; i<v.size(); i++)
    {
        Local lcl = v[i];
        if(!b[lcl.x][lcl.y])
        {
            b[lcl.x][lcl.y] = 1;
            queue<Local> qt; qt.push(lcl);
            while(!qt.empty())
            {
                Local lt = qt.front(); qt.pop();
                int row = lt.x, col = lt.y;
                findLocal(row, col, qt);
            }
            count++;
        }
    }
    return count;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        v.clear();
        int n, m;
        cin >> n >> m;
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= m; j++)
            {
                cin >> a[i][j];
                b[i][j] = 0;
                if(a[i][j])
                {
                    Local lp;
                    lp.x = i; lp.y = j;
                    v.push_back(lp);
                }
            }
        }
        int ans = BreadthFirstSearch();
        cout << ans << endl;
    }
}