#include<bits/stdc++.h>
using namespace std;
vector<int> a;
int m;
void pre()
{
    int i = 0;
    while (i <= 100)
    {
        a.push_back(i * i);
        i++;
    }
}
void solve()
{
    int n;
    cin >> n;
    vector< vector<int> > F(m + 1, vector<int> (n + 1));
    for(int i = 1; i <= n; i++) F[1][i] = i;
    for(int i = 2; i <= m; i++)
        for(int j = 1; j <= n; j++)
        {
            F[i][j] = F[i-1][j];
            if (j >= a[i]) F[i][j] = min (F[i][j], F[i][j - a[i]] + 1);
        }
    cout << F[m][n] << endl;
}   
int main()
{
    pre(); 
    m = a.size() - 1;
    int t;
    cin >> t;
    while (t--) solve();
}