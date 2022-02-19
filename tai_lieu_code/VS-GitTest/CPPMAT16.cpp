#include<bits/stdc++.h>
#define faster() cin.tie(0); ios_base::sync_with_stdio(false);
#define ll long long
using namespace std;
pair<int, int> PAIR[30][30];
int a[30][30], n;
void setPair()
{
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(a[i][j])
            {
                PAIR[i][j].first = PAIR[i][j - 1].first + 1;
                PAIR[i][j].second = PAIR[i - 1][j].second + 1;
            }
            else PAIR[i][j] = pair<int, int>(0, 0);
        }
    }
}
int solved()
{
    faster();
    int ans = 0;
    for(int i = 1; i <= n; i++)
    {
        int MAX = n - i + 1;
        for(int j = 1; j <= n; j++)
        {
            for(int k = j; k <= n; k++)
            {
                if(!a[i][k] || k-j+1 > MAX) break;
                else{
                    int row1 = PAIR[i][k].first - PAIR[i][j].first + 1;
                if(row1 <= ans) continue;
                pair<int, int> p1 = PAIR[i + row1 - 1][j];
                pair<int, int> p2 = PAIR[i + row1 - 1][k];
                int row2 = p2.first - p1.first + 1;
                int col1 = p1.second - PAIR[i][j].second + 1;
                int col2 = p2.second - PAIR[i][k].second + 1;
                if(row1 == row2 && row1 == col1 && row1 == col2) ans = max(ans, row1);
                }
            }
        }
    }
    return ans;
}
int main()
{
    cin.tie(0); ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        for(int i = 0; i <= n; i++)
        {
            for(int j = 0; j <= n; j++)
            {
                PAIR[i][j].first = 0;
                PAIR[i][j].second = 0;
            }
        }
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= n; j++)
            {
                char c;
                cin >> c;
                a[i][j] = (c == 'X') ? 1 : 0;
            }
        }
        setPair();
        cout << solved() << endl;
    }
}
