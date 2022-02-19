#include <bits/stdc++.h>
using namespace std;
void process()
{
    string s;
    cin >> s;
    int k = s.size(), dd = k, dem = 0;
    for(int i = k - 1; i >= 0; i--)
    {
        if(s[i] == '0')
        {
            dd = i;
            s[i] = '1';
            break;
        }
        else dem++;
    }
    if(dem != k)
    {
        for(int i = 0; i < k; i++)
        {
            if(i <= dd) cout << s[i];
            else cout << '0';
        }
    }
    else for(int i = 0; i < k; i++) cout << '0';
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        process();
    }
}