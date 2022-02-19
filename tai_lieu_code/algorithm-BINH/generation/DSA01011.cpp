// CAN NGOC BINH
#include<bits/stdc++.h>
using namespace std;

int N;
char per[100] = {};
bool hasPermu = true;

void permutation(){

	int pos = N - 1; // vi tri trong mang A
	while(pos > 0 && per[pos] >= per[pos + 1]) pos--; // tim vi tri i ma tai do A[i] < A[i + 1]
	
	// in cau hinh neu cau hinh ban dau da max
	if(pos <= 0){
		hasPermu = false;
		return;
	}
	
	int index = N;
	while(per[index] <= per[pos]) index--; // tim vi tri i ma tai do A[i] > A[pos] va A[i] min
	
	swap(per[index], per[pos]); // doi cho A[index] va A[pos]
	
	int left = pos + 1, right = N;
	// lat nguoc doan tu pos + 1 den n
	while(left <= right){
		swap(per[left++], per[right--]);
	}
	
}

void solution(){
	hasPermu = true; // check xem co hoan vi ke tiep hay ko
	int stt;
	cin >> stt;
	string s;
	cin >> s;
	N = s.length();
	for(int i=0; i<N; i++) per[i + 1] = s[i];
	permutation();
	cout << stt << " ";
	if(!hasPermu){
		// neu ko co hoan vi ke tiep
		cout << "BIGGEST" << endl;
		return;
	}
	// in ket qua
	for(int i=1; i<=N; i++) cout << per[i];
	cout << endl;
}



int main(){
	
	int test = 1;
	cin >> test; // multi testcase
	
	while(test--) solution();
	
	return 0;
}
