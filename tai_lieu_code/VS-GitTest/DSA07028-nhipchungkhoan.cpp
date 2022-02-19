#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    stack <int> st;
    vector<int> f(n);
    st.push(-1);
    for(int i = 0; i < n; i++)
    {
        while (st.size() > 1 && a[st.top()] <= a[i]) st.pop();
        f[i] = st.top() + 1;
        st.push(i);
    }
    for(int i = 0; i < n; i++) cout << (i - f[i]) + 1 << ' ';
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}