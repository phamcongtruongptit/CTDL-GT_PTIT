#include <bits/stdc++.h>
#define ll long long
#define F first
#define S second
using namespace std;
int n, m, k;
vector <int > X;
vector <pair <int, int> > x;
ll tem;
void solution()
{
	cin >> n >> m;
	int dem[4] = {0}; 
	X.resize(1001, 0);
	for(int i = 0; i < n; i++)
	{
		cin >> k;
		X[k] ++;
	}
	for(int i = 0; i < 1001; i++)
	{
		if(X[i])
		{
			x.push_back(make_pair(i, X[i]));
			X[i] = 0;
		}
	}

	for(int i = 0; i < m; i++)
	{
		cin >> k;
		X[k] ++;
		if(k < 4) dem[k] ++;
	} 
	
	tem = 0;

	for(int i = 0; i < 1001; i++)
	{

		tem += X[i];
		X[i] = m - tem;
	}

	tem = 0;
	for(int i = 0; i < x.size(); i++)
	{

		if(x[i].F == 0) continue;
		if(x[i].F == 1) tem += dem[0] * x[i].S;
		else if(x[i].F == 2) tem = tem + (dem[0] + dem[1] + X[4]) * x[i].S;
		else if (x[i].F == 3) tem += (m - dem [3]) * x[i].S;
		else tem += (dem[0] + dem[1] + X[x[i].F]) * x[i].S;
	}
	cout << tem;
	x.clear();
	X.clear();
}
int main()
{
	int t;
	cin >> t;
	while (t-- )
	{
		solution();
		cout << endl;
	}
}
