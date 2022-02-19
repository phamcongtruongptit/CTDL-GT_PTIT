#include<bits/stdc++.h>
using namespace std ; 
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
// + Gọi F[i] là số cách ghép được cho đến kí tự thứ i
// + Neu S[i] !=0 . THì ắt hẳn đã có sẵn F[i-1] cách ghép. Vì từ 1 - 9 sẽ có 1 kí tự tương đương ghép vòa
// - Nếu cái S[i] đó có thể ghép với kí tự trước: có 2 cách để ghép như trên code. Thì số cách ghép sẽ thêm một lượng F[i-2] cách vào
// suy ra nếu ghép được với kí tự trước thì sẽ có F[i-1] + F[i-2] cách ghép. 
// + NẾu kí tự "0" đứng đầu thì không có cách ghép nào. 