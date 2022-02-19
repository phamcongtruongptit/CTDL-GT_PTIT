// CAN NGOC BINH
#include<bits/stdc++.h>
using namespace std;

int n, A[1005] = {};

// sinh hoan vi ke tiep
void next_permutation(){

	int pos = n - 1; // vi tri trong mang A
	while(pos > 0 && A[pos] > A[pos + 1]) pos--; // tim vi tri i ma tai do A[i] < A[i + 1]
	
	// in cau hinh neu cau hinh ban dau da max
	if(pos == 0){
		for(int i=1; i<=n; i++) cout << i << " ";
		cout << endl;
		return;
	}
	
	int index = n;
	while(A[index] < A[pos]) index--; // tim vi tri i ma tai do A[i] > A[pos] va A[i] min
	
	swap(A[index], A[pos]); // doi cho A[index] va A[pos]
	
	int left = pos + 1, right = n;
	// lat nguoc doan tu pos + 1 den n
	while(left <= right){
		swap(A[left++], A[right--]);
	}
	
	// in cau hinh
	for(int i=1; i<=n; i++) cout << A[i] << " ";
	cout << endl;
	
}

void solution(){
	cin >> n;
	
	for(int i=1; i<=n; i++) cin >> A[i];
	
	next_permutation();
	
}

int main(){
	
	int test = 1;
	cin >> test; // multi testcase
	
	while(test--) solution();
	
	return 0;
}
