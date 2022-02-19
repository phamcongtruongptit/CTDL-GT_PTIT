#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n, r, b, g, a[100], len, sum = 0;
ll fact, ans = 0;
ll factorial(int k)
{
    ll res = 1;
    for(int i = 1; i <= k; i++) res *= i;
    return res;
}
void out(int p)
{
    ll tmp = fact;
    for(int i = 0; i <= p; i++) tmp /= factorial(a[i]);
    ans += tmp;
}
void backTrack(int p)
{
    for(int i = 0; i <= len; i++)
    {
        int tmp = sum, sml = a[p];
        a[p] += i; sum += i;
        if(p == 2 && sum == len) out(p);
        else if(p < 2 && sum <= len) backTrack(p + 1);
        sum = tmp; a[p] = sml;
    }
}
int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--)
    {
        ans = 0;
        cin >> n >> r >> b >> g;
        len = n - r - b - g;
        fact = factorial(n);
        a[0] = r; a[1] = b, a[2] = g;
        backTrack(0);
        cout << ans << endl;
    }
}