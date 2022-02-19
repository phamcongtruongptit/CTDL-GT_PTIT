#include<bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii; // thay the pair<int, int> = pii
#define f first // thay the first = f
#define s second // thay the second = s

int n, k;
vector<int> A;
int B[100] = {};
bool haveRes = false; // check xem co day con tong = k ko

// in ket qua
void output(int index){
	cout << "[";
	for(int j=1; j<index; j++) cout << B[j] << " ";
	cout << B[index] << "] ";
	
}

void backTrack(int index){
	for(int i=0; i<n; i++){
		if(A[i] <= B[index - 1]) continue; // vi ko tinh cac hoan vi nen ta chi xet ket qua tang dan
		B[index] = A[i]; // luu ket qua tai index
		k -= A[i]; // giam gia tri k -= A[i]
		
		// neu k == 0 thi in ket qua
		if(k == 0){
			haveRes = true;
			output(index);
		}
		else backTrack(index + 1); // goi tiep de quy tai index + 1
		k += A[i]; // tra lai gia tri k cho de quy dang sau
	}
}
void solution(){
	haveRes = false;
	cin >> n >> k;
	A.resize(n);
	for(int i=0; i<n; i++) cin >> A[i]; // nhap
	
	B[0] = -1;
	sort(A.begin(), A.end()); // sort vi ket qua tang dan
	backTrack(1); // goi ham de quy
	
	// neu haveRes = false thi ko co day con co tong = k nen cout -1
	if(!haveRes) cout << -1;
	cout << endl;
}
int main(){
	int test = 1;
	cin >> test; // for multi test
	
	while(test--) solution();
	
	return 0;
}
