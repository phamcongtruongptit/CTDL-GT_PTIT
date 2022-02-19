// CAN NGOC BINH
#include<bits/stdc++.h>
using namespace std;

/*
	ta dung queue de sinh ra tat ca nhung chuoi so co the
	
*/

// chia du xau string s cho n
int divide(string s, int n){
	int res = 0;
	for(int i=0; i<s.length(); i++) res = (res * 10 + s[i] - '0') % n;
	return res;
}

void solution(){
	
	int n;
	cin >> n;
	queue<string> q; // hang doi string
	q.push("9"); // cau hinh ban dau
	while(!q.empty()){
		string num = q.front(); q.pop();
		// neu string modulo n == 0 thi cout << ket qua
		if(divide(num, n) == 0){
			cout << num << endl;
			return;
		}
		q.push(num + '0'); // push 0 truoc vi ta can tim so nho hon
		q.push(num + '9');
	}
	
}

int main(){
	
	int test = 1;
	cin >> test; // multi testcase
	
	while(test--) solution();
	
	return 0;
}
