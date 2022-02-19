#include<bits/stdc++.h>
using namespace std;
void process()
{
    int n, m;
    cin >> n >> m;
    int sum1 = 0, sum2 = 0;
	int a[n], b[m];
    for(int i = 0; i < n; i++)
	{
        cin >> a[i];
        sum1 += a[i];
    }
    for(int i = 0; i < m; i++)
	{
        cin >> b[i];
        sum2 += b[i];
    }
    int len = min(n, m);
    int tmp1 = 0, tmp2 = 0, res = 0;
    for(int i = 0; i < len; i++)
	{
        tmp1 += a[i];
        tmp2 += b[i];
        res = max(res, max(tmp1 + sum2 - tmp2, tmp2 + sum1 - tmp1));
    }
    cout << res << endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--) process();
    return 0;
}