#include <bits/stdc++.h>
using namespace std;
int BS(int a[], int key, int l, int r)
{
    while(l <= r)
    {
        int mid = (l + r) / 2;
        if(a[mid] == key) return mid;
        else if(a[mid] > key) r = mid - 1;
        else l = mid + 1;
    }
    return -1;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        int a[x], b[y], c[z];
        for(int i = 0; i < x; i++) cin >> a[i];
        for(int i = 0; i < y; i++) cin >> b[i];
        for(int i = 0; i < z; i++) cin >> c[i];
        int dem = 1, kt = 0;
        for(int i = 0; i < x - 1; i++)
        {
            if(a[i] == a[i + 1] && i != x - 2)
            {
                dem++;
            }
            else if(a[i] != a[i + 1] || i == x - 2)
            {
                if(BS(b, a[i], 0, y - 1) != -1 && BS(c, a[i], 0, z - 1) != -1)
                {
                    cout << a[i] << " ";
                    kt = 1;
                }
                dem = 1;
            }
        }
        if(a[x - 1] != a[x - 2])
        {
            if(find(b, a[x - 1], 0, y - 1) != -1 && find(c, a[x - 1], 0, z - 1) != -1)
            {
                cout << a[x - 1] << " ";
                kt = 1;
            }
        }
        if(kt == 0) cout << -1;
        cout << endl;
    }
}