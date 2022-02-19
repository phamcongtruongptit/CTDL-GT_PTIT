#include<bits/stdc++.h>
using namespace std;
bool subSofs(string s, string subs)
{
    map<char, int> mps, mpsubs;
    for (int i = 0; i < s.length(); i++) mps[s[i]]++;
    for(int i = 0; i < subs.length(); i++) mpsubs[subs[i]]++;
    for(map<char, int>::iterator it = mpsubs.begin(); it != mpsubs.end(); it++)
    {
        if(mps[it -> first] < mpsubs[it -> first]) return false;
    }
    return true;
}
int main()
{
    cin.tie(0); ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--)
    {
        string s, subS;
        cin >> s >> subS;
        int m = 150;
        string ans;
        bool check = false;
        for (int i = 0; i < s.length(); i++)
        {
            string res;
            for (int j = i; j < s.length(); j++)
            {
                res.push_back(s[j]);
                if (subSofs(res, subS) == true && res.length() < m)
                {
                    m = res.size();
                    ans = res;
                    check = true;
                }
            }
        }
        if (check == true) cout << ans;
        else cout << -1;
        cout << endl;
    }
    return 0;
}