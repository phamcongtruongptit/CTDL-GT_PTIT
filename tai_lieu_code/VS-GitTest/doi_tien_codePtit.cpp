#include <bits/stdc++.h>
using namespace std;
int a[10] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, res = 0;
        cin >> n;
        for(int i = 9; i >= 0; i--)
        {
            if(n >= a[i])
            {
                int b = n / a[i];
                n -= (a[i] * b);
                res += b;
            }
        }
        cout << res << endl;
    }
}