#include<bits/stdc++.h>
using namespace std;

/*
	hoan vi xau ki tu tuong tu nhu hoan vi chu so
	thay so = ki tu
*/

string s;
bool vis[100] = {}; // mang danh dau da xet vi tri thu i hay chua
char A[100] = {}; // mang chua ki tu

void output(){
	for(int i=1; i<=s.length(); i++) cout << A[i];
	cout << " ";
}

void backTrack(int index){
	for(int i=0; i<s.length(); i++){
		if(vis[i]) continue; // neu da xet vi tri thu i thi bo qua
		vis[i] = true; // neu chua xet thi thuc hien danh dau vis[i] = true va gan A[index] = s[i]
		A[index] = s[i];
		if(index == s.length()){
			output(); // in ket qua	
		}
		else backTrack(index + 1); // goi de quy
		vis[i] = false; // tra lai ket qua cho ham de quy dang sau
		
	}
}
	
void solution(){
	cin >> s; // nhap
	backTrack(1);
	cout << endl;
}

int main(){
	int test = 1;
	cin >> test; // for multi test
	
	while(test--) solution();
	
	return 0;
}
