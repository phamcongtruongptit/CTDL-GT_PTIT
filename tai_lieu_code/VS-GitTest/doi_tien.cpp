/*
Có n tờ tiền có giá trị t[1], t[2], …, t[n]. Hãy tìm cách trả ít tờ tiền nhất với số tiền đúng bằng S
(các tờ tiền có giá trị bất kỳ và có thể bằng nhau, mỗi tờ tiền chỉ được dùng một lần).
Input
    Mỗi bộ test gồm 2 số nguyên n và S (n ≤ 30; S  ≤  109).
    Dòng thứ hai chứa n số nguyên t[1], t[2], …, t[n] (t[i] ≤ 109)
Output: 
    Ghi ra trên một dòng số tờ tiền ít nhất phải trả.
    Nếu không thể tìm được kết quả, in ra -1.
*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n, s, a[31], sum, kt, tmp, res;
bool cmp(ll a, ll b)
{
	return a > b;
}
void Try(int k)
{
	for(int i = 1; i >= 0; i--)
	{
		sum += (i * a[k]);
		tmp += i;
		if(sum < s && k < n - 1) Try(k + 1);
		if(kt == 1) return;
		if(sum == s)
		{
			res = tmp;
			kt = 1;
			return;
		}
		tmp -= i;
		sum -= (i * a[k]);
	}
}
void process()
{
	sum = 0, kt = 0, tmp = 0, res = 1e9;
	cin >> n >> s;
	for(int i = 0; i < n; i++) cin >> a[i];
	sort(a, a + n, cmp);
	Try(0);
	if(res == 1e9) cout << -1;
	else cout << res;
}
int main()
{
	process();
	return 0;
}