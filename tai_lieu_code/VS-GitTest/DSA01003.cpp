#include <bits/stdc++.h>
using namespace std;
int n, a[1005];
void in()
{
    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];
}
void nextGen()
{
    int dd = -1;
    for(int i = n - 2; i >= 0; i--)
    {
        if(a[i] < a[i + 1])
        {
            dd = i;
            break;
        }
    }
    if(dd == -1)
    {
        for(int i = 1; i <= n; i++) cout << i << " ";
    }
    else
    {
        int min = 10000, vt;
        for(int i = dd + 1; i < n; i++)
        {
            if(a[i] < min)
            {
                min = a[i];
                vt = i;
            }
        }
        swap(a[dd], a[vt]);
        sort(a + dd + 1, a + n);
        for(int i = 0; i < n; i++) cout << a[i] << " ";
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        in();
        nextGen();
        cout << endl;
    }
}