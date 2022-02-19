#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n, m;
    cin >> n >> m;
    int a[n][m] = {};
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++) cin >> a[i][j];
    for(int j = 0; j < m; j++)
        for(int i = 1; i < n; i++)
            if(a[i][j] == 1) a[i][j] = a[i - 1][j] + 1;
            else a[i][j] = 0;
    long long res = 0;
    for(int i = 0; i < n; i++)
    {
        stack <int> st;
        int f[m] = {}, g[m] = {};
        st.push(-1);
        for(int j = 0; j < m; j++)
        {
            while (st.size() > 1 && a[i][st.top()] >= a[i][j]) st.pop();
            f[j] = st.top() + 1;
            st.push(j); 
        }
        while (!st.empty()) st.pop();
        st.push(m);
        for(int j = m - 1; j >= 0; j--)
        {
            while (st.size() > 1 && a[i][st.top()] >= a[i][j]) st.pop();
            g[j] = st.top() - 1;
            st.push(j);
        }
        for(int j = 0; j < m; j++) res = max(res, (long long)((g[j] - f[j] + 1) * a[i][j]));
    }
    cout << res << endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}