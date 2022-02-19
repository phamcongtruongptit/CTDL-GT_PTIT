#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void process()
{
	int n, k;
	cin >> n >> k;
	int m = n * n;
	int b[m];
	for(int i = 0; i < m; i++) cin >> b[i];
	sort(b, b + m);
	cout << b[k - 1] << endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
	{
        process();
    }
    return 0;
}