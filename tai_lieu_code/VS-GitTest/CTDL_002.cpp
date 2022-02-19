#include<bits/stdc++.h>
using namespace std;
int n, k;
vector<int> a;
bool check;
int count = 0;
void Try(int vt, int sum, string s)
{
	if (sum > k) return;
	if (vt == n)
	{
		if(sum == k)
		{
            count++;
			for(int i = 0; i < s.length(); i++)
			{
				if (s[i] == '1') 
				{
					cout << a[i] << ' ';
				}
			}
            cout << endl;
		}
		return;
	}
	for(char i = '0'; i <= '1'; i++)
	{
		if (i == '0') Try(vt + 1, sum, s + i);
		else Try(vt + 1, sum + a[vt], s + i);
	}

}
int main()
{
	cin >> n >> k;
	a.resize(n);
	check = 0;
	for(int i = 0; i < n; i++) cin >> a[i]; 
	sort(a.begin(),a.end());
	Try(0, 0, "");
	cout << count;
}