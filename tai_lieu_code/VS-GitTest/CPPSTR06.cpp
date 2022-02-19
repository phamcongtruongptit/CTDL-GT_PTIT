#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        int f[26] = {};
        for(int i = 0, j = 0; i < s1.size(), j < s2.size(); i++, j++)
        {
            if(s1[i] == '6') s1[i] = '5';
            if(s2[j] == '6') s2[j] = '5';
        }
        long long sum1 = 0, sum2 = 0;
        for(int i = 0, j = 0; i < s1.size(), j < s2.size(); i++, j++)
        {
            sum1 = sum1 * 10 + s1[i] - '0';
            sum2 = sum2 * 10 + s2[j] - '0';
        }
        cout << sum1 + sum2 << ' ';
        for(int i = 0, j = 0; i < s1.size(), j < s2.size(); i++, j++)
        {
            if(s1[i] == '5') s1[i] = '6';
            if(s2[j] == '5') s2[j] = '6';
        }
        sum1 = 0, sum2 = 0;
        for(int i = 0, j = 0; i < s1.size(), j < s2.size(); i++, j++)
        {
            sum1 = sum1 * 10 + s1[i] - '0';
            sum2 = sum2 * 10 + s2[j] - '0';
        }
        cout << sum1 + sum2 << ' ' << endl;
    }
    return 0;
}