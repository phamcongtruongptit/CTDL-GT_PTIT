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
		ans.push_back(s[0]);
		for(int i=1; i<s.length(); i++){
			// neu s[i] = 1 thi ans[i] != ans[i - 1]
			if(s[i] == '1') ans.push_back(ans[ans.length() - 1] == '1'? '0' : '1');
			// nguoc lai
			else ans.push_back(ans[ans.length() - 1]);
		}
		cout << ans << endl;
	}
}
