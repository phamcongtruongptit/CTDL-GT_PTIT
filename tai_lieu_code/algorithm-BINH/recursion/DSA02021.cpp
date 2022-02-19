// Can Ngoc Binh
#include<bits/stdc++.h>
using namespace std;

/*
	y tuong: su dung chia de tri 
	chuoi thu n se co do dai = len(string) * (2^n - 1)
	1 << n = 2^n
*/

typedef long long ll;
	
string s;

char find(ll n, ll step, ll len){
	
	while(step){
		ll count = len * (1LL << (step - 1));
		
		// neu do dai chuoi n - 1 < n thi ta tim ki tu thu n - (do dai chuoi thu n + 1)
		if(count < n){
			if(n == count + 1) n = count; // neu n == count + 1 thi cho n = ki tu cuoi cung
			else n -= count + 1;
		}
		step--; // giam step
	} 
	return s[n - 1]; // khi step = 0 thi return s[n - 1]
	
}


void solution(){
	ll n;
	cin >> s >> n;
	ll N = s.length();
	
	ll step = 0;
	while(N * (1LL << step) < n) step++; // tim step nho nhat ma do dai >= n
	
	cout << find(n, step, N) << endl;
	
}

int main(){
	int test = 1;
	cin >> test; // for multi test
	
	while(test--) solution();
	
	return 0;
}
