#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct data
{
    int n,ts;
};
bool cmp(data a, data b)
{
    if(a.ts == b.ts) return a.n < b.n;
    return a.ts > b.ts;
}
void process()
{
    int n;
    cin >> n;
    vector<int> a(n), ts;
    vector<data> res;
    ts.resize(int(1e5), 0);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        ts[a[i]]++;
    }
    for(int i = 0; i < n; i++)
    {
        if(ts[a[i]])
        {
            data tmp;
            tmp.n = a[i];
            tmp.ts = ts[a[i]];
            res.push_back(tmp);
            ts[a[i]] = 0;
        }
    }
    sort(res.begin(), res.end(),cmp);
    for(int i = 0; i < res.size(); i++)
    {
        for(int j = 0; j < res[i].ts; j++) cout << res[i].n << ' ';
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--) process();
    return 0;
}