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
    for(int i = 0; i <= n - 1; ++i)
    {
        int p = 0;
        for(int j = 0; j < n - 1; j++) if(a[j + 1] < a[j]) swap(a[j + 1], a[j]);
        cout << "Buoc " << i + 1 << ": ";
        for(int l = 0; l < n; l++) cout << a[l] << " ";
        cout << endl;
        for(int i = 0; i < n - 1; i++) if(a[i] <= a[i + 1]) p++;
        if(p == n - 1) break;
    }
}