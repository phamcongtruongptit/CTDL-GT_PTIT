#include<bits/stdc++.h>
using namespace std ; 
// ý tưởng tương tự như BND1. lấy 1 số ra. Push 2 số vào. 
long long tinh(int n){
    deque <long long> Q ; 
    Q.push_front(1) ; 
    while(true){
        long long k=Q.front() ; 
        if(k%n == 0 ) return k ; 
        Q.pop_front() ; 
        Q.push_back(k*10) ; // push số bé vào trước, số lớn sau.
        Q.push_back(k*10+1) ; 
    }
}
main(){
    int t ; cin>> t; 
    while(t--){
        int n ; cin>>n ; 
        cout<<tinh(n)<<endl  ; 
    }
}
/*Ta gọi số nguyên dương K là một số 
BDN nếu các chữ số trong K chỉ bao gồm các 0 hoặc 1 có nghĩa. 
Ví dụ số K =  101 là số BDN, k=102 không phải là số BDN.
Số BDN của N là số P =M*N sao cho P là số BDN. Cho số tự nhiên N (N<1000), hãy tìm số BDN nhỏ nhất của N.
Ví dụ. Với N=2, ta tìm được số BDN của N là P = 5*2=10. N = 17 ta tìm được số BDN của 17 là P = 653*17=11101.
Input:
Dòng đầu tiên ghi lại số tự nhiên T là số lượng Test;
T dòng kế tiếp mỗi dòng ghi lại một bộ Test. Mỗi test là một số tự nhiên N.
Output:
Đưa ra kết quả mỗi test theo từng dòng.
Ví dụ:
Input
Output
3

2
12
17

10
11100
11101
*/