#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long res = 0;
    string s;
    cin >> s;
    int n = s.length();
    vector<long long> f(n + 5, 0);
    for(int i = 0; i < n; i++)
    {
        int c = s[i] - '0';
        for(int j = i + 1; j >= 1; j--)
        {
            f[j] = f[j - 1] * 10 + c;
            res += f[j];
        }
    }
    cout << res << endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}