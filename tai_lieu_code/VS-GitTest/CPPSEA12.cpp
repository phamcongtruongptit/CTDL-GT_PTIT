#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        int dd[100005] = {0}, b[100005], p = 0;
        for(int i = 0; i < n; i++)
        {
            int l;
            cin >> l;
            dd[l] = 1;
            int x = l + k;
            b[p] = x;
            p++;
        }
        int kt = 0;
        for(int i = 0; i < p; i++)
        {
            if(dd[b[i]] == 1)
            {
                kt = 1;
                break;
            }
        }
        if(kt == 1) cout << 1;
        else cout << -1;
        cout << endl;
    }
}