#include<iostream>
using namespace std ; 
int n  ;  int M[10][10] ; 
void tao(){
    cin>>n ;
    for(int i=1 ; i<=n ; i++) {
        cin>>M[n][i] ; 
    }
}
void giatri() {
    for(int i= n  - 1 ; i >= 1 ; i--) {
        for(int j = 1 ; j <= n-1 ; j++ ) {
            M[i][j] = M[i+1][j] + M[i+1][j+1]; 
        }
    }
}
void in() {
    for(int i=1 ; i<=n ; i++) {
        cout<<"[" ; 
        for(int j=1 ; j<=i ; j++) {
            if(i==j) cout<<M[i][j]<<"] " ; 
             else cout<<M[i][j]<<" " ; 
        }
    }
}
void solution(){
    tao() ; 
    giatri() ; 
    in() ; 
    cout<<endl ; 
}
main() {
    int t;  cin>>t ; 
    while(t--) {
        solution() ; 
    }
}
/*Cho dãy số A[] gồm n số nguyên dương. Tam giác đặc biệt của dãy số A[] là tam 
giác được tạo ra bởi n hàng, trong đó hàng thứ n là dãy số A[], hàng i
 là tổng hai phần tử liên tiếp của hàng i+1 (1≤i≤n-1). Ví dụ A[] = {1, 2, 3, 4, 5},
  khi đó tam giác được tạo nên như dưới đây:
[48]
[20, 28]
[8, 12, 16]     
[3, 5, 7, 9 ]
[1, 2, 3, 4, 5 ]
            Input:
Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng tiếp theo đưa vào các bộ test. Mỗi bộ test gồm hai 
dòng: dòng thứ nhất đưa vào N là số lượng phần tử của dãy số A[]; dòng tiếp theo đưa vào N số của mảng A[].
T, N, A[i] thỏa mãn ràng buộc: 1≤T≤100; 1≤N, A[i] ≤10;
Output:
Đưa ra kết quả mỗi test theo từng dòng. Mỗi dòng của tam giác tổng được bao bởi ký tự [, ].
1
5

1 2 3 4 5
[48] [20 28] [8 12 16] [3 5 7 9 ] [1 2 3 4 5 ]
*/