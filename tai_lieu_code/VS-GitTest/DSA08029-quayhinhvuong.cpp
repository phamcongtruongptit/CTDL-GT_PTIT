#include<bits/stdc++.h>
using namespace std;
map< string, bool> dd;
string st, en;
int tr[6] = {0, 4, 1, 3, 5, 2};
int tl[6] = {3, 0, 2, 4, 1, 5};
string change(string a, bool cn)
{
    string res = "";
    if (cn)
    {
        for(int i = 0; i < 6; i++) res += a[tr[i]];
    }
    else
    {
        for(int i = 0; i < 6; i++) res += a[tl[i]];
    }
    return res;
}
void bfs()
{
    queue< pair< string,int >  > q;
    q.push(make_pair(st, 0));
    dd[st] = 1;
    while (!q.empty())
    {
        string u = q.front().first;
        int w = q.front().second;
        q.pop();
        if (u == en) 
        {
            cout << w;
            return;
        }
        string v = change(u, 0);
        if (dd[v] == 0)
        {
            q.push(make_pair(v, w + 1));
            dd[v] = 1;
        }
        v = change(u, 1);
        if (dd[v] == 0)
        {
            q.push(make_pair(v, w + 1));  
            dd[v] = 1;
        }
    }
}
void solve()
{
    en = st = "";
    for(int i = 0; i < 6; i++) cin >> st[i];
    for(int i = 0; i < 6; i++) cin >> en[i];
    bfs();
}
int main()
{
    solve();
}