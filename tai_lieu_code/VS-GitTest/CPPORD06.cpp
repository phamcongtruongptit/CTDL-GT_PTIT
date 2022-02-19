#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int res = 0;
        for(int i = 0; i < n; i++)
        {
            for(int j = n - 1; j >= i + 1; j--)
            {
                if(a[i] <= a[j])
                {
                    int k = fabs(i - j);
                    if(k > res) res = k;
                    break;
                }
            }
        }
        cout << res << endl;
    }
}