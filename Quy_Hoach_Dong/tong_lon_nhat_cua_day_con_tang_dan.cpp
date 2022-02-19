#include<bits/stdc++.h>
using namespace std ; 
int  n ; int M[1005] , F[1005] ; 
void input(){
    cin>>n ; 
    for(int i=1 ;i<=n; i++) cin>>M[i] ; 
}
int tongmax() {
    int tong =  0 ; 
    memset(F , 0 , sizeof(F)) ; 
    F[1] = M[1] ; 
    tong = max(F[1] , tong ) ; 

    for(int i=2 ; i<=n ; i++) {
        F[i] = M[i] ; 
        for(int j=1 ; j<i ; j++){
            if(M[j]<M[i]) 
                F[i] = max(F[i]  , F[j] + M[i]) ; // them duoc thang M[i] vao tong
        }// ý tưởng giống như bài dãy con tăng dài nhất. 
        tong = max(tong , F[i]) ; 
    }
    return tong ; 
}
void solve(){
    input() ; 
    cout<<tongmax()<<endl ; 
}
main(){
    int t  ; 
    cin>>t ; 
    while(t--) solve() ; 
}
/*Cho dãy số A[] gồm N số. Nhiệm vụ của bạn là tìm tổng lớn nhất của dãy con được sắp theo 
thứ tự tăng dần của dãy A[]. Ví dụ với dãy A[] = {1, 101, 2, 3, 100, 4, 5} ta có kết quả 
là 106 = 1 + 2 + 3 + 100. Với dãy A[] = {10, 7, 5} ta có kết quả là 10. Với dãy A[] = {1, 2, 3, 5} ta có kết quả là 11.
Input:
Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai dòng: dòng đầu tiên đưa vào N là số phần tử 
của dãy A[]; dòng tiếp theo đưa vào N số A[i]; các số được viết cách nhau một vài khoảng trống.
T, N, A[i] thỏa mãn ràng buộc: 1≤T≤100;  1≤N ≤103; 0≤A[i] ≤103.
Output:
Đưa ra kết quả mỗi test theo từng dòng.
Ví dụ:
Input
Output
3
7
1 101 2 3 100 4 5
3
10 7 5
4
1 2 3 5

106
10
11
*/