// Can Ngoc Binh
#include<bits/stdc++.h>
using namespace std;

/*
	goi ham quay lui tai thanh pho thu x va can di den thanh pho thu i trong hang thu x cua ma tran
*/
	
vector<vector<int>> A;

int ans = INT_MAX, n, min_dis = INT_MAX; // gan ket qua = INT_MAX va min_dis la min A[i][j]
int cost = 0; // chi phi
bool vis[100] = {}; // danh dau thanh pho thu i da xet hay chua


// quay lui tu thanh pho thu 2, count la bien dem so thanh pho da di duoc
void backTrack(int x, int count){
	
	for(int i=2; i<=n; i++){
		if(vis[i]) continue; // neu da xet thanh pho thu i thi bo qua
		cost += A[x][i]; // chi phi += A[x][i] la chi phi di tu thanh pho x den thanh pho i
		vis[i] = true; // danh dau
		
		// neu da di duoc n thanh pho thi update ans
		if(count == n){
			ans = min(ans, cost + A[i][1]);
		}
		else if(cost + min_dis < ans && count < n) backTrack(i, count + 1);
		
		// tra lai chi phi va mang danh dau cho lan goi de quy tiep theo
		vis[i] = false;
		cost -= A[x][i];
	}
	
	
}


void solution(){
	
	cin >> n;
	
	A.resize(n + 1, vector<int>(n + 1));
	
	// khoi tao va tinh min_dis
	for(int i=1; i<=n; i++) for(int j=1; j<=n; j++) cin >> A[i][j], min_dis = min(min_dis, A[i][j]);
	
	vis[1] = true; // gan vis[i] = true
	
	backTrack(1, 2);
	cout << ans << endl; // in kq
	
	
}

int main(){
	int test = 1;
//	cin >> test; // for multi test
	
	while(test--) solution();
	
	return 0;
}
