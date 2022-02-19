#include<bits/stdc++.h>
using namespace std;
vector<long long> f;
void pre()
{
    long long lim = 1, tmp;
    f.push_back(1);
    do
    {
        tmp = lim * lim * lim;
        f.push_back(tmp);
        lim++;
    } while (tmp <= 1e6);
}
bool change(long long a, long long b)
{
    while (b > 0)
    {
        int tmp = b % 10, tam;
        if (a == 0) return 0;
        do
        {
            tam = a % 10;
            a /= 10;
        }  while (a > 0 && tam != tmp);
        if (tam == tmp) b /= 10;
    }
    if (b > 0) return 0;
    return 1;
}
void solve()
{
    long long n, luu = -1;
    cin >> n;
    for(int i = f.size() - 1; i >= 0; i--)
    {
        if (f[i] == n) 
        {
            luu = f[i];
            break;
        }
        if (f[i] < n) 
        {
            bool tmp = change(n, f[i]);
            if (tmp) 
            {
                luu = f[i];
                break;
            }
        }
    }
    cout<<luu<<endl;
}
int main()
{
    pre();
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}