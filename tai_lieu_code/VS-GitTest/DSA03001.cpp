#include <bits/stdc++.h>
using namespace std;

int n;
int res;

void xl()
{
	cin >> n;
	res = n / 1000; n %= 1000; 
	res += n / 500; n %= 500; 
	res += n / 200; n %= 200; 
	res += n / 100; n %= 100;  
	res += n / 50; n %= 50;
	res += n / 20; n %= 20;
	res += n / 10; n %= 10;
	res += n / 5; n %= 5;
	res += n / 2; res += n % 2;
	cout << res;
}

int main()
{
	int t;
	cin >> t;
	while (t -- ){
		xl();
		cout << endl;
	}
}
