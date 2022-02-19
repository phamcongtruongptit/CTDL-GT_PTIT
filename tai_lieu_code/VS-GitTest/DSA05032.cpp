#include <bits/stdc++.h>
using namespace std;
void process()
{
    string s;
    cin >> s;
    int l = s.size();
    int d[l + 1][l + 1] = {0};
    for(int i = 1; i <= s.size() + 1; i++)
    {
        for(int j = 0; j <= s.size() - i + 1; j++)
        {
            int k = j + i - 1;
            if(i == 1)
            {
                d[j][k] = 1;
                continue;
            }
            if(i == 2)
            {
                d[j][k] = 1 + (s[j] == s[k]);
                continue;
            }
            d[j][k] = max(d[j + 1][k], d[j][k - 1]);
            if(s[j] == s[k]) d[j][k] = max(d[j][k], d[j + 1][k - 1] + 2);
        }
    }
    cout << l - d[0][l - 1] << endl;
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