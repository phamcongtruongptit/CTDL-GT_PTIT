#include <bits/stdc++.h>
using namespace std;
void process()
{
    int v, e;
    cin >> v >> e;
    vector<int> ke[1001];
    for(int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        ke[a].push_back(b);
    }
    for(int i = 1; i <= v; i++)
    {
        sort(ke[i].begin(), ke[i].end());
        cout << i << ": ";
        for(int j = 0; j < ke[i].size(); j++) cout << ke[i].at(j) << " ";
        cout << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        process();
    }
}