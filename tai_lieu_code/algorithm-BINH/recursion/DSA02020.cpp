#include<iostream>
#include<algorithm>
using namespace std;
#define ll long long

/*
	so co n co phan tich thua so nguyen to n = p1^x1*p2^x2*...*pn^xn
	thi co so uoc la (x1+1)*(x2+1)*...*(xn+1)
*/

ll A[] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43}, ans, n, res, better;
//better: so uoc
void backTrack(ll i){
	ll j = 1;
	while(true){
		res *= A[i];
		if(res >= ans) break;
		ll tmp1 = res;
		ll tmp = better;
		better *= (j+1); 
		if(better > n) break;
		//so uoc == n thi update ans
		else if(better == n) ans = min(ans, res);
		else backTrack(i+1);
		// tra lai ket qua cho lan goi de quy tiep theo
		j++; better = tmp; res = tmp1;
	}
}
int main(){
	int test; cin >> test;
	while(test--){
		ans = 1e18; res = 1, better = 1;
		cin >> n;
		if(n == 1) cout << 1;
		else{
			backTrack(0);
			cout << ans;
		}
		cout << endl;
	}	
}
