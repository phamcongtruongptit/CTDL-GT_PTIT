#include <bits/stdc++.h>
using namespace std;
int n, k, a[1005];
void input()
{
    cin >> n >> k;
    for(int i = 1; i <= k; i++)
    {
        cin >> a[i];
    }
}
void nextGen()
{
    int dd = 0;
    for(int i = k; i >= 1; i--)
    {
        if(a[i] != n - k + i)
        {
            a[i] += 1;
            dd = i;
            break;
        }
    }
    if(dd == 0)
    {
        for(int i = 1; i <= k; i++) cout << i << " ";
    }
    else for(int i = 1; i <= k; i++)
    {
        if(i <= dd) cout << a[i] << " ";
        else
        {
            a[i] = a[i - 1] + 1;
            cout << a[i] << " ";
        }
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        input();
        nextGen();
    }
}