#include<bits/stdc++.h>
using namespace std;
vector<int> a;
int n, k, res;
void Try(int vt, int sl)
{
	if (sl == k) res++;
	for(int i = vt + 1; i < n; i++)
		if (a[i] > a[vt])
		{
			Try(i, sl + 1);
		}
}
void init()
{
	a.clear();
	a.resize(n);
	res = 0;
}
int main()
{
	cin >> n >> k;
	init();
	for(int i = 0; i < n; i++) cin >> a[i];
	Try(-1, 0);
	cout << res << endl;
}