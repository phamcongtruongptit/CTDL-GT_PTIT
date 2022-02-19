// Can Ngoc Binh
#include<bits/stdc++.h>
using namespace std;

/*
	y tuong: su dung quay lui nhu bai toan con chuot
*/

typedef pair<int, int> pii; // pii = pair<int, int>
#define f first // f = first
#define s second // s = second

int n;
vector<vector<int>> A;
vector<vector<bool>> vis; // mang danh dau 
vector<pii> dx = {{1, 0}, {0, -1}, {0, 1}, {-1, 0}}; // dieu khien chuot
// vi theo bang chu cai D L R U nen ta co dx nhu vay 
// D L R U
bool have = false; // check xem co duong di toi o (n, n)

// quay lui khi chuot dang o o thu (x,y)
// string path: duong di
void backTrack(int x, int y, string path){
	
	// neu chuot da di den o cuoi cung
	if(x == n && y == n){
		have = true;
		cout << path << " ";
		return;
	}
	int pos = 0; // vi tri trong dx
	for(auto p: dx){
		// neu o tiep theo = 1 va chua xet thi ta goi de quy tai o do
		if(A[x + p.f][y + p.s] == 1 && !vis[x + p.f][y + p.s]){
			vis[x + p.f][y + p.s] = true; // danh dau la da xet
			// goi tiep de quy voi new path
			backTrack(x + p.f, y + p.s,
			path += (pos == 0? 'D' : (pos == 1? 'L' : (pos == 2? 'R' : 'U'))));
			
			// tra lai ket qua cho nhung lan goi de quy tiep theo
			vis[x + p.f][y + p.s] = false;
			path.erase(path.length() - 1);
		}
		pos++;
	}
	
	
}
	
void solution(){
	cin >> n;
	have = false;
	A.assign(n + 5, vector<int>(n + 5, 0)); 
	vis.assign(n + 5, vector<bool>(n + 5, false));
	// reset for new test
	
	for(int i=1; i<=n; i++) for(int j=1; j<=n; j++) cin >> A[i][j]; // nhap
	
	// neu o (1, 1) == 0 thi chuot ko the di chuyen
	if(A[1][1] == 0){
		cout << -1 << endl;
		return;
	}	
	
	vis[1][1] = true;
	backTrack(1, 1, "");
	
	// in ket qua
	if(!have) cout << -1;
	cout << endl;
	
}

int main(){
	int test = 1;
	cin >> test; // for multi test
	
	while(test--) solution();
	
	return 0;
}
