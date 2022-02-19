#include <bits/stdc++.h>
using namespace std;
int n, a[11] = {0};
void out()
{
    for(int i = 0; i < n; i++)
    {
        if(a[i] == 0) cout << "A";
        else cout << "B";
    }
    cout << " ";
}
void in()
{
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        if(a[i] == 0) cout << "A";
        else cout << "B";
    }
    cout << " ";
}
bool check()
{
    for(int i = 0; i < n; i++)
    {
        if(a[i] == 0) return false;
    }
    return true;
}
void sinh()
{
    int vt = -1;
    for(int i = n - 1; i >= 0; i--)
    {
        if(a[i] == 0)
        {
            vt = i;
            break;
        }
    }
    for(int i = 0; i < n; i++)
    {
        if(i == vt) a[i] = 1;
        else if(i > vt) a[i] = 0;
    }
    out();
    if(!check()) sinh();
    else
    {
        for(int i = 0; i < 11; i++) a[i] = 0;
        cout << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        in();
        sinh();
    }
}