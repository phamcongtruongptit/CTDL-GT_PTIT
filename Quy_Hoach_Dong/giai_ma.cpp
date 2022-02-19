#include<bits/stdc++.h>
using namespace std ; 
// Gọi F[i] là số cách ghép được cho đến kí tự thứ i
// Neu S[i] !=0 . THì ắt hẳn đã có sẵn F[i-1] cách ghép. Vì từ 1 - 9 sẽ có 1 kí tự tương đương ghép vòa
// Nếu cái S[i] đó có thể ghép với kí tự trước: có 2 cách để ghép như trên code. Thì số cách ghép sẽ thêm một lượng F[i-2] cách vào
// suy ra nếu ghép được với kí tự trước thì sẽ có F[i-1] + F[i-2] cách ghép. 
// + NẾu kí tự "0" đứng đầu thì không có cách ghép nào.
main() {
    int t ; cin>>t ; 
    while(t--) {
        string s ; cin>>s ; 
        if(s[0] =='0'){
            cout<<0<<endl ; 
            continue ; 
        }
        int n = s.size() ; 
        int F[n+5] ; 
        memset(F , 0 ,sizeof(F)) ; 
        F[0] = 1 ; F[1] = 1 ; 
        for(int i=2 ; i<=n ; i++) {
            if(s[i-1] != '0') F[i] = F[i-1] ; 
            if(s[i-2] == '1' or (s[i-2] == '2' and s[i-1] < '7')) F[i]  = F[i] + F[i-2] ; 
        }
        cout<<F[n]<<endl ; 
    }
}
/*
Một bản tin M đã mã hóa bí mật thành các con số theo ánh xạ như sau: ‘A’->1, ‘B’->2, .., ‘Z’->26. Hãy cho biết có bao
 nhiêu cách khác nhau để giải mã bản tin M. Ví dụ với bản mã M=”123” nó có thể được giải mã thành ABC (1 2 3), LC (12 3), AW(1 23).
Input:
Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là một xâu ký tự số M.
T, M thỏa mãn ràng buộc: 1≤T≤100;  1≤length(M)≤40.
Output:
Đưa ra kết quả mỗi test theo từng dòng.
Ví dụ:
Input
Output
2
123
2563

3
2
*/