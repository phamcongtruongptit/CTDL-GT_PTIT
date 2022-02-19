// CAN NGOC BINH
#include<bits/stdc++.h>
using namespace std;

/*
	cac ban co the lam theo pp sinh xau nhi phan co n bit
	va thuc hien dem so bit 1. neu so bit 1 = k thi in ra
	minh lam theo pp quay lui
*/

int n, k;

// string : path luu xau nhi phan
// cnt : dem so bit = 1
// index : do dai xau
void backTrack(int index, int cnt, string path){
	for(int i=0; i<=1; i++){
		path.push_back(i + '0');
		cnt += i == 1; // neu i = 1 thi tang cnt + 1
		// thuc hien in xau neu index == n va cnt == k
		if(index == n){
			if(cnt == k) cout << path << endl;
		}
		else backTrack(index + 1, cnt, path); // goi de quy tai index  + 1
		path.erase(path.size() - 1, 1); // tra lai cau hinh cua xau nhi phan
	}
	
}


void solution(){
	cin >> n >> k;
	backTrack(1, 0, "");
	
	cout << endl;
}

int main(){
	
	int test = 1;
	cin >> test; // multi testcase
	
	while(test--) solution();
	
	return 0;
}
