#include<bits/stdc++.h>
using namespace std  ; 
main() {
        int n , c ; 
        cin>>c>>n ; 
        int M[n+5]  ; 
        for(int i=1 ; i<=n ; i++) cin>>M[i] ; 
        int F[n+5][c+5] ; 
        memset(F , 0 , sizeof(F)) ; 

        for(int i=1 ; i<=n ; i++){
            for(int j=1; j<=c ; j++) {
                F[i][j] = F[i-1][j]  ; 
                if(j>=M[i]) F[i][j] = max(F[i-1][j] , F[i-1][j-M[i]] + M[i]) ; // nếu khối lượng trên xe có thể thêm
                // con bò thứ i vào. 
            }
        }

        cout<<F[n][c] <<endl ;  // trả với với c  cố định và n con cố định
    }

    /*
john có một đàn bò. Một ngày đẹp trời, anh ta quyết định mua xe tải với khả năng chở được C kg (1000 ≤ C ≤ 25000) để đưa 
những con bò đi xem phim. Cho số con bò là N (20 ≤ N ≤ 100) và khối lượng w[i] của từng con (đều nhỏ hơn C), hãy cho biết 
khối lượng bò lớn nhất mà John có thể đưa đi xem phim là bao nhiêu.
Input:
Dòng 1: 2 số nguyên C và N cách nhau bởi dấu cách
Dòng 2..N+1:   Ghi lần lượt các số nguyên: w[i]
Output:
Một số nguyên là tổng khối lượng bò lớn nhất mà John có thể mang đi xem phim.
Ví dụ:
Input
Output
259 5
81
58
42
33
61

242
*/