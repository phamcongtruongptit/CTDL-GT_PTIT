#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int k;
        cin >> k;
        int cnt[1000];
        int count = 0;
        int res = 0;
        for(int i = 0; i < s.size(); i++)
        {
            memset(cnt, 0, sizeof(cnt));
            count = 0;
            for(int j = i; j < s.size(); j++)
            {
                if(cnt[s[j] - 'a'] == 0)
                {
                    count++;
                }
                cnt[s[j] - 'a']++;
                if(count == k) res++;
                else if(count > k) break;
            }
        }
        cout << res << endl;
    }
}