#include <bits/stdc++.h>
using namespace std;
string s;
void nextp()
{
	int i, j;
	i = s.size() - 2;
	while (i >= 0 && s[i] >= s[i + 1]) i--;
	if(i < 0)
	{
		cout << "BIGGEST" << endl;
		return;
	}
	j = s.size() - 1;
	while(s[i] >= s[j]) j--;
	swap(s[i], s[j]);
	sort(s.begin() + i + 1, s.end());
	cout << s << endl;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t, dem;
	cin >> t;
	while(t--)
	{
		cin >> dem;
		cout << dem << " ";
		cin >> s;
		nextp();
	}
	return 0;
}
