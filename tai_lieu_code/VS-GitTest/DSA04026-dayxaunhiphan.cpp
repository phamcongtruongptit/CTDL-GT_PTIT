#include<bits/stdc++.h>
using namespace std;
vector<long long> f;
void pre()
{
    f.resize(93);
    f[1] = 1;
    f[2] = 1;
    for(int i = 3; i < 93; i++) f[i] = f[i - 2] + f[i - 1];
}
char tim(int n, long long vt)
{
    if (n == 1) return '0';
    if (n == 2) return '1';
    if (vt <= f[n - 2]) return tim(n - 2, vt);
    else return tim(n - 1, vt - f[n - 2]);
}
int main()
{
    int t;
    pre();
    cin >> t;
    while(t--)
    {
        int n;
        long long i;
        cin >> n >> i;
        cout << tim(n, i) << endl;
    }
	return 0;
}