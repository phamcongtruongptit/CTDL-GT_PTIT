#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int dem[10] = {0};
        vector<int> demC, demL;
        for(int i = 0; i < s.size(); i++)
        {
            int b = (int)(s[i] - '0');
            dem[b]++;
        }
        for(int i = 9; i >= 0; i--)
        {
            if(dem[i] != 0 && dem[i] % 2 == 0) demC.push_back(i);
            else if(dem[i] != 0 && dem[i] % 2 == 1) demL.push_back(i);
        }
        int k = -1, gt = 0;
        for(int i = 0; i < demL.size(); i++)
        {
            if(gt < dem[demL[i]])
            {
                gt = dem[demL[i]];
                k = demL[i];
            }
        }
        if(demC.empty() && k == 0)
        {
            int gt1 = 0, k1 = -1;
            for(int i = 0; i < demL.size(); i++)
            {
                if(gt1 < dem[demL[i]] && demL[i] != 0)
                {
                    gt1 = dem[demL[i]];
                    k1 = demL[i];
                }
            }
            for(int i = 0; i < gt1; i++) cout << k1;
        }
        else if(demC.empty() && k != 0)
        {
            for(int i = 0; i < gt; i++) cout << k;
        }
        else
        {
            if(demC[0] == 0) demC.pop_back();
            for(int i = 0; i < demC.size(); i++)
            {
                for(int j = 0; j < dem[demC[i]] / 2; j++)
                {
                    cout << demC[i];
                }
            }
            if(k != -1)
            {
                for(int i = 0; i < gt; i++) cout << k;
            }
            for(int i = demC.size() - 1; i >= 0; i--)
            {
                for(int j = 0; j < dem[demC[i]] / 2; j++) cout << demC[i];
            }
        }
        cout << endl;
    }
}