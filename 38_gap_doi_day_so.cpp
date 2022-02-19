#include<bits/stdc++.h>
using namespace std; 
int gapdoi(int n , long long k ) {
    if( n==0 ) return 1 ; 
   long long len = pow(2 , n-1 ) ;  
    if( k == len ) return n ; 
    if (k<len) return gapdoi(n-1 , k) ; 
    return gapdoi(n-1 , k - len) ; 
}
main() {
    int t ; cin>>t  ;
    while(t--) {
        int n  ; long long k  ;
        cin>>n>>k  ; 
        cout<<gapdoi(n, k)<<endl ; 
    }
}   
/*Một dãy số tự nhiên bắt đầu bởi con số 1 và được thực hiện N-1 phép biến đổi “gấp đôi” dãy số như sau:
Với dãy số A hiện tại, dãy số mới có dạng A, x, A trong đó x là số tự nhiên bé nhất chưa xuất hiện trong A.
Ví dụ với 2 bước biến đổi, ta có [1] à [1 2 1] à [1 2 1 3 1 2 1].
Các bạn hãy xác định số thứ K trong dãy số cuối cùng là bao nhiêu?
Input:
Dòng đầu tiên là số lượng bộ test T (T ≤ 20).
Mỗi test gồm số nguyên dương N và K (1 ≤ N ≤ 50, 1 ≤ K ≤ 2N - 1).
Output: 
Với mỗi test, in ra đáp án trên một dòng.
2
3 2
4 8

2
4
Giải thích test 1: Dãy số thu được là [1, 2, 1, 3, 1, 2, 1].
Giải thích test 2: Dãy số thu được là [1, 2, 1, 3, 1, 2, 1, 4, 1, 2, 1, 3, 1, 2, 1].*/
// #include<iostream>
// #include<math.h>
// using namespace std ;
// int n ; long long k ; 
// void input() {
//     cin>>n>>k ; 
// }
// // Bài này không nhất thiết phải dùng hàm tính chia để trị lũy thừa.
// long long poww(int n) {
//     if (n==0) return 1 ; 
//     long long x  = poww(n/2) ; 
//     if(n % 2 == 0) return x*x ; 
//     else return 2*x*x ;
// }
// void solution() {
//     input(); 
//     long long t = poww(n) / 2 ; 
//     while(true) {
//         if( k == t ) {
//             cout<<n<<endl ; break  ; 
//         }
//         if ( k==1 ) {
//             cout<<1<<endl ; break ; 
//         }
//         if (k > t ) k  = t - (k - t ) ; 
//         n-- ; 
//         t/=2 ; 
//     }
// }
// main() {
//     int t; cin>> t ; 
//     while(t--){
//         solution() ; 
//     }
// }