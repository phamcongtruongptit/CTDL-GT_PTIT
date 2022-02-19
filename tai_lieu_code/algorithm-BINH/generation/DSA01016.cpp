// CAN NGOC BINH
#include<bits/stdc++.h>
using namespace std;
int n;
int A[100] = {};
// in cau hinh co tong = n
void output(int index){
	cout << "(";
	for(int i=1; i<index; i++) cout << A[i] << " ";
	cout << A[index] << ") ";
}

// A : luu gia tri
// index: do dai cua day
void backTrack(int index){
	for(int i=A[index - 1]; i>=1; i--){
		A[index] = i; // luu gia tri
		n -= i;
		if(n == 0) output(index); // if n == 0 thi in ra cau hinh phu hop
		else if(n > 0) backTrack(index + 1); // goi de quy tai index  + 1 neu n > 0
		n += i; // tra lai gia tri cua n
	}
}


void solution(){
	cin >> n;
	A[0] = n;
	backTrack(1);
	cout << endl;
}
int main(){	
	int test = 1;
	cin >> test; // multi testcase
	while(test--) solution();
	return 0;
}
