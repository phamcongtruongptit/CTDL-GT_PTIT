#include <bits/stdc++.h>
using namespace std;
int n, s, x;
vector <int> L;
void xl()
{
	cin >> s >> n; s++;
	L.clear();
	L.resize(s, 0);
	L[0] = 1;
	for(int i = 0; i < n; i++)
	{
		cin >> x;
		for(int j = s - 1; j >= 0; j--)
		{
			if(L[j] == 0 && L [j - x] == 1) L[j] = 1;
		}
	}
	for(int i = s - 1; i >= 0; i--)
	{
		if(L[i])
		{
			cout << i;
			return;
		}
	}
}
int main()
{
	xl();
	cout << endl;
}
