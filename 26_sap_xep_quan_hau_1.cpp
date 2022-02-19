#include<iostream>
using namespace std ; 
int n , count ; 
bool cot[100] , xuoi[100] , nguoc[100] ; 
void input() {
    cin>>n ; count = 0 ; 
    for(int i=1 ; i<=n ;i++) cot[i] = true ; 
    for(int i=1 ; i<2*n ; i++) {
        xuoi[i] = true ;
        nguoc[i] = true ; 
    }
}
void TRY(int i ) {
    for(int j=1 ; j<=n ; j++) {
        if(cot[j] and xuoi[i-j+n] and nguoc[i+j-1] ){
            cot[j] = false ; xuoi[i-j+n] = false ; nguoc[i+j-1] = false ; 
            if(i==n) count++ ; 
            else TRY(i+1) ;
            cot[j] = true ; xuoi[i-j+n] = true ; nguoc[i+j-1] = true ;            
        }
    }
}
void solve() {
    input() ; 
    TRY(1) ; 
    cout<<count<<endl ; 
}
main() {
    int t ;cin>>t ; 
    while(t--) {
        solve() ; 
    }
}
/*Cho một bàn cờ vua có kích thước n * n, ta biết ràng quân hậu có thể di 
chuyển theo chiều ngang, dọc, chéo. Vấn đề đặt ra rằng,
 có n quân hậu, bạn cần đếm số cách đặt n quân hậu này lên bàn cờ sao cho với 
 2 quân hậu bất kì, chúng không “ăn” nhau.
Input: Dòng đầu ghi số bộ test T (T<5). Mỗi bộ test ghi một số nguyên dương n 
duy nhất (không quá 10)
Output:  Ghi kết quả mỗi bộ test trên một dòng. Số cách đặt quân hậu.
1

4
2
*/