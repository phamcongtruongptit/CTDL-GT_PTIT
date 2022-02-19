#include<bits/stdc++.h>
using namespace std ;
long long U[1002] ; 
void tinh() {
    U[1] =1 ; 
    int i2 = 1 , i3 = 1 , i5 = 1 ; 
    for(int i=2 ; i<=1000 ; i++) {
        U[i] = min(U[i2]*2 , min(U[i3]*3 , U[i5] * 5)) ; 
        if(U[i] == U[i2] *2) i2++ ; 
        if(U[i] == U[i3] *3) i3++ ; 
        if(U[i] == U[i5] *5) i5++ ; 
    }
}
main(){
    tinh() ; 
    int t ; 
    cin>>t ; 
    while(t--) {
        int n ; cin>>n ; 
        cout<<U[n]<<endl ; 
    }
}
/*Số Ugly là các số chỉ có ước số là 2, 3, 5. Theo qui ước số 1 cũng là 1 số Ugly. 
Dưới đây là 11 số Ugly đầu tiên: 1, 2, 3, 4, 5, 6, 8, 9, 10, 12, 15. Cho số tự nhiên N, nhiệm vụ của bạn là tìm số Ugly thứ N.
Input:  Dòng đầu tiên đưa vào số lượng bộ test T.  Những dòng kế tiếp đưa vào các bộ test. 
Mỗi bộ test là một số tự nhiên N được viết trên một dòng. T, N thỏa mãn ràng buộc: 1 ≤ T ≤ 100;  1 ≤ N ≤ 104.
Output: Đưa ra kết quả mỗi test theo từng dòng.
Ví dụ:
Input
Output
2
10
4

12
4
*/