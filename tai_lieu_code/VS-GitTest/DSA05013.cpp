#include<bits/stdc++.h>
#define ll long long
using namespace std;
const long long oo = 1e9 + 7;
ll a[100005];
int main()
{
	int t;
	cin >> t;
	ll n, x, sum, k;
	while(t--)
	{
		cin >> n >> k;
		n++;
		k++;
		sum = 1;
		for(int i = 1; i < k; i++)
		{
			a[i] = sum;
			sum = (sum + a[i]) % oo;
		}
		x = 1;
		sum -= 1;
		for(int i = k; i < n; i++)
		{
			a[i] = sum;
			sum -= a[x++];
			sum += a[i];
			sum %= oo;
			if(sum < 0) sum += oo;
		}
		cout << a[n - 1] << endl;
	}
}
