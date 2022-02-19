// CAN NGOC BINH
#include<bits/stdc++.h>
using namespace std;

// y tuong lam tuong tu sinh to hop

void solution(){
	
	int n, k;
	cin >> n >> k;
	vector<int> A(n);
	for(int i=0; i<k; i++) cin >> A[i]; // nhap 
	
	int step = k;
	while(step > 0 && A[step] - A[step - 1] <= 1) step--; // lap den khi khoang cach giua A[i] va A[i-1] > 1
	
	// neu cau hinh da cho la cau hinh cuoi cung
	if(step == 0 && A[0] == 1){
		int val = n - k + 1;
		for(int i=0; i<k; i++) cout << val++ << " ";
		return;
	}
	
	A[step]--; // giam A[step] di 1 don vi

	int index = k - 1, tmp = n;
	for(int i=index; i>=step+1; i--) A[i] = tmp--; // cac phan tu truoc step moi phan tu = phan tu lien sau -1
	
	// in ket qua
	for(int i=0; i<k; i++) cout << A[i] << " ";
	cout << endl;
	
}

int main(){
	
	int test = 1;
	cin >> test; // multi testcase
	
	while(test--) solution();
	
	return 0;
}
