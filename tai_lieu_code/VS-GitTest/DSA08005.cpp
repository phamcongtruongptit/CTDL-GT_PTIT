#include <bits/stdc++.h>
using namespace std;
int n;
stack <int> st;
void cd(int x)
{
	while (x)
	{
		st.push(x % 2);
		x /= 2;
	}
	while(!st.empty())
	{
		cout << st.top();
		st.pop();
	}
	cout << " ";
}
void xl()
{
	cin >> n; n++;
	for(int i = 1; i < n; i++) cd(i);
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
