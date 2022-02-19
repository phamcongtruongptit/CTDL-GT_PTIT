// Can Ngoc Binh
#include<bits/stdc++.h>
using namespace std;

/*
	y tuong ta se doi cho lan luot max len truoc
	nhung trong truong hop co nhieu max thi ta can phai xet xem max o vi tri nao phu hop nhat
*/
	
int k;
string s;
string ans = ""; // ket qua


// index: vi tri trong string s
void backTrack(int index){
	if(k <= 0 || index >= s.length()) return; // neu nhu index > s.length() || k<=0 thi return
	
	char max_char = '0';
	
	//tim max ki tu trong doan index -> n
	for(int i = index; i<s.length(); i++){
		if(max_char < s[i]) max_char = s[i];
	}
	
	for(int i=index; i<s.length(); i++){
		// neu s[i] = max_char thi ta thuc hien doi cho
		if(s[i] == max_char){
			if(i != index) k--; // giam k di 1 don vi
			swap(s[i], s[index]); // doi cho
			ans = max(ans, s); // tim max ans
			backTrack(index + 1);
			swap(s[i], s[index]); // doi lai vi tri cho ham de quy sau
			k++; // tang k cho de quy sau
		}
	}
	
}




void solution(){
	cin >> k >> s;
	ans = s;
	backTrack(0);
	cout << ans << endl;
	
	
}

int main(){
	int test = 1;
	cin >> test; // for multi test
	
	while(test--) solution();
	
	return 0;
}
