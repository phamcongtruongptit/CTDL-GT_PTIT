#include<iostream>
#include<string.h>
using namespace std;
#define ll long long

/*
	sol: ta lan luot thuc hien doi voi so to tien = 1, so to tien = 2, ....
	cho den khi so tien = k va tong k to tien = S
	-> bai toan quay ve tim to hop co k phan tu va tong = S
*/


ll n, s, A[100], Q[100], ans = 0, sum;
bool cont; // check xem co the doi duoc tien chua

void backTrack(ll j, ll p){
	for(int i=1; i<=n; i++){
		if(i > Q[j-1]){
			ll tmp = sum;
			
			Q[j] = i; sum += A[i]; // cong A[i] = sum
			
			// neu j == p && sum == s update ket qua va return
			if(j == p && sum == s){
				ans = p;
				cont = true;
				return;
			}
			else if(j < p) backTrack(j+1, p); // neu j < p thi goi de quy tiep
			sum = tmp; // tra lai gia tri cua sum cho lan goi de quy tiep theo
		}
	}
}
int main(){
	int test; cin >> test;
	while(test--){
		cont = false; // khoi tao cont
		memset(A, 0, sizeof(A));
		memset(Q, 0, sizeof(Q));
		cin >> n >> s;
		for(int i=1; i<=n; i++) cin >> A[i]; // nhap
		int t = 1; // so to tien
		
		// lap den khi cont = true 
		while(!cont && t <= n){
			sum = 0;
			backTrack(1, t);
			t++;
		}
		
		// in ket qua
		if(!cont) cout << -1;
		else cout << ans;
		cout << endl;
	}
}
