#include<bits/stdc++.h>
using namespace std ; 
string s  ; int n ; 
int F[105][105] ; 
void input() {
    cin>>n ;
    cin>>s ; 
    n = s.size() ; 
}
int longmax() {
    memset(F , 0 , sizeof(F)) ; 
    for(int i=1 ; i<=n ; i++){
        for(int j=1  ; j<=n ; j++) {
            if(s[i-1] == s[j-1] and i!=j) F[i][j] = F[i-1][j-1] + 1; 
            // tương tự như bài xâu con chung dài nhất nhưng thêm i != j
            else F[i][j] = max(F[i-1][j] , F[i][j-1]) ; 
        }
    }
    return F[n][n] ; 
}
void solve() {
     input() ; 
    cout<<longmax()<<endl ; 
}
main(){
    int t ; cin>>t ; 
    while(t--) solve() ; 
}
/*Cho xâu ký tự S. Nhiệm vụ của bạn là tìm độ dài dãy con lặp lại dài nhất trong S. Dãy con có thể chứa các phần tử không liên tiếp nhau.
Input:
Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai dòng: dòng đầu tiên đưa vào độ dài xâu str; dòng tiếp theo đưa vào xâu S.
T, str thỏa mãn ràng buộc: 1 ≤ T ≤ 100;  1 ≤ size(S) ≤ 100.
Output:
Đưa ra kết quả mỗi test theo từng dòng.
Ví dụ:
Input
Output
2
3
abc
5
axxxy

0
2
*/
