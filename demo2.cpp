#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		deque<long long> k; // khai bao hang doi 2 dau
		long long l; // khai bao 1 bien
		k.push_front(1); // day vao 1 vao dau
		int d = 1;
		while(d <= n){
			l = k.front(); 
			cout << k.front() << " ";
			k.pop_front();
			l = l*10;
			k.push_back(l);
			l += 1;
			k.push_back(l);
			++d;
		}
		
		cout << endl;
	}
	return 0;
}