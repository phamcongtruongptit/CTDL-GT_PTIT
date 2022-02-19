#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, k;
    while(scanf("%lld%lld", &n, &k) != -1)
    {
        int dem = 1;
        int demn[1000] = {0}, demk[1000] = {0};
        for(int i = k + 1; i <= n; i++)
        {
            for(int j = 2; j <= sqrt(i); j++)
            {
                if(i % j == 0)
                {
                    int c = i;
                    int dem = 0;
                    while(c % j == 0)
                    {
                        dem++;
                        c /= j;
                    }
                    demn[j] += dem;
                    if(c != 1) demn[c] += 1;
                }
            }
        }
        for(int i = 2; i <= n - k; i++)
        {
            for(int j = 2; j <= sqrt(i); j++)
            {
                if(i % j == 0)
                {
                    int c = i;
                    int dem = 0;
                    while(c % j == 0)
                    {
                        dem++;
                        c /= j;
                    }
                    demk[j] += dem;
                    if(c != 1) demk[c] += 1;
                }
            }
        }
        for(int i = 0; i < 1000; i++)
        {
            if(demn[i] != 0)
            {
                cout << i << " " << demn[i] << " " << demk[i] << endl;
                demn[i] -= demk[i];
                dem *= (demn[i] + 1);
                cout << dem << endl;
            }
        }
        cout << dem << endl;
    }
}