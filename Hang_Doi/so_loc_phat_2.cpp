#include<bits/stdc++.h>
using namespace std ; 
void solve(int n){
    deque <string> Q ; 
    Q.push_front("6") ; 
    Q.push_back("8") ; 
    vector <string> vt; 
    while(true){
        string k = Q.front() ; 
        vt.push_back(k) ; 
        Q.pop_front() ; 
        if((k+"6").size() > n) break ;  // nhiều chữ số hơn thì break
        Q.push_back(k+"6") ; 
        Q.push_back(k+"8") ; 
    }
    while(!Q.empty()){ // lấy ra hết các số
        vt.push_back(Q.front()) ; 
        Q.pop_front() ; 
    }
    cout<<vt.size()<<endl ; // in số phần tử
    for(int i=0 ; i<vt.size() ; i++){
        cout<<vt[i]<<" " ; 
    }
    cout<<endl ; 
}
main(){
    int t; 
    cin>>t ; 
    while(t--) {
        int n ; cin>>n ; 
        solve(n) ; 
    }
}
/*Một số được gọi là lộc phát nếu chỉ có 2 chữ số 6 và 8. Cho số tự nhiên N. 
Hãy liệt kê các số lộc phát có không quá N chữ số.
Input:
Dòng đầu tiên ghi lại số tự nhiên T là số lượng bộ test (T<10);
T dòng kế tiếp mỗi dòng ghi số N (1<N<15).
            Output:

Dòng đầu tiên là số lượng số lộc phát tìm được. Dòng thứ hai in đáp án theo thứ tự tăng dần.
            Ví dụ:

Input
Output
2
2
3

6
6 8 66 68 86 88
14
6 8 66 68 86 88 666 668 686 688 866 868 886 888
*/