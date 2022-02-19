#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int solve(vector<int> v, vector<int> x) {
	int kq = 0;
	for (int i = 0; i < v.size(); i++) {
		if (v[i] == x[i])
			continue;
		for (int j = i + 1; j < v.size(); j++)
			if (v[j] == x[i]) {
				swap(v[j], v[i]);
				kq++;
				break;
			}
	}
	return kq;
}
void solution(){
	int n;	cin >> n;
	vector<int> v(n, 0);
	for (int i = 0; i < n; i++)
		cin >> v[i];

	vector<int> x = v;
	sort(x.begin(), x.end());

	cout << solve(v, x) << endl;
}
int main() {
	int t;	cin >> t;
	while (t--) {
		solution; 
	}
	return 0;
}