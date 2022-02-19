#include <bits/stdc++.h>
using namespace std;
int n;
vector <vector <int> > v;
vector <int> a;
void process()
{
	cin >> n;
	a.resize(n);
	for(int i = 0; i < n; i++) cin >> a[i];
	v.push_back(a);
	while(--n)
	{
		for(int i = 0; i < n; i++) a[i] = a[i] + a[i + 1];
		v.push_back(a);
	}
	n = 1;
	for(int i = v.size() - 1; i >= 0; i--)
	{
		cout << "[" << v[i][0];
		for(int j = 1; j < n; j++) cout << " " << v[i][j];
		cout << "] ";
		n++;
	}
	v.clear();
	a.clear();
}
int main(){
	int t;
	cin >> t;
	while (t -- )
	{
		process();
		cout << "\n";
	}
}
