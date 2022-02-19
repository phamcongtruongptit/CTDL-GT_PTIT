// Can Ngoc Binh
#include<bits/stdc++.h>
using namespace std;
const int MAXN = 505;

/*
	+ dau tien ta se chuan bi 1 mang nguyen to:
	chung ta dung sang nguyen to eratos ( cac co the xem qua thuat toan sang nguyen to)
	
	+ sau do bai toan quay ve bai sinh to hop co tong = k
*/

bool prime[MAXN] = {};
int n, s, p;
int A[100] = {};
vector<int> v;
vector<vector<int>> ans;

// sang nguyen to
void eratos(){
	for(int i=2; i<MAXN; i++) prime[i] = true; // khoi tao prime true
	
	// neu i la so nguyen to thi 2*i, 3*i, 4*i.... ko phai la so nguyen to
	for(int i=2; i*i<MAXN; i++){
		if(prime[i])
		for(int j=i*i; j<MAXN; j+=i) prime[j] = false;
	}
}

void backTrack(int index){
	for(int i=0; i<v.size(); i++){
		if(v[i] <= A[index - 1]) continue; // vi dap an la day tang dan
		A[index] = v[i]; // luu gia tri A[index]
		s -= v[i]; // giam tong S di v[i]
		
		// neu s == 0 && index == n thi ta them ket qua vao ans
		if(s == 0 && index == n){
			ans.resize(ans.size() + 1); // tang kich thuoc ans len 1 don vi
			for(int i=1; i<=index; i++) ans[ans.size() - 1].push_back(A[i]); // push ket qua vao ans
		}
		else if(s > 0) backTrack(index + 1); // neu s > 0 thi goi de quy tai index + 1
		s += v[i]; // tra lai tong S cho lan goi de quy dang sau
	}
}

void solution(){
	ans.clear(); // xoa ans
	v.clear(); // xoa clear
	A[0] = 0; 
	cin >> n >> p >> s;
	
	// khoi tao mang nguyen to tu p + 1 -> S
	for(int i=p+1; i<=s; i++){
		if(prime[i]) v.push_back(i);
	}
	backTrack(1); // goi ham de quy
	
	
	// in ket qua
	cout << ans.size() << endl;
	for(int i=0; i<ans.size(); i++){
		for(auto x: ans[i]) cout << x << " ";
		cout << endl;
	}
	cout << endl;
}

int main(){
	eratos(); // goi ham sang nguyen to
	int test = 1;
	
	cin >> test; // for multi test
	
	while(test--) solution();
	
	return 0;
}
