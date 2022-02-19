#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int k = 1;
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(a[j] < a[i])
            {
                swap(a[j], a[i]);
            }
        }
        cout << "Buoc " << k << ": ";
        k++;
        for(int i = 0; i < n; i++) cout << a[i] << " ";
        cout << endl;
        int p = 0;
        for(int i = 0; i < n - 1; i++)
        {
            if(a[i] < a[i + 1]) p++;
        }
        if(p == n - 1) break;
    }
}