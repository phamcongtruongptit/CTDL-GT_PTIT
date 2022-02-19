#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long res = 0;
    while(n > 1)
    {
        long long tmp = 1;
        for(int i = 1; i <= n; i++)
        {
            tmp *= i;
        }
        res += tmp;
        n--;
    }
    cout << res + 1;
}