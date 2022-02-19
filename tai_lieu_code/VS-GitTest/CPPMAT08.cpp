#include<bits/stdc++.h>
#define pb push_back
#define all(a) a.begin(), a.end()
#define faster() cin.tie(0); ios_base::sync_with_stdio(false);
using namespace std;
int a[50][50], n;
void solved()
{
    int SIZE = 4*n*4*n;
    vector<int> ca, cb;
    int cstart = 4*n, rstart = 4*n-2, cend = 4*n-2, rend = 4*n-4;
    int value = 1-4*n;
    while(ca.size() < SIZE/2){
        for(int i = 0; i < cstart; i++)
        {
            value += 4 * n;
            ca.pb(value);
        }
        for(int i = 0; i < rstart; i++)
        {
            value++;
            ca.pb(value);
        }
        for(int i = 0; i < cend; i++)
        {
            value -= 4 * n;
            ca.pb(value);
        }
        for(int i = 0; i < rend; i++)
        {
            value--;
            ca.pb(value);
        }
        rend -= 4; rstart -= 4;
        cend -= 4; cstart -= 4;
    }
    reverse(all(ca));
    for(auto ele: ca) cb.pb(SIZE - ele + 1);
    for(auto ele: cb) cout << ele << " ";
    cout << endl;
    for(auto ele: ca) cout << ele << " ";
}
int main()
{
    faster();
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int res = 0;
        for(int i = 0; i < 4 * n; i++)
        {
            for(int j = 0; j < 4 * n; j++) a[i][j] = ++res;
        }
        solved();
        cout << endl;
    }
}
