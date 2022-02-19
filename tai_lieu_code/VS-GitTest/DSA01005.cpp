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
        int a[n + 1];
        for(int i = 1; i <= n; i++)
        {
            a[i] = i;
            cout << a[i];
        }
        cout << " ";
        while(1)
        {
            int k = -1;
            for(int i = n - 1; i >= 1; i--)
            {
                if(a[i] < a[i + 1])
                {
                    k = i;
                    break;
                }
            }
            if(k != -1)
            {
                int min = 10000, vt;
                for(int i = k + 1; i <= n; i++)
                {
                    if(a[i] < min && a[i] > a[k])
                    {
                        min = a[i];
                        vt = i;
                    }
                }
                swap(a[k], a[vt]);
                sort(a + (k + 1), a + (n + 1));
                for(int i = 1; i <= n; i++) cout << a[i];
                cout << " ";
            }
            else
            {
                cout << endl;
                break;
            }
        }
    }
}