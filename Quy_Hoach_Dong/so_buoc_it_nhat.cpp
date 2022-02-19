#include<bits/stdc++.h>
using namespace std ; 
int M[1005] , n  , F[1005]; 
// ý tưởng tương tự như bài dãy con tăng dài nhất. Khác mỗi dấu <= 
int daycondai(){
    int kq = 0 ; 
    F[1] = 1 ; 
    for(int i=2 ; i<=n ; i++){
        F[i] = 1 ; 
        for(int j=1 ; j<i ; j++ ){
            if(M[j] <= M[i]) F[i] = max( F[i] , F[j] + 1 ) ; // do la sap xep lai nen <=
            // them duoc thang M[i] vao
        }
        kq = max(kq  , F[i]) ; 
    } 
    return kq ; 
}
main(){
    int t ; 
    cin>>t ; 
    while(t--) {
        cin>>n ; 
        for(int i=1 ; i<=n ; i++) cin>>M[i] ; 
        cout<<n-daycondai()<<endl ; 
    }
}
/*Cho mảng A[] gồm N số nguyên. Nhiệm vụ của bạn là sắp xếp lại mảng số với số lượng bước là ít nhất. Tại mỗi bước, bạn chỉ được phép chèn phần tử bất kỳ của mảng vào vị trí bất kỳ trong mảng. Ví dụ A[] = {2, 3, 5, 1, 4, 7, 6 }sẽ cho ta số phép chèn ít nhất là 3 bằng cách lấy số 1 chèn trước số 2, lấy số 4 chèn trước số 5, lấy số 6 chèn trước số 7 ta nhận được mảng được sắp.

Input:

Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai dòng: dòng thứ nhất là một số N; dòng tiếp theo đưa vào N số của mảng A[]; các số được viết cách nhau một vài khoảng trống.
T, N, A[i] thỏa mãn ràng buộc: 1≤T≤100;  1≤N ≤1000; 1≤A[i] ≤1000.
Output:

Đưa ra kết quả mỗi test theo từng dòng.
Ví dụ:

Input

Output

1
7
2 3 5 1 4 7 6

3
*/