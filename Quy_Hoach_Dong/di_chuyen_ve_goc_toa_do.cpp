#include<bits/stdc++.h>
using namespace std; 
long long C[26][26] ; //25
void tinh(){
    memset(C , 0 ,sizeof(C)) ; 
    for(int i=1 ; i<=25 ; i++) {
        C[i][0] = 1 ; 
        C[0][i] = 1 ; 
    }
    for(int i=1; i<=25 ; i++){
        for(int j=1 ; j<=25 ; j++){
            C[i][j] = C[i][j-1] + C[i-1][j] ; 
        }
    }
}

main() {
    int t ; cin>>t ; 
    while(t--) {
        int m , n ; cin>> n>>m ; 
        tinh() ; 
        cout<<C[n][m]<<endl ; 
    }
}
/*
iả sử bạn đang ở điểm có tọa độ nguyên dương (n,m) và cần dịch chuyển về tọa độ (0,0). Mỗi bước dịch 
chuyển bạn chỉ được phép dịch chuyển đến tọa độ (n-1, m) hoặc (n, m-1); Từ ô (0,m), hoặc (n, 0) thì 
có thể di chuyển 1 bước để về gốc (0,0).
Hãy đếm số cách bạn có thể dịch chuyển về tọa độ (0,0).
Input:
Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là bộ n, m được viết cách nhau một vài khoảng trống.
T, n, m thỏa mãn ràng buộc: 1≤T≤100;  1≤n, m ≤25.
Output:
Đưa ra kết quả mỗi test theo từng dòng.
Ví dụ:
Input
Output
3
3 2
3 6
3 0

10
84
1
*/