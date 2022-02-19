#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n + 5];
        priority_queue <int, vector<int>, greater <int> > q;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int k, x, l, r;
        cin >> k >> x;
        l = lower_bound(a, a + n, x) - a;
        r = upper_bound(a, a + n, x) - a;
        while(a[l] == x && l >= 0) l--;
        while(a[r] == x && r < n) r++;
        while(k > 0)
        {
            if(l >= 0)
            {
                q.push(a[l--]);
                k--;
            }
            if(r < n)
            {
                q.push(a[r++]);
                k--;
            }
            if(l < 0 && r >= n) break;
        }
        while(!q.empty())
        {
            cout << q.top() << " ";
            q.pop();
        }
        cout << endl;
    }
}