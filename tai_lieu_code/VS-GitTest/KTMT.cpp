#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string s1, s2;
	cin >> s1 >> s2;
	int nho = 0;
	vector<int> a;
	for(int i = s1.size() - 1; i >= 0; i--)
	{
		if(s1[i] == '0' && s2[i] == '0' && nho == 0)
		{
			nho = 0;
			a.push_back(0);
		}
		else if(s1[i] == '0' && s2[i] == '0' && nho == 1 || s1[i] == '1' && s2[i] == '0' && nho == 0 || s1[i] == '0' && s2[i] == '1' && nho == 0)
		{
			nho = 0;
			a.push_back(1);
		}
		else if(s1[i] == '1' && s2[i] == '0' && nho == 1 || s1[i] == '0' && s2[i] == '1' && nho == 1 || s1[i] == '1' && s2[i] == '1' && nho == 0)
		{
			nho = 1;
			a.push_back(0);
		}
		else if(s1[i] == '1' && s2[i] == '1' && nho == 1)
		{
			nho = 1;
			a.push_back(1);
		}
	}
	if(nho == 1) cout << "Tran so!" << endl;
	else
	{
		for(int i = a.size() - 1; i >= 0; i--)
		{
			cout << a[i];
		}
        cout << endl;
	}
}
