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
    int i, j, vt;
    for(i = 0; i < n - 1; i++)
    {
        vt = i;
        for(j = i + 1; j < n; j++)
        {
            if(a[j] < a[vt]) vt = j;
        }
        swap(a[vt], a[i]);
        cout << "Buoc " << i + 1 << ": ";
        for(int i = 0; i < n; i++) cout << a[i] << " ";
        cout << endl;
    }
}