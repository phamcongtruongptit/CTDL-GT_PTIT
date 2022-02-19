// CAN NGOC BINH
#include<bits/stdc++.h>
using namespace std;

/*
	xau AB tuong ung voi xau nhi phan ma:
	'A' = '0'
	'B' = '1'
*/

// in ra cau hinh
void output(string s){
	for(int i=0; i<s.length(); i++){
		cout << (s[i] == '0'? 'A' : 'B');
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
