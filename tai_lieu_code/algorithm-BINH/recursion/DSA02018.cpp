// Can Ngoc Binh
#include<bits/stdc++.h>
using namespace std;

/*
	y tuong la sinh cac hoan vi cua A[1] -> A[5]
	voi moi hoan vi ta quay lui thuc hien chen ki tu + - * / vao cac khoang trong giua chung
*/
	
int A[10], per[10], ope[10],  B[10];
// per[]: luu hoan vi
// oper[]: luu phep toan + - * /
bool hasPermu = true; // check xem co hoan vi ke tiep ko
bool ans = false; // ket qua

const int N = 5;

// sinh hoan vi ke tiep (cac ban co the xem lai phan phuong phap sinh)
void permutation(){
	// sinh hoan vi ke tiep N = 5
	int pos = N - 1;
	while(pos > 0 && per[pos] > per[pos + 1]) pos--;
	if(pos == 0){
		hasPermu = false;
		return;
	}
	
	int index = N;
	while(per[index] < per[pos]) index--;
	
	swap(per[index], per[pos]);
	
	int left = pos + 1, right = N;
	while(left <= right){
		swap(per[left++], per[right--]);
	}
	
}

// 1+ 2- 3*
void backTrack(int index, int val){
	for(int i=1; i<=3; i++){
		
		// cho nay minh viet hoi kho hieu
		// no don gia la neu 
		// i = 1: quy uoc la phep + 
		// i = 2: -
		// i = 3: *
		// i = 4: /
		// phan duoi chinh la if else .... (minh viet bang toan tu 3 ngoi cho ngan)
		int tmp = (i == 1? val + A[index + 1] : (i == 2? val - A[index + 1] : val * A[index + 1]));
		
		// neu xet den so cuoi cung
		if(index == N - 1){
			// neu gia tri bieu thuc = 23 thi ans = true
			if(tmp == 23) ans = true;
		}
		else backTrack(index + 1, tmp); // goi tiep de quy
		
	}
}



void solution(){
	hasPermu = true;
	ans = false;
	for(int i=1; i<=N; i++) cin >> A[i], per[i] = i;
	// nhap va khoi tao 
	
	while(true){
		// lap den khi nao hasPermu = false;
		backTrack(1, A[1]); // de quy tuong ung voi hoan vi
		if(ans) break; 
		
		permutation(); // sinh hoan vi
		if(!hasPermu) break; // break
		
		for(int i=1; i<=N; i++) B[i] = A[i]; // mang B copy cua mang A
		for(int i=1; i<=N; i++) A[i] = B[per[i]];
		
	}
	
	// in ket qua
	cout << (ans? "YES" : "NO") << endl;
	
}

int main(){
	int test = 1;
	cin >> test; // for multi test
	
	while(test--) solution();
	
	return 0;
}
