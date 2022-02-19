#include <bits/stdc++.h>
using namespace std;

priority_queue <int, vector <int>, greater <int> > q;
int n, x;
bool check;
long long a, b;

void xl()
{
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> x;
		q.push(x);
	}
	a = 0; b = 0;
	while(!q.empty())
	{
		if (check) a = a * 10 + q.top();
		else b = b * 10 + q.top();
		q.pop();
		check = !check;
	}
	cout << a + b;

	
}

int main()
{
	int t; 
	cin >> t;
	while (t-- )
	{
		xl();
		cout << endl;
	}
}
