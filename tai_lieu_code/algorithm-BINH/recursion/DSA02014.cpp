// Can Ngoc Binh
#include<bits/stdc++.h>
using namespace std;

/*
	y tuong la dung 1 map danh dau nhung string nam trong dictionary
	string path: string thu duoc khi di qua nhung o (i,j)
	neu map[path] = true thi cout << path;
*/
	
vector<vector<char>> A(10, vector<char>(10, '\0'));
vector<vector<bool>> vis;
map<string, bool> cts;
bool have = false; // have: co ton tai string nao ko

void backTrack(int x, int y, string path){
	
	// neu map[path] = true thi path trung voi 1 string trong dic[]
	if(cts[path]){
		have = true;
		cout << path << " ";
	}
	
	// xet 8 o xung quanh o thu (i, j)
	for(int i = x - 1; i <= x + 1; i++){
		for(int j=y-1; j <= y + 1; j++){
			if(vis[i][j] || A[i][j] == '\0') continue; // neu da xet o (i, j) thi bo qua
			vis[i][j] = true; // danh dau vis[i][j] = true;
			backTrack(i, j, path += A[i][j]); // goi de quy voi path += A[i][j]
			
			// tra lai vis va path cho lan goi de quy tiep theo
			vis[i][j] = false;
			path.erase(path.length() - 1);
		}
	}
	
	
}


void solution(){
	have = false;
	cts.clear();
	// clear for new test
	
	int k, n, m;
	cin >> k >> n >> m;
	A.assign(n + 5, vector<char>(m + 5, '\0'));
	vector<string> v(k);
	for(int i=0; i<k; i++) cin >> v[i], cts[v[i]] = true; //danh dau string trong dic[];
	
	for(int i=1; i<=n; i++) for(int j=1; j<=m; j++) cin >> A[i][j]; // nhap
	
	
	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			vis.assign(n + 5, vector<bool>(m + 5, false)); // khoi tao vis[i][j] = false;
			
			string path = "";
			path += A[i][j]; // gan path tai o (i, j)
			vis[i][j] = true; // danh dau da xet o (i,j)
			backTrack(i, j, path); // goi de quy tai o (i, j)
		}
	}
	
	// neu have = false thi cout -1
	if(!have) cout << -1;
	cout << endl;
	
}

int main(){
	int test = 1;
	cin >> test; // for multi test
	
	while(test--) solution();
	
	return 0;
}
