#include<bits/stdc++.h>
using namespace std; 
// string tinh(int n){
//     queue <string> Q ; 
//     Q.push("9") ; 
//     while(true){
//         long long k = 0 ; 
//         string temp = Q.front() ; Q.pop() ; 
//         for(int i=0 ; i<temp.size() ; i++){
//             k = k*10 + (int)temp[i] - 48  ; 
//         } 
//         if(k % n == 0) return temp ; 
//         Q.push(temp + "0") ; 
//         Q.push(temp + "9") ; 
//     }
// }
// main(){
//     int t ; cin>>t ; 
//     while(t--){
//         int n ; cin>>n ; 
//         cout<<tinh(n)<<endl ; 
//     }
// }
long long tinh(int n){
    queue<long long> Q ; // khai báo hàng đợi 
    Q.push(9) ; // đẩy phần tử đầu tiên vào
    if(Q.front() % n == 0) return Q.front() ; // nếu mà chia kết thì return luôn
    while(true){
        long long k = Q.front() ; // lấy phần tử phía trước xét
        if(k%n == 0 ) return k ;  // nếu chia hết thì return luôn
        Q.pop() ; // không thì pop ra
        Q.push(k*10) ;// đẩy 2 số tiếp theo vào. 
        Q.push(k*10  + 9) ; 
    }
}
main(){
    int t ; cin>>t ; 
    while(t--){
        int n ; cin>>n ; 
        cout<<tinh(n)<<endl ; 
    }
}
/*Cho số tự nhiên N. Hãy tìm số nguyên dương X nhỏ nhất được tạo bởi số 9 và số 0 chia hết cho N. Ví dụ với N = 5 ta sẽ tìm ra  X = 90.
Input:
Dòng đầu tiên ghi lại số lượng test T (T≤100).
Những dòng kế tiếp mỗi dòng ghi lại một test. Mỗi test là một số tự nhiên N được ghi trên một dòng (N≤100).
Output:
Đưa ra theo từng dòng số X nhỏ nhất chia hết cho N tìm được .
Ví dụ:
Input
Output
2
5
7

90
9009
*/