#include<bits/stdc++.h>
using namespace std ; 
long long mod  = 1e9 + 7 ; 

main() {
    int t ; cin>>t ; 
    while(t--) {
        int n , k ; 
        long long ans =1  ; 
        cin>>n>>k ; 
        for(int i=0 ; i<=k-1 ; i++) {
            ans =((ans % mod) * (n-i) ) % mod ; 
        }
        cout<<ans<<endl ; 
    }
}
/*
Cho số hai số n, k. Hãy tìm P(n,k) theo modulo 109+7.
Input:
Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là một cặp số n, k được viết trên một dòng.
T, n, k thỏa mãn ràng buộc: 1 ≤ T ≤ 100;  1 ≤ n,k ≤ 1000.
Output:
Đưa ra kết quả mỗi test theo từng dòng.
Ví dụ:
Input
Output
2
5 2
4 2

20
12
*/