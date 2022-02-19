// Can Ngoc Binh
#include<bits/stdc++.h>
using namespace std;

/*
	ta goi de quy khi dang xet day con thu k
	neu k == 0 thi co the tao dc k day con = nhau
*/
	
vector<int> A;
bool vis[100] = {};
int sum_subset, min_dis, n, k;

// sum_subset: tong day con
// min_dis : gia tri nho nhat A[i]

// check xem co the tao duoc day con thu k co tong = S ko
// S: gia tri tong 
bool possibleSumSubset(int k, int S, int pos){
	if(k == 0) return true; // neu k = 0 return true
	if(S > sum_subset) return false; // neu S > sum_subset return false
	
	// neu S == sum_subset goi de quy tiep tai k - 1
	if(S == sum_subset){
		if(k == 1) return true;
		return possibleSumSubset(k - 1, 0, n);
	}
	
	if(S + min_dis > sum_subset) return false;
	
	for(int i=pos; i>=1; i--){
		if(vis[i]) continue; // neu da xet A[i] thi bo qua
		int val = S + A[i];
		vis[i] = true; // danh dau vis[i]
		if(val <= sum_subset && possibleSumSubset(k, val, pos - 1)) return true; // neu possibleSumSubet = true thi return true
		// else thi ta tiep tuc goi de quy
		
		vis[i] = false; // tra lai ket qua cho ham de quy sau do
	}
	
	return false;
	
}

void solution(){
	memset(vis, 0, sizeof(vis));
	A.clear();
	cin >> n >> k;
	A.resize(n + 1);
	int sum = 0;
	
	min_dis = INT_MAX;
	for(int i=1; i<=n; i++) cin >> A[i], sum += A[i], min_dis = min(min_dis, A[i]); // nhap va tinh tong sum
	
	// neu sum % k != 0 thi ko the tao duoc k day con co tong = nhau
	if(sum % k){
		cout << 0 << endl;
		return;
	}
	
	sum_subset = sum / k; // tinh tong day con subset
	
	// in ket qua
	bool ans = possibleSumSubset(k, 0, n);
	cout << (ans? "1" : "0") << endl;
}


int main(){
	int test = 1;
	cin >> test; // for multi test
	
	while(test--) solution();
	
	return 0;
}
