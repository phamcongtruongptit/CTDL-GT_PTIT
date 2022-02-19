#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n, m;
		cin >> n >> m;
		int a[105][105], b[105][105];
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < m; j++) cin >> a[i][j];
		}
		int d = 0, l = n, s = m;
		while(d <= n / 2 && d <= m / 2)
		{
			vector<int> v;
			for(int i = d; i < s; i++) v.push_back(a[d][i]);
			for(int i = d + 1; i < l; i++) v.push_back(a[i][s - 1]);
			for(int i = s - 2; i >= d; i--) v.push_back(a[l - 1][i]); 
			for(int i = l - 2; i > d; i--) v.push_back(a[i][d]);
			if(v.size() == 0) break;
			int c = v.at(v.size() - 1);
			v.insert(v.begin(), c);
			int j = -1;
			for(int i = d; i < s; i++) b[d][i] = v.at(++j);
			for(int i = d + 1; i < l; i++) b[i][s - 1] = v.at(++j);
			for(int i = s - 2; i >= d; i--) b[l - 1][i] = v.at(++j); 
			for(int i = l - 2; i > d; i--) b[i][d] = v.at(++j);
			d++; l--; s--;
		}
		for(int i = 0; i < n; i++)
		{ 
			for(int j = 0; j < m; j++) cout << b[i][j] << " ";
		}
		cout << endl;
	}
}