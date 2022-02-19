#include <bits/stdc++.h>
#define ll long long
using namespace std;
int x;
bool test (int k)
{
	int f[6] = {0};
	while(k)
	{
		x = k % 10;
		if (x > 5) return 0;
		f[x]++;
		if (f[x] > 1) return 0;
		k /= 10;
	}
	return 1;
}
const int oo = 1e5 + 1;
int cb[oo];
int res;
void xl ()
{
	res = 0;
	for(int i = 0; i < oo; i++)
	{
		if(test(i)) res ++;
		cb[i] = res;
	}
}
int l, r;
void solution()
{
	cin >> l >> r;
	if(l == 0) cout << cb[r];
	else cout << cb[r] - cb[l - 1];
}
int main()
{
	xl();
	int t;
	cin >> t;
	while (t--)
	{
		solution();
		cout << "\n";
	}
}
