#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
    cin >> t;
    while(t--)
    {
        string str, stmp = "";
        long long f[1005][1005] = {0};
        cin >> str;
        long long tmp = 0;
        stmp = s;
        reverse(stmp.begin(), stmp.end());
        for(int i = 1; i <= s.size(); i++)
        {
            for(int j = 1; j < stmp.size(); j++)
            {
                if(s[i - 1] == tmp[j - 1]) f[i][j] = f[i - 1][j - 1] + 1;
                else f[i][j] = max(f[i - 1][j], max(f[i][j - 1], f[i - 1][j - 1]));
                tmp = max(tmp, f[i][j]);
            }
        }
        cout << s.size() - tmp << endl;
    }
}