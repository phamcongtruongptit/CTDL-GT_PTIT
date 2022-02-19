#include<bits/stdc++.h>
using namespace std;
int n, vt;
vector<int> in, pre, tree, pos;

void Find_post(int l, int r, int Note)
{
    if (l > r) return;
    vt++;
    tree[Note] = pre[vt];
    int mid = pos[pre[vt]];
    Find_post(l, mid - 1, 2 * Note);
    Find_post(mid + 1, r, 2 * Note + 1);
} 
void Print(int Note)
{
    if (tree[Note] == 0) return;
    Print(2 * Note);
    Print(2 * Note + 1);
    cout << tree[Note] << ' ';
}
void Reset()
{
    in.clear();
    pre.clear();
    tree.clear();
    pos.clear();
    pos.resize(1e4 + 1, -1);
    tree.resize(4 * n);
    in.resize(n + 1);
    pre.resize(n + 1);
    vt = 0;
}
void solve()
{
    cin>>n;
    Reset();
    for(int i = 1; i <= n; i++)
    {
        int so;
        cin >> so;
        pos[so] = i;
    }
    for(int i = 1; i <= n; i++) cin >> pre[i];
    Find_post(1, n, 1);
    Print(1);
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}