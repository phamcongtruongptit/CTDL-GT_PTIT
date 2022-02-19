// CAN NGOC BINH
#include<bits/stdc++.h>
using namespace std;

/*
	ta sinh cac hoan vi tu 1->n 
	mang A: chua cac hoan vi
	ta tinh tong += B[i][A[j]]
	neu tong = S thi do la ket qua 
*/

int n, A[20] = {}, S, B[20][20];
bool stop;

// sinh hoan vi ke tiep
void next_permutation(){

//	// in cau hinh
//	for(int i=1; i<=n; i++) cout << A[i];
//	cout << " ";

	int pos = n - 1; // vi tri trong mang A
	while(pos > 0 && A[pos] > A[pos + 1]) pos--; // tim vi tri i ma tai do A[i] < A[i + 1]
	
	// in cau hinh neu cau hinh ban dau da max
	if(pos == 0){
		stop = true;
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
	
	
}

void solution(){
	cin >> n >> S;
	stop = false; // dung lai neu la cau hinh cuoi cung
	
	for(int i=1; i<=n; i++) A[i] = i; // khoi tao cau hinh ban dau
	for(int i=1; i<=n; i++) for(int j=1; j<=n; j++) cin >> B[i][j];
	
	vector<vector<int>> ans; // luu ket qua
	while(!stop){
		int sum = 0;
		for(int i=1; i<=n; i++) sum += B[i][A[i]]; // tinh tong theo hoan vi
		
		if(sum == S){
			ans.resize(ans.size() + 1); // tang ans len 1 don vi
			for(int i=1; i<=n; i++) ans[ans.size() - 1].push_back(A[i]);
		}
		
		next_permutation();
	}
	
	// in ket qua
	cout << ans.size() << endl;
	for(int i=0; i<ans.size(); i++){
		for(auto x: ans[i]) cout << x << " ";
		cout << endl;
	}

}

int main(){
	
	int test = 1;
//	cin >> test; // multi testcase
	
	while(test--) solution();
	
	return 0;
}
