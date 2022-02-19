#include<bits/stdc++.h>
using namespace std ;  // tương tự như bài ấy 0 và 9. lấy 1 số ra. push 2 số vào. 
long long tinh(long long n){
    deque <long long> Q; 
    Q.push_front(1) ; 
    int count = 0 ; // biến đếm
    while(true){
        long long k = Q.front() ; 
        if(k<=n) count ++ ; 
        else return count  ; 
        Q.pop_front() ; 
        Q.push_back(k*10)  ; 
        Q.push_back(k*10 + 1) ; 
    }
}
main(){
    int t ; cin>>t  ; 
    while(t--){
        long long n ; cin>>n ; 
        cout<<tinh(n) <<endl ; 
    }
}
/*Ta gọi số nguyên dương K là một số BDN nếu các chữ số trong K chỉ bao gồm các 0 hoặc 1 có nghĩa. 
Ví dụ số K = 1, 10, 101. Cho số tự nhiên N (N<263). 
Hãy cho biết có bao nhiêu số BDN nhỏ hơn N. Ví dụ N=100 ta có 4 số BDN bao gồm các số: 1, 10, 11, 100.
Input:
Dòng đầu tiên ghi lại số tự nhiên T là số lượng Test;
T dòng kế tiếp mỗi dòng ghi lại một bộ Test. Mỗi test là một số tự nhiên N.
            Output:
Đưa ra kết quả mỗi test theo từng dòng.
            Ví dụ:
Input
Output
3
10
100
200

2
4
7
*/