// CAN NGOC BINH
#include<bits/stdc++.h>
using namespace std;

void next_binary(string s){
	
	int pos = s.length() - 1; // vi tri trong string s
	
	while(pos >= 0 && s[pos] == '1') s[pos--] = '0'; // lap den khi gap ki tu '0' neu s[i] = 1 thi thay s[i] = 0
	
	if(pos >= 0) s[pos] = '1'; // neu pos >= 0 thi thay s[pos] = '1'
	
	cout << s << endl;
}

void solution(){
	string s;
	cin >> s;
	
	next_binary(s);
}

int main(){
	
	int test = 1;
	cin >> test; // multi testcase
	
	while(test--) solution();
	
	return 0;
}
