#include<bits/stdc++.h>
using namespace std ;
long long mod  = 1e9 + 7 ; 
void solve() {
    int n , k ; cin>>n >> k ; 
    int A[n+5]    ; 
    long long F[k+5] ;
    memset(F , 0 , sizeof(F)) ;  
    for(int i=1 ; i<=n; i++) cin>>A[i] ; 
    F[0] =1 ; 
    for(int i=1 ; i<=k ; i++){
        for(int j=1 ; j<=n ; j++) {
            if(i>=A[j]) 
                F[i] = (F[i] + F[i-A[j]]) % mod; 
        }
    }
    cout<<F[k]<<endl ; 
}
 main() {
     int t ;cin>>t ; 
     while(t--) {
        solve() ; 
     }
 }
/*Cho một mảng A[] gồm N số nguyên và số K. Tính số cách lấy tổng các phần tử của A[] để bằng K. 
Phép lấy lặp các phần tử hoặc sắp đặt lại các phần tử được chấp thuận. Ví dụ với mảng A[] = {1, 5, 6}, K = 7 ta có 6 cách sau:
7 = 1 + 1 + 1+1 + 1 + 1+1 (lặp số 1 7 lần)
7 = 1 + 1 + 5 (lặp số 1)
7 = 1 + 5 + 1 (lặp và sắp đặt lại số 1)
7 = 1 + 6
7 = 6 + 1
Input:
Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai phần: phần thứ nhất đưa vào N và K; dòng tiếp 
theo đưa vào N số của mảng A[]; các số được viết cách nhau một vài khoảng trống.
T, N, K, A[i] thỏa mãn ràng buộc: 1≤T≤100;  1≤N≤1000; 1≤A[i]≤100.
Output:
Đưa ra kết quả mỗi test theo từng dòng. Khi kết quả quá lớn đưa ra kết quả dưới dạng modulo với 109+7.
Ví dụ:
Input
Output
2
3 7
1 5 6
4 14
12 3 1 9

6
150
*/