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
    int i, j;
    for(i = 0; i < n; i++)
    {
        j = i;
        while(j > 0 && a[j - 1] > a[j])
        {
            swap(a[j - 1], a[j]);
            j--;
        }
        cout << "Buoc " << i << ": ";
        for(int l = 0; l < i + 1; l++) cout << a[l] << " ";
        cout << endl;
    }
}