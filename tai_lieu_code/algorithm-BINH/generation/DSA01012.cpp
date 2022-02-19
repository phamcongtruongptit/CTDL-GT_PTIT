// CAN NGOC BINH
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

// in ra cau hinh
void output(string s){
	cout << s[0];
	for(int i=1; i<s.length(); i++){
		cout << ((s[i] - '0') ^ (s[i - 1] - '0')); // bitwise xor
	}
	cout << " ";
}

void next_binary(string &s, bool &hasNext){
	
	int pos = s.length() - 1; // vi tri trong string s
	
	while(pos >= 0 && s[pos] == '1') s[pos--] = '0'; // lap den khi gap ki tu '0' neu s[i] = 1 thi thay s[i] = 0
	
	if(pos >= 0) s[pos] = '1'; // neu pos >= 0 thi thay s[pos] = '1'
	else hasNext = false;
}

void solution(){
	
	int n;
	cin >> n;
	string s;
	for(int i=0; i<n; i++) s += '0'; // khoi tao cau hinh ban dau
	bool hasNext = true; // check co cau hinh tiep theo hay ko
	
	// lap khi nao chua dat cau hinh max
	while(hasNext){
		output(s);
		next_binary(s, hasNext);
	}
	cout << endl;
}

int main(){
	
	int test = 1;
	cin >> test; // multi testcase
	
	while(test--) solution();
	
	return 0;
}
