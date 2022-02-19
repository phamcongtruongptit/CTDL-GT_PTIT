#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, a[12], dd = 11, tmp;
    a[0] = 1;
    for(int i = 1; i < 12; i++) a[i] = a[i - 1] * 26;
    cin >> n;
    string res = "";
    while(a[dd] > n) dd -= 1;
    for(int i = dd; i >= 0; i--)
    {
        tmp = n / a[i];
    	n -= tmp * a[i];
        res += (char)('A' + i + 1);
    }
    cout << res << endl;
}
