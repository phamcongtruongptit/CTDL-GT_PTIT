#include<bits/stdc++.h>
using namespace std;
/*
	xau gray dc tao ra bang cac xor bit lien ke
	vi du:
	xau nhi phan 010 se tao ra xau gray = 011
	gray[0] = s[0] = 0
	gray[1] = s[0] xor x[1] = 1
	gray[2] = s[1] xor s[2] = 1
	bitwise xor: ^
	bit a xor b = 1 neu a != b (a = 0, b=1 or a=1,b=0) / =0 neu a = b
*/
int main(){
	int test;
	cin >> test;
	while(test--){
		string s;
		cin >> s;
		string ans;
		ans += s[0];
		for(int i=1; i<s.length(); i++) ans += ((s[i] - '0') ^ (s[i - 1] - '0') + '0');
		cout << ans << endl;
	}
}
