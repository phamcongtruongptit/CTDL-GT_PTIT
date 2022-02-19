#include<bits/stdc++.h>
using namespace std;
int n, vt;
vector<pair<int, int> > pre;
vector<int> tree, pos;
void Find_post(int l, int r, int Note)
{
    if (l > r) return;
    vt++;
    tree[Note] = pre[vt].first;
    int mid = pre[vt].second;
    Find_post(l, mid - 1, 2 * Note);
    Find_post(mid + 1, r, 2 * Note + 1);
}
void Print(int Note)
{
    if (Note >= 4 * n || tree[Note] == 0) return;
    Print(2 * Note);
    Print(2 * Note + 1);
    cout << tree[Note] << ' ';
}
void Reset()
{
    pre.clear();
    tree.clear();
    pos.clear();
    pos.resize(n + 5);
    pre.resize(n + 5);
    tree.resize(4 * n + 5, 0);
    vt = 0;
}
bool cmp(int a, int b)
{
    return pre[a] < pre[b];
}
void solve()
{
    cin >> n;
    Reset();
    for(int i = 1; i <= n; i++)
    {
        cin >> pre[i].first;
        pos[i] = i;
    }
    sort(pos.begin(), pos.end(), cmp);
    for(int i = 1; i <= n; i++) pre[pos[i]].second = i;
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