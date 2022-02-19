#include<bits/stdc++.h>
using namespace std;

/*

*/

typedef pair<int, int> pii; // thay the pair<int, int> = pii
#define f first // thay the first = f
#define s second // thay the second = s

int A[15][15] = {}, n;  
vector<pii> dx = {{1, 0}, {0, 1}}; // dieu huong cho chuot 
bool haveRoad = false; // co duong di toi o (n,n) hay ko

// string path: luu duong di cua chuot

void backTrack(int x, int y, string path){
	// in ket qua neu chuot di den o cuoi cung
	if(x == n && y == n){
		haveRoad = true;
		cout << path << " ";
	}
	for(auto p: dx){
		// neu o tiep theo = 1 thi chuot co the di
		if(A[x + p.f][y + p.s] == 1){
			backTrack(x + p.f, y + p.s, path += (p.f == 1? 'D' : 'R')); // vi D dung truoc R nen ta uu tien di D truoc
			path.erase(path.length() - 1, 1); // tra lai ket qua cua duong di tai o (x,y)
		}
	}
	
}

void solution(){
	haveRoad = false; 
	cin >> n;
	for(int i=1; i<=n; i++) for(int j=1; j<=n; j++) cin >> A[i][j]; // nhap
	
	// neu o (1, 1) = 0 thi chuot ko the di dau het
	if(A[1][1] == 0){
		cout << -1 << endl;
		return;
	}
	backTrack(1, 1, "");
	// neu haveRoad = false thi cout -1
	if(!haveRoad){
		cout << -1 << endl;
	}
	cout << endl;
}


int main(){
	int test = 1;
	cin >> test; // for multi test
	
	while(test--) solution();
	
	return 0;
}
