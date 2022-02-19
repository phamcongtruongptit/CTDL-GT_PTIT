#include<iostream>
using namespace std ; 
int n ; 
long long F[55]  ;
void input(){
    cin>> n ; 
    F[1] = 1 ; F[2] = 2 ; F[3] = 4 ; 
    for(int i=4 ; i<=n ; i++) {
        F[i] = F[i-1] + F[i-2] + F[i-3] ; 
    }
}
main() {
    int t ; cin>>t ; 
    while(t--) {
        input()  ; 
        cout<<F[n]<<endl ; 
    }
}
/*Một con ếch có thể nhảy 1, 2, 3 bước để có thể lên đến một đỉnh cần đến. Hãy đếm số các cách con ếch có thể nhảy đến đỉnh.
Input:
Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là số n là số bước con ếch có thể lên được đỉnh.
T, n thỏa mãn ràng buộc: 1≤T≤100;  1≤n ≤50.
Output:

Đưa ra kết quả mỗi test theo từng dòng.
Ví dụ:

Input

Output

2
1
5

1
13
*/