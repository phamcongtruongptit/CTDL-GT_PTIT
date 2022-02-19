#include<bits/stdc++.h>
using namespace std ; 
string s1 , s2 ; 
int n1,n2  , F[1005][1005] ; 
 // F[n1][n2]
 // neu s1[i] == s2[j] thi F[i][j] = F[i-1][j-1] + 1 ; 
 // neu s1[i] != s2[j] thi F[i][j] = max(f[i-1][j] ,F[i][j-1])
void input() {
    cin>>s1>>s2  ; 
    n1 = s1.size() ; 
    n2 = s2.size() ; 
}
int longmax() {
    memset(F ,0 , sizeof(F)) ;  // lenh dien tat ca cac vi tri trong ma tran bang 0
    for(int i=1 ; i<=n1 ; i++){
        for(int j=1 ; j<=n2 ; j++) {
            if(s1[i-1] == s2[j-1] ) F[i][j] = F[i-1][j-1] + 1 ; 
            else F[i][j] = max(F[i-1][j] , F[i][j-1]) ;  
        }
    }
    return F[n1][n2] ; 
}
void solve(){
    input() ; 
    cout<<longmax()<<endl ; 
}
main() {
    int t ; cin>>t ; 
    while(t--) solve() ; 
}
/*
Input
Cho 2 xâu S1 và S2. Hãy tìm xâu con chung dài nhất của 2 xâu này (các phần tử không nhất thiết phải liên tiếp nhau).

Input: Dòng đầu tiên là số lượng bộ test T (T ≤ 20). Mỗi test gồm hai dòng, mô tả xâu S1 và S2, mỗi xâu có độ dài không quá 1000 và chỉ gồm các chữ cái in hoa.

Output:  Với mỗi test, in ra độ dài dãy con chung dài nhất trên một dòng.

Ví dụ:

Input

Output

2

AGGTAB

GXTXAYB

AA

BB

4

0

Giải thích test 1: Dãy con chung là G, T, A, B.
*/ 