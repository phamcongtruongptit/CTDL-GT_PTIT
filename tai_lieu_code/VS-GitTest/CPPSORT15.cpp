#include <bits/stdc++.h>
using namespace std;
long long n, k, a[1000005];
long long findKey(long long l, long long key)
{
    long long r = n - 1, mid, res = -1;
    while(l <= r)
    {
        mid = (l + r) / 2;
        if(a[mid] >= key) r = mid - 1;
        else if(a[mid] < key)
        {
            res = mid;
            l = mid + 1;
        }
    }
    return res;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        long long kq = 0, key;
        for(int i = 0; i < n; i++)
        {
            key = findKey(i + 1, a[i] + k);
            if(key != -1) kq = kq + key - i;
        }
        cout << kq << endl;
    }
}