#include<bits/stdc++.h>
using namespace std;
struct vat
{
    int kl, gt;
};
vector<vat> x;
vector<vector<int> > f;
string res;
void trace(int n, int v)
{
    if (n == 0) return;
    if (f[n][v] == f[n - 1][v]) trace(n - 1, v);
    else 
    {
        trace(n - 1, v - x[n].kl);
        res[n - 1] = '1';
    }
}
void solve()
{
    int v, n;
    cin >> n >> v;
    f.resize((n + 1), vector<int> (v + 1, 0));
    x.resize(n + 1);
    for(int i = 1; i <= n; i++)
    {
        res = res + "0";
        cin >> x[i].gt;
    }
    for(int i = 1; i <= n; i++) cin >> x[i].kl;
    for(int i = 0; i <= n; i++) f[i][0] = 0;
    for(int i = 0; i <= v; i++) f[0][i] = 0;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= v; j++)
        {
            if (j < x[i].kl) f[i][j] = f[i - 1][j];
            else f[i][j] = max(f[i - 1][j], f[i - 1][j - x[i].kl] + x[i].gt);
        }
    cout << f[n][v] << endl;
    trace(n, v);
    for(char c: res) cout << c <<' ';
}
int main()
{
    solve();
    return 0;
}