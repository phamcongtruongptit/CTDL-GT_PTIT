#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, k;
    cin >> t;
    string s;
    bool res;
    while(t--)
    {
        cin >> s;
        if(s[0] == '0')
        {
            cout << "0\n";
            continue;
        }
        int f[1000] = {0};
        f[0] = f[1] = 1;
        for(int i = 2; i <= s.size(); i++)
        {
            if(s[i - 1] > '0') f[i] = f[i - 1];
            if(s[i - 2] == '1' || (s[i - 2] == '2' && s[i - 1] < '7')) f[i] += f[i - 2];
        }
        cout << f[s.size()] << endl;
    }
}
