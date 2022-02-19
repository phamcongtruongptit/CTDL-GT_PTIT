#include<bits/stdc++.h>
using namespace std;
vector<int> a;
void pre()
{
    priority_queue<int, vector<int> , greater<int> > q;
    set<int> s;
    q.push(1);
    while (a.size() <1e4)
    {
        int u = q.top();
        q.pop();
        a.push_back(u);
        if (s.count(u * 2) == 0) 
        {
            q.push(u * 2);
            s.insert(u * 2);
        }
        if (s.count(u * 3) == 0) 
        {
            q.push(u * 3);
            s.insert(u * 3);
        }
        if (s.count(u * 5) == 0) 
        {
            q.push(u * 5);
            s.insert(u * 5);
        }
    }
}
void solve()
{
    int n;
    cin >> n;
    cout << a[n - 1] << endl;
}   
int main()
{
    pre();
    int t;
    cin >> t;
    while (t--) solve();
}