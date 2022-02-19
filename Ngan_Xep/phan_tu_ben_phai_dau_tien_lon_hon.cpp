#include<bits/stdc++.h>
using namespace std ; 
// tư tưởng: đẩy từ cuối ra đầu của mảng vào stack. Sau đó xem phần tử trước phần tử đã 
// xét xem có giá trị nào trong strack lớn hơn nó hay ko
// bằng cách pop ra. Nếu không thì -1
void solve(){
    int  n ; cin>> n ; 
    int M[n] , ans[n] ; // mảng ans là mảng kết quả
    for(int i=0 ; i<n ; i++){
        cin>>M[i] ; 
    }
    stack <int> st ; 
    for(int i=n-1  ; i>=0 ; i--){
        while(!st.empty() and st.top() <= M[i] ) st.pop() ; // pop ra cho đến khi ngăn xếp hết hoặc top > M[i]
        if(st.empty()) ans[i] = -1  ; 
        else ans[i] = st.top() ; 
        st.push(M[i]) ; 
    }
    for(int i=0 ; i<n ; i++) cout<<ans[i]<<" " ; 
    cout<<endl ; 
}
main(){
    int t ; cin>>t  ; 
    while(t--){
        solve() ; 
    }
}
/*Cho dãy số A[] gồm N phần tử. Với mỗi A[i], bạn cần tìm phần tử 
bên phải đầu tiên lớn hơn nó. Nếu không tồn tại, in ra -1.
Input:
Dòng đầu tiên là số lượng bộ test T (T ≤ 20).
Mỗi test bắt đầu bởi số nguyên N (1 ≤ N ≤ 100000).
Dòng tiếp theo gồm N số nguyên A[i] (0 ≤ A[i] ≤ 109).
Output: 
Với mỗi test, in ra trên một dòng N số R[i], với R[i] là giá trị phần tử đầu tiên lớn hơn A[i].
Víddụ
Input
Output
3
4
4 5 2 25
3
2 2 2
4
4 4 5 5

5 25 25 -1
-1 -1 -1
5 5 -1 -1
*/