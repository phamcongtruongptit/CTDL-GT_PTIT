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
        int a[n];
        for(int i = 0; i < n; i++)
        {
            a[i] = 0;
        }
        while(1)
        {
            for(int i = n - 1; i >= 0; i--)
            {
                if(a[i] == 0)
                {
                    a[i] = 1;
                    for(int j = i + 1; j < n; j++) a[j] = 0;
                    break;
                }
            }
            int dem = 0;
            for(int i = 0; i < n; i++) if(a[i] == 1) dem++;
            if(dem == k && dem == n)
            {
                for(int i = 0; i < n; i++) cout << a[i];
                cout << endl;
                break;
            }
            else if(dem == k)
            {
                for(int i = 0; i < n; i++) cout << a[i];
                cout << endl;
            }
            else if(dem == n) break;
        }
    }
}