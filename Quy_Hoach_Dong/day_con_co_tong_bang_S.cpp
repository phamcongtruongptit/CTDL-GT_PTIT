#include<bits/stdc++.h>
using namespace std ; 
int n , s , M[205] , F[40008] ; 
void input(){
    cin>>n>>s ; 
    for(int i=1  ; i<=n ; i++) {
        cin>>M[i] ; 
    }
}
int checktong(){
    memset(F , 0 , sizeof(F)) ; 
    F[0] = 1 ; 
    for(int i=1 ; i<=n ; i++){
        for(int j=s ; j>=M[i] ; j--){
            if(F[j] == 0 and F[j-M[i]] == 1) F[j] =1 ;
        }
    }
    return F[s] ; 
} 
void solve() {
    input() ;
    if(checktong() ) cout<<"YES"<<endl ; 
    else cout<<"NO"<<endl  ; 
}
main(){
    int t  ; cin>>t ; 
    while(t--){
        solve() ; 
    }
}
/*Cho N  số nguyên dương tạo thành dãy A={A1, A2, ..., AN}. Tìm ra một dãy con của dãy A (không nhất thiết là các phần tử liên tiếp trong dãy) có tổng bằng S cho trước.

Input: Dòng đầu ghi số bộ test T (T<10).  Mỗi bộ test có hai dòng, dòng đầu tiên ghi hai số nguyên dương N và S (0 < N ≤ 200) và S (0 < S ≤ 40000). Dòng tiếp theo lần lượt ghi N số hạng của dãy A là các số A1, A2, ..., AN (0 < Ai ≤ 200).

Output:  Với mỗi bộ test, nếu bài toán vô nghiệm thì in ra “NO”, ngược lại in ra “YES”

Ví dụ:

Input

Output

2

5 6
1 2 4 3 5

10 15

2 2 2 2 2 2 2 2 2 2

YES

NO*/