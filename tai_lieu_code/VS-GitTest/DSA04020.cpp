#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int oo = 1e6 + 1;
ll M[oo], k;	bool tem;
int n;
void solve(){

		cin >> n >> k;
		tem = 1;
		for(int i = 0; i < n; i++)
		{
			cin >> M[i];
			if (M[i] == k && tem)
			{
				cout << i + 1;
				tem = 0;
			}
		}
		if (tem) cout << "NO";
		cout << endl;
}
int main()
{
	int t;
	cin >> t;

	while (t--)
	{ solve() ; 
	}
}
