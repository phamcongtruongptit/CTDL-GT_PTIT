// Can Ngoc Binh
#include<bits/stdc++.h>
using namespace std;

/*

*/
	
int n, k;
vector<int> A;
int B[100] = {};
bool have = false; // check xem co ton tai to hop co tong = k


// ham in ket qua
void output(int index){
	cout << "[";
	for(int i=1; i<index; i++) cout << B[i] << " ";
	cout << B[index] << "]";
}

void backTrack(int index){
	for(int i=0; i<n; i++){
		if(A[i] < B[index - 1]) continue; // vi ket qua theo thu tu tang dan 
		B[index] = A[i]; // luu ket qua
		k -= A[i]; // giam k di A[i] don vi
		
		// neu k == 0 update ket qua
		if(k == 0){
			have = true;
			output(index);
		}
		else if(k > 0) backTrack(index + 1); // goi tiep de quy tai index + 1
		k += A[i]; // tra lai gia tri k cho lan goi de quy tiep theo
	}
}

void solution(){

	cin >> n >> k;
	A.resize(n);
	for(int i=0; i<n; i++) cin >> A[i];
	// nhap
	
	B[0] = -1;
	
	sort(A.begin(), A.end()); // sort vi ket qua theo thu tu tang dan
	backTrack(1);
	
	// neu have = false thi ko ton tai to hop co tong = k nen cout -1
	if(!have) cout << -1;
	cout << endl;
	
}

int main(){
	int test = 1;
	cin >> test; // for multi test
	
	while(test--) solution();
	
	return 0;
}
