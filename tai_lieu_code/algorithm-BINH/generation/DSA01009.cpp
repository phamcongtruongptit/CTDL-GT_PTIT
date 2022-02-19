// CAN NGOC BINH
#include<bits/stdc++.h>
using namespace std;

/*
	xau AB tuong ung voi xau nhi phan ma:
	'A' = '0'
	'B' = '1'
*/

int n, k;
vector<string> ans; // luu ket qua

// ham check neu string A co dung k ki tu lien tiep
bool check(string A){
	int n = A.length() - 1;
	bool res = false;
	int cnt = (A[0] == '0');
	for(int i=1; i<=n; i++){
		// xet cac gia tri lien ke
		if(A[i] == '0' && A[i - 1] == '0'){
			cnt++;
		}
		else cnt = (A[i] == '0');
		if(cnt > k) return false;
		else{
			if(cnt == k){
				if(res) return false;
				else res = true;
			}
		}
	}
	return res;
}

// in ra cau hinh
void output(string s){
	if(!check(s)) return; // neu check sai thi return
	string res;
	// in cau hinh
	for(int i=0; i<s.length(); i++){
		res += (s[i] == '0'? 'A' : 'B');
	}
	ans.push_back(res);
}

void next_binary(string &s, bool &hasNext){
	
	int pos = s.length() - 1; // vi tri trong string s
	
	while(pos >= 0 && s[pos] == '1') s[pos--] = '0'; // lap den khi gap ki tu '0' neu s[i] = 1 thi thay s[i] = 0
	
	if(pos >= 0) s[pos] = '1'; // neu pos >= 0 thi thay s[pos] = '1'
	else hasNext = false;
}

void solution(){
	
	cin >> n >> k;
	string s;
	for(int i=0; i<n; i++) s += '0'; // khoi tao cau hinh ban dau
	bool hasNext = true; // check co cau hinh tiep theo hay ko
	
	// lap khi nao chua dat cau hinh max
	while(hasNext){
		output(s);
		next_binary(s, hasNext);
	}
	
	// in ket qua
	cout << ans.size() << endl;
	for(auto s: ans) cout << s << endl;
	cout << endl;
}

int main(){
	
	int test = 1;
//	cin >> test; // multi testcase
	
	while(test--) solution();
	
	return 0;
}
