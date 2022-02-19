#include <bits/stdc++.h>
using namespace std;
int dd[1000006];
void snt()
{
    for(int i = 0; i < 1000006; i++) dd[i] = 1;
    dd[0] = dd[1] = 0;
    for(int i = 2; i < 1000006; i++)
    {
        if(dd[i] == 0) continue;
        for(int j = 2 * i; j < 1000006; j += i) dd[j] = 0;
    }
}
int main()
{
    int t;
    cin >> t;
    snt();
    while(t--)
    {
        int n;
        cin >> n;
        int kt = 0;
        for(int i = 2; i <=  n; i++)
        {
            if(dd[i] == 1 && dd[n - i] == 1)
            {
                kt = 1;
                cout << i << " " << n - i << endl;
                break;
            }
        }
        if(kt == 0) cout << -1 << endl;
    }
}