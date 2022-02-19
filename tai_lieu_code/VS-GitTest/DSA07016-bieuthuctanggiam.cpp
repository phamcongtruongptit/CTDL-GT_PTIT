#include<bits/stdc++.h>
using namespace std;
vector< vector< vector<int> > > f;
void pre()
{
    f.resize(11);
    for(int i = 1; i < 10; i++)
    {
        vector<int> tmp(0);
        for(int j = 1; j <= i; j++) tmp.push_back(j);
        do
        {
            f[i].push_back(tmp);
        } while (next_permutation(tmp.begin(), tmp.end()));
    }
}
int main()
{
    int t;
    cin >> t;
    pre();
    while(t--)
    {
        string s;
        cin >> s;
        int n = s.length() + 1;
        for(int i = 0; i < f[n].size(); i++)
        {
            bool ok = 1;
            for(int j = 0; j < s.length(); j++)
            {
                if ((s[j] == 'D' && f[n][i][j] < f[n][i][j+1]) || (s[j] == 'I' && f[n][i][j] > f[n][i][j + 1]))
                {
                    ok = 0;
                    break;
                }
            }
            if (ok)
            {
                for(int j = 0; j < n; j++) cout << f[n][i][j];
                cout << endl;
                break;
            }
        }
    }
    return 0;
}