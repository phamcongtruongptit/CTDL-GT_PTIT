#include <bits/stdc++.h>
#define ll long long
using namespace std;
int n;
const int oo = 1e5 + 1;
vector <ll> l, r;// khai báo 2 vector trái , phải
ll a[oo];
void xl()
{
	stack <int> k; 
	cin >> n; n++;
	l.resize(n, 0);

	for(int i = 1; i < n; i++) cin >> a[i]; // nhập giá trị

	for(int i = 1; i < n; i++){
		while (!k.empty() && a[i] <= a[k.top()]) k.pop();
		l[i] = k.empty() ? 0 : k.top();
		k.push(i);
	}

	while(!k.empty()) k.pop();

	r.resize(n,0);

	for(int i = n - 1; i >= 1; i--)	{
		while (!k.empty() && a[i] <= a[k.top()]) k.pop();

		r[i] = k.empty() ? n : k.top();
		k.push(i);
	} 

	ll res = 0;
	for(int i = 1; i < n; i++){
		res = max (res, (r[i] - l[i] - 1) * a[i] );
	}

	cout << res;
	l.clear();
	r.clear();

}
int main(){
	int t;
	cin >> t;
	while (t-- ){
		xl();
		cout << endl;
	}
}
