#include<bits/stdc++.h>
using namespace std ;
int F[10005] ; // mảng F lưu số lượng số nhỏ nhất của các số n.
void tinh() {
    F[0]= 0  ; F[1] = 1 ; F[2] =2 ; F[3] = 3 ; 
    for(int i=4 ; i<=10000 ; i++) {
        F[i] = i ; 
        for(int j=1 ; j<=sqrt(i) ; j++ ){
            F[i] = min(F[i] , F[i-j*j] + 1) ; 
        }
    }
}
main() {
    int t ; cin>> t ; 
    tinh() ; 
    while(t--) {
        int n ; cin>>n  ;   
        cout<<F[n] <<endl ; 
    }
}
/*Mọi số nguyên dương N đều có thể phân tích thành tổng các bình phương của các số nhỏ hơn N. 
Ví dụ số 100 = 102 hoặc 100 = 52 + 52 + 52 + 52. Cho số nguyên dương N. 
Nhiệm vụ của bạn là tìm số lượng ít nhất các số nhỏ hơn N mà có tổng bình phương bằng N.
Input:
Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào các bộ test. Mỗi test là một số tự nhiên N được viết trên 1 dòng.
T, N thỏa mãn ràng buộc: 1≤T≤100;  1≤N≤10000.
Output:
Đưa ra kết quả mỗi test theo từng dòng.
Ví dụ:
Input
Output
3
100
6
25

1
3
1
*/