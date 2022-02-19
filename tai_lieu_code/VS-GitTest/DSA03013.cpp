#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, res = 0;
        cin >> n;
        int dd[10005] = {0};
        string s;
        cin >> s;
        for(int i = 0; i < s.size(); i++) dd[s[i]]++;
        for(int i = 0; i < 300; i++)
        {
            res = max(res, dd[i]);
            dd[i] = 0;
        }
        int k = s.size() - (n - 1) * (res - 1);
        if(res <= k) cout << "1";
        else cout << "-1";
        cout << endl;
    }
}