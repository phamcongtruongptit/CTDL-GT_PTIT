#include<bits/stdc++.h>
using namespace std ; 
int hang, cot ; 
int M[1005][1005] , C[1005][1005] ; // mảng c lưu giá trị nhỏ nhất đi từ 1.1 đến i j  của nó mà tổng nhỏ nhất
void input() {
    cin>>hang>>cot; 
    for(int i=1 ; i<=hang; i++)
        for(int j=1 ; j<=cot ; j++) cin>>M[i][j] ; 
}
int tinh(){
    memset(C ,   0 , sizeof(C)) ; 
    C[1][1] = M[1][1] ; // điểm ban đâu bắt buộc bằng ko.

    for(int i=2; i<=cot ; i++) {//khởi tạo khi đi ngang
        C[1][i]  = M[1][i] +  C[1][i-1] ; 
    }
    for(int i=2 ; i<=hang ; i++ ){ // khởi tạo khi đi dọc
        C[i][1] = M[i][1] +  C[i-1][1] ; 
    }

    for(int i=2 ; i<=hang ; i++){
        for(int j=2 ; j<=cot ; j++) {
            C[i][j] = min(M[i][j] + C[i-1][j] , min(M[i][j] + C[i][j-1] , M[i][j]+ C[i-1][j-1])); // 3 góc thì lấy 1 góc min nhất
        }
    }
    return C[hang][cot] ; 
}
main() {
    int t ; cin>>t ; 
    while(t--) {
        input() ; 
        cout<<tinh()<<endl ; 
    }
}
/*
Cho bảng A[] kích thước N x M (N hàng, M cột). Bạn được phép đi xuống dưới, đi sang phải và đi xuống ô chéo dưới. 
Khi đi qua ô (i, j), điểm nhận được bằng A[i][j].
Hãy tìm đường đi từ ô (1, 1) tới ô (N, M) sao cho tổng điểm là nhỏ nhất
Input:
Dòng đầu tiên là số lượng bộ test T (T ≤ 20).
Mỗi test gồm số nguyên dương N và M.
N dòng tiếp theo, mỗi dòng gồm M số nguyên A[i][j] (0 ≤ A[i] ≤ 1000).
Output: 
Với mỗi test, in ra độ dài dãy con tăng dài nhất trên một dòng.
Ví dụ:
Input
Output
1
3 3
1 2 3
4 8 2
1 5 3

 
8
Giải thích test: Đường đi (1, 1) à (1, 2) à (2, 3) à (3, 3).
*/