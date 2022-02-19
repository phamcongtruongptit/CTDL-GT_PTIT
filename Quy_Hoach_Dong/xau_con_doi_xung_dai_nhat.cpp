#include<bits/stdc++.h>
using namespace std  ; 
string s  ; int F[1005][1005] ; 
int n ; 
void input() {
    cin>>s ;
    n = s.size() ;  
}
int doixungmax() {
    memset(F , 0 ,sizeof(F)); 
    for(int i=0 ; i<n ; i++) F[i][i] = 1 ; 
    for(int k = 1; k<n  ; k++) {
        for(int i=0 ; i<=n-k-1 ; i++){
            int j=i+k ; 
            if(k==1) {
                if(s[i] == s[j]) F[i][j] =1 ; 
            } else if(s[i] == s[j]) F[i][j] = F[i+1][j-1] ; // F[i][j] ở đây là kiểm tra xem xâu con từ vị trí i-->j có đối xứng không
        }
    }
     int max  = 0 ; 
     for(int i=0 ; i<n-1 ; i++) {
         for(int j=i ; j<n ; j++) {
             if(F[i][j] == 1 and j-i+1 > max) max = j-i+1 ;  
         }
     }
     return max; 
}
void solve() {
    input() ; 
    cout<<doixungmax()<<endl ; 
}
main() {
    int t  ; cin>>t  ; 
    while(t--) solve() ; 
}
/*Cho xâu S chỉ bao gồm các ký tự viết thường và dài không quá 1000 ký tự.
Hãy tìm xâu con đối xứng dài nhất của S.
Input:
Dòng đầu tiên là số lượng bộ test T (T ≤ 10).
Mỗi test gồm một xâu S có độ dài không vượt quá 1000, chỉ gồm các kí tự thường.
Output:  Với mỗi test, in ra đáp án tìm được.
Ví dụ:
Input
Outpu
2
abcbadd
aaaaa
 
5
5
*/