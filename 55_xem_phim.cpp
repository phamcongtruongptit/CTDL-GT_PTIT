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
                if(j>=M[i]) F[i][j] = max(F[i-1][j] , F[i-1][j-M[i]] + M[i]) ; 
            }
        }
        cout<<F[n][c] <<endl ; 
    }
// tương tựn như bài cái túi. CHọn hoặc không chọn. quy hoạch động ma trận