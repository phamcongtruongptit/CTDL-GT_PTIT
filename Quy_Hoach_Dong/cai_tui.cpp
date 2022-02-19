#include<bits/stdc++.h>
using namespace std ; 
int F[1002][1002] , N , V , C[1002] ,  A[1002] ; 
void input() {
	cin>>N>>V ; 
	for(int i=1 ; i<=N ; i++) cin>>A[i] ; // khối lượng từng đồ vật
	for(int i=1 ; i<=N ; i++) cin>>C[i] ; // mảng giá trị từng đồ vật
}
int giatrimax() {
	for(int i=0 ; i<=N ; i++) F[i][0] = 0 ; 
	for(int i=0 ; i<=V ; i++) F[0][V] = 0 ; 
	for(int i=1 ; i<=N ; i++){
		for(int j=1 ; j<=V ; j++) {
			F[i][j] = F[i-1][j] ; 
			if(j>=A[i]) F[i][j] = max(F[i-1][j] , F[i-1][j-A[i]] + C[i] ) ; // nếu không gian đó chứa thêm được vật thứ i
		}
	}
	return F[N][V] ; 
}
void solve() {
	input() ; 
	cout<<giatrimax()<<endl ; 
}
main() {
	int t ; cin>>t ; 
	while(t--)	solve()  ; 
}
/*
Một người có cái túi thể tích V (V<1000). Anh ta có N đồ vật cần mang theo (N≤1000), 
mỗi đồ vật có thể tích là A[i] (A[i]≤100) và giá trị là C[i] (C[i]≤100). Hãy xác định tổng giá trị lớn nhất của các 
đồ vật mà người đó có thể mang theo, sao cho tổng thể tích không vượt quá V.
Input
Dòng đầu ghi số bộ test T (T<10)
Mỗi bộ test gồm ba dòng. Dòng đầu ghi 2 số N và V. Dòng tiếp theo ghi N số của mảng A. Sau đó là một dòng ghi N 
số của mảng C.
Dữ liệu vào luôn đảm bảo không có đồ vật nào có thể tích lớn hơn V.
Output

Với mỗi bộ test, ghi trên một dòng giá trị lớn nhất có thể đạt được.
Ví dụ

Input
Output
1
15 10
5 2 1 3 5 2 5 8 9 6 3 1 4 7 8
1 2 3 5 1 2 5 8 7 4 1 2 3 2 1

15
*/