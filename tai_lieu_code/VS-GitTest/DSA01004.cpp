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
        int a[k + 1];
        for(int i = 1; i <= k; i++)
        {  
            a[i] = i;
            cout << a[i];
        }
        cout << " ";
        while(1)
        {
            int dd = -1;
            for(int i = k; i >= 1; i--)
            {
                if(a[i] != n - k + i)
                {
                    dd = i;
                    break;
                }
            }
            if(dd != -1)
            {
                a[dd] += 1;
                for(int i = dd + 1; i <= k; i++) a[i] = a[i - 1] + 1;
                for(int i = 1; i <= k; i++) cout << a[i];
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