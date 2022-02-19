#include <bits/stdc++.h>
int dd[1000006];
void snt()
{
    for(int i = 2; i < 1000006; i++) dd[i] = 1;
    for(int i = 2; i < 1000006; i++)
    {
        if(dd[i] == 0) continue;
        for(int j = 2 * i; j < 1000006; j += i) dd[j] = 0;
    }
}
int main()
{
    snt();
    std :: vector<long long> a;
    for(long long i = 2; i < 1000006; i++)
    {
        if(dd[i] == 1)
        {
            long long k = i * i;
            a.push_back(k);
        }
    }
    int t;
    std :: cin >> t;
    while(t--)
    {
        long long l, r;
        std :: cin >> l >> r;
        int dem = 0;
        for(int i = 0; i < a.size(); i++)
        {
            if(a[i] >= l && a[i] <= r) dem++;
            else if(a[i] > r) break;
        }
        std :: cout << dem << std :: endl;
    }
}