#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    string s;
    priority_queue <ll> q;
    ll res, ans, x, dem, k;
    while(t--)
    {
        int f[1000] = {0};
        cin >> k; >> s;
        for(int i = 0; i < s.size(); i++) f[s[i]]++;
        for(int i ='A';i <='Z'; i++) if(f[i]) q.push(f[i]);
        dem = 0;
        x = q.top();
        if(k == 0)
        {
            dem = 1;
            q.pop();
        }
        while ((x - q.top()) * dem <= k && k && !q.empty())
        {
            k = k - (x - q.top()) * dem;
            dem++;
            x = q.top();
            q.pop();
        }
        res = 0;
        if(k >= dem)
        {
            ans = k / dem;
            k %= dem;
            x -= ans;
        }
        res = x * x * (dem - k);
        x -= 1;
        res += x * x * k;
        while(!q.empty())
        {
            res += q.top() * q.top();
            q.pop();
        }
        cout << res << "\n";
    }
}
