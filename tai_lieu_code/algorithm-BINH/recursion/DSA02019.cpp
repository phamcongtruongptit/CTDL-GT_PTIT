// Can Ngoc Binh
#include<bits/stdc++.h>
using namespace std;

/*
	y tuong dung mang vis[x][y] de danh dau duong di tu x den y
*/
	
vector<vector<int>> adj; // danh sach ke
vector<vector<bool>> vis; 
int ans = 0; // ket qua


// ham quay lui tai dinh u va step: do dai canh khi xet toi dinh u (do sau cua cay de quy)
void backTrack(int u, int step){
	ans = max(ans, step); // update ans
	for(auto x: adj[u]){
		// neu chua co canh u -> x
		if(!vis[u][x]){
			vis[u][x] = true;
			vis[x][u] = true;
			backTrack(x, step + 1);
			// tra lai ket qua cho lan goi de quy sau
			vis[u][x] = false;
			vis[x][u] = false;
		}
	}
	
	
}


void solution(){
	adj.clear(); // clear for new test
	ans = 0;
	int n, m;
	cin >> n >> m;
	adj.resize(n + 5);
	
	// tao danh sach ke
	for(int i=0; i<m; i++){
		int x, y;
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	
	
	for(int i=1; i<=n; i++){
		vis.assign(n + 1, vector<bool>(n + 1, false)); // reset vis
		backTrack(i, 1); // goi de quy tai dinh thu i
	}
	// in ket qua
	cout << ans - 1 << endl;
}


int main(){
	int test = 1;
	cin >> test; // for multi test
	
	while(test--) solution();
	
	return 0;
}
