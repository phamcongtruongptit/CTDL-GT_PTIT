#include<bits/stdc++.h>
#define pb push_back
#define ll long long
using namespace std;
const int MAX = 1e4 + 5;
void divisionPrime(int n, int mp[])
{
	for(int i = 2; i <= n; i++)
    {	
		int tmp = i;
		for(int j = 2; j <= sqrt(tmp); j++)
        {
			while(tmp % j == 0)
            {
				mp[j]++;
				tmp /= j;
			}
		}
		if(tmp > 1) mp[tmp]++;
	}
}
string toString(ll n)
{
	string str;
	while(n > 0)
    {
	    str = (char)(n % 10 + '0') + str;
	    n /= 10;
	}
	return str;
}
string addtration(string s1, string s2)
{
	int SIZE1= s1.length(), SIZE2 = s2.length();
	(SIZE1 > SIZE2) ? s2.insert(0, SIZE1 - SIZE2, '0') : s1.insert(0, SIZE2 - SIZE1, '0');
	string result;
	int tmp = 0;
	for(int i = s1.length() - 1; i >= 0; i--){
		int val = (s1[i] - '0' + s2[i] - '0' + tmp);
		tmp = val / 10;
		result.insert(0, 1, val % 10 + '0');
	}
	if(tmp > 0) result.insert(0, 1, tmp + '0');
	return result;
}
string multilString(string s1, string s2)
{
	ll local = 0;
	string result;
	for(int i = s2.length() - 1; i >= 0; i--)
    {
		string number;
		int res = 0;
		for(int j = s1.length() - 1; j >= 0; j--)
        {
			int tmp = (s2[i] - '0') * (s1[j] - '0') + res;
			res = tmp / 10;
			number.insert(0, 1, tmp % 10 + '0');
		}
		if(res > 0) number.insert(0, 1, res + '0');
		for(int j = 0; j < local; j++) number.pb('0');
		result = addtration(result, number);
		local++;
	}
	return result;
}
int main()
{
	int n;
    cin >> n;
	int map_ts[MAX] = {0}, map_ms[MAX] = {0};
	divisionPrime(2 * n + 2, map_ts);
	divisionPrime(n + 1, map_ms);
	divisionPrime(n + 2, map_ms);
	for(int i = 0; i < MAX; i++) map_ts[i] -= map_ms[i];
	string ans = "1";
	for(int i = 2; i < MAX; i++)
		if(map_ts[i] > 0) while(map_ts[i]--) ans = multilString(ans, toString(i));
	cout << ans << endl;	
}