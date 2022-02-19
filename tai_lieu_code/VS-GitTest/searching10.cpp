#include <bits/stdc++.h>
using namespace std;
int dd[1000006];
vector<int> a;
void snt()
{
    for(int i = 0; i < 1000006; i++) dd[i] = 1;
    dd[0] = dd[1] = 0;
    for(int i = 2; i < 1000006; i++)
    {
        if(dd[i] == 0) continue;
        for(int j = 2 * i; j < 1000006; j += i) dd[j] = 0;
    }
    for(int i = 0; i < 1000006; i++) if(dd[i] == 1) a.push_back(i);
}
int main()
{
    snt();
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int kt = 0;
        for(int i = 0; i < a.size(); i++)
        {
            for(int j = 0; j < a.size(); j++)
            {
                if(a[i] + a[j] == n)
                {
                    kt = 1;
                    cout << a[i] << " " << a[j] << endl;
                    break;
                }
            }
            if(kt == 1) break;
        }
    }
}