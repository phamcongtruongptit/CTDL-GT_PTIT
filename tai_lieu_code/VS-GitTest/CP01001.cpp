#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n, res = 0;
        cin >> n;
        res = (n + 1) * n / 2;
        cout << res << endl;
    }
}