#include<iostream>
#include<cmath>
using namespace std;
int A[10][10], B[10][10], res;

// ham tinh ket qua
void show(){
	int sum = 0;
	for(int i=0; i<8; i++){
		for(int j=0; j<8; j++) if(B[i][j] == 1) sum += A[i][j]; // tinh tong
	}
	res = max(res, sum); // update result
}

// ham check xem duong cheo va hang co con hau nao trung ko
bool gameIsEasy(int r, int c){
	for(int i=0; i<8; i++){
		if(B[r][i] == 1 || B[i][c] == 1) return false;// neu trung hang i thi return false;
	}
	
	// check duong cheo: duong cheo cua o (i,j) duoc tinh la (x,y) sao cho abs(x-i) = abs(y-j)
	for(int i=0; i<8; i++){
		for(int j=0; j<8; j++){
			if(abs(i-r) == abs(j - c)){
				if(B[i][j] == 1) return false; // neu trung return false
			}
		}
	} 
	return true;
}
void backTrack(int p, int g){
	for(int i=0; i<8; i++){
		// check xem duong cheo va hang co con hau nao trung ko
		if(gameIsEasy(i, g)){
			B[i][g] = 1; // danh dau da xet o (i, g)
			if(p == 7 || g == 7) show();
			else backTrack(p+1, g+1);
			B[i][g] = 0; // tra lai ket qua cho lan goi de quy sau
		}
			 
	}
}
int main(){
	int test;
	cin >> test;
	while(test--){
		res = 0;
		for(int i=0; i<8; i++){
			for(int j=0; j<8; j++) cin >> A[i][j], B[i][j] = 0;
		} // nhap
		
		
		backTrack(0, 0);
		cout << res << endl; // in ket qua
	}
}
