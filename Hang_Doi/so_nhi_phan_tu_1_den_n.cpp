#include<bits/stdc++.h>
using namespace std ; 
// long long M[10001] ; 
// long long nhiphan(int n){
//     vector<int> v ; 
//     while(n>0){
//         v.push_back(n%2) ; 
//         n/=2 ; 
//     }
//     long long ans = 0 ; 
//     for(int i=v.size()-1 ; i>=0 ; i--){
//         ans = ans*10 + v[i] ;
//     }
//     return ans ; 
// }
// void solve(){
//     M[0] = 0 ; M[1] = 1; 
//     for(int i=2 ; i<=10000 ; i++) {
//         M[i] = nhiphan(i) ; 
//     }
// }
// main(){
//     int t; cin>>t ; 
//     while(t--){
//         int n ; cin>>n ; 
//         solve() ; 
//         for(int i=1 ; i<=n ; i++){
//             cout<<M[i]<<" " ; 
//         }
//         cout<<endl ; 
//     }
// }
main(){
    int t ; cin>>t ; 
    while(t--){
        int n ; cin>>n ; 
        deque <long long> Q ; 
        Q.push_front(1) ; // push phần tử đầu tiên vè hàng đợi ưu tiên
        for(int i=1 ; i<=n ; i++){
            long long l = Q.front() ;   // in ra phần tử phía trước
            cout<<l<<" " ; 
            Q.pop_front() ; // // lấy ra phần tử phía trước
            Q.push_back(l*10) ;  // đẩy vào sau phần tử #
            Q.push_back(l*10 + 1) ; // đẩy vào sau phần tử kế tiếp
        }
        cout<<endl ; 
    }
}
/*Cho số tự nhiên n. Hãy in ra tất cả các số nhị phân từ 1 đến n.
Input:
Dòng đầu tiên ghi lại số lượng test T (T≤100).
Mỗi test là một số tự nhiên n được ghi trên một dòng (n≤10000).
Output:
Đưa ra kết quả mỗi test trên một dòng.
Ví dụ:
Input
Output
2
2
5

1 10
1 10 11 100 101
*/