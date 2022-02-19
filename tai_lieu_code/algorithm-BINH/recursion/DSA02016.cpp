// Can Ngoc Binh
#include<bits/stdc++.h>
using namespace std;

/*

*/
	
vector<vector<bool>> vis; // danh dau xem da xet o (i,j) chua
int n, ans;


// ham check xem duong cheo va hang co con hau nao trung ko
bool isOke(int row, int col){
	
	for(int i=1; i<=n; i++) if(vis[row][i]) return false; // neu trung hang i thi return false;
	
	// check duong cheo: duong cheo cua o (i,j) duoc tinh la (x,y) sao cho abs(x-i) = abs(y-j)
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			if(abs(i - row) == abs(j - col)){
				if(vis[i][j]) return false; // neu trung return false
			}
		}
	}
	return true;
	
}

// minh se xet con hau dang nam o cot thu col
void backTrack(int col){
	
	for(int row=1; row<=n; row++){
		// check xem duong cheo va hang co con hau nao trung ko
		if(isOke(row, col)){
			vis[row][col] = true; // danh dau da xet o (row, col)
			if(col == n) ans++;
			else backTrack(col + 1);
			vis[row][col] = false; // tra lai ket qua
		}
	}
}

void solution(){
	ans = 0;
	cin >> n;
	vis.assign(n + 5, vector<bool>(n + 5, false)); // khoi tao vis false
	
	backTrack(1);
	cout << ans << endl; // in ket qua
}

int main(){
	int test = 1;
	cin >> test; // for multi test
	
	while(test--) solution();
	
	return 0;
}
