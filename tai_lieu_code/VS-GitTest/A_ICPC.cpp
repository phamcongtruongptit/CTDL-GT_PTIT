#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    map<long long, long long> a;
    for(int i = 0; i < n; i++)
    {
        long long c;
        cin >> c;
        if(c != 1)
        {
            for(int j = 2; j <= sqrt(c); j++)
            {
                long long dem = 0;
                if(c % j == 0)
                {
                    while(c % j == 0)
                    {
                        dem++;
                        c /= j;
                    }
                    a[j] += dem;
                }
            }
            if(c != 1) a[c] += 1;
        }
    }
    vector<int> res;
    for(int i = 0; i < m; i++)
    {
        map<long long, long long> b = a;
        int dd = 1;
        for(int j = 0; j < n; j++)
        {
            long long c;
            cin >> c;
            if(c != 1)
            {
                for(int k = 2; k <= sqrt(c); k++)
                {
                    long long dem = 0;
                    if(c % k == 0)
                    {
                        while(c % k == 0)
                        {
                            dem++;
                            c /= k;
                        }
                        b[k] -= dem;
                        if(b[k] < 0)
                        {
                            dd = 0;
                            break;
                        }
                    }
                }
                if(c != 1)
                {
                    b[c] -= 1;
                    if(b[c] < 0) dd = 0;
                }
            }
        }
        if(dd == 1) res.push_back(i + 1);
    }
    cout << res.size() << endl;
    for(int i = 0; i < res.size(); i++) cout << res[i] << " ";
}