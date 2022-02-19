#include<bits/stdc++.h>
using namespace std ; 
int a,b,c ; 
string A,B,C ; 
int F[105][105][105] ; 
void input(){
    cin>>a>>b>>c ; 
    cin>>A>>B>>C ; 
}
int longmax(){
    memset(F , 0 , sizeof(0) ) ; 
    for(int i=1 ; i<= a ; i++) {
        for(int j=1 ; j<=b ; j++) {
            for(int k=1 ; k<=c ; k++) {
                if(A[i-1] == B[j-1] and A[i-1] == C[k-1]) F[i][j][k] = F[i-1][j-1][k-1] + 1 ;// nếu bằng nhau 
                else F[i][j][k] = max(F[i-1][j][k] , max(F[i][j-1][k] , F[i][j][k-1] )) ;  //nếu không bằng nhau : ý tưởng tương tự bài xâu con
                // chung dài nhất
            }
        }
    }
    return F[a][b][c] ; 
}
void solve(){
    input() ; 
    cout<<longmax()<<endl ; 
}

main() {
    int t; cin>>t ;
    while(t--) solve() ; 
}
/*Cho ba xâu ký tự X, Y, Z. Nhiệm vụ của bạn là tìm độ dài dãy con chung dài nhất có mặt trong cả ba xâu.
Input:
Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai dòng: dòng đầu tiên đưa vào độ dài xâu 
X, Y, X; dòng tiếp theo đưa vào ba xâu X, Y, Z.
T, X, Y, Z thỏa mãn ràng buộc: 1 ≤ T ≤ 100;  1 ≤ size(X), size(Y), size(Z) ≤ 100.
Output:
Đưa ra kết quả mỗi test theo từng dòng.
Ví dụ:
Input
Output
2
5 8 13
geeks geeksfor geeksforgeeks
7 6 5
abcd1e2 bc12ea bd1ea

5
3
*/