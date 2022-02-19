#include<bits/stdc++.h>
using namespace std ; 
// tương tự như bài số lộc phát 1. # mỗi chỉ in thêm số phần tử thỏa mãn.
void solve(int n){
    deque <string> Q ; 
    Q.push_front("6") ; 
    Q.push_back("8") ; 
    vector <string> vt; 
    while(true){
        string k = Q.front() ; 
        vt.push_back(k) ; 
        Q.pop_front() ; 
        if((k+"6").size() > n) break ; 
        Q.push_back(k+"6") ; 
        Q.push_back(k+"8") ; 
    }
    while(!Q.empty()){
        vt.push_back(Q.front()) ; 
        Q.pop_front() ; 
    }
    cout<<vt.size()<<endl ; 
 
    for(int i=vt.size() -1 ; i>=0 ; i--){
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
/*Một số được gọi là lộc phát nếu chỉ có 2 chữ số 6 và 8. 
Cho số tự nhiên N. Hãy liệt kê các số lộc phát có không quá N chữ số.
Input:
Dòng đầu tiên ghi lại số tự nhiên T là số lượng bộ test (T<10);
T dòng kế tiếp mỗi dòng ghi số N (1<N<15).
            Output:

Dòng đầu tiên là số lượng số lộc phát tìm được. Dòng thứ hai in ra đáp án theo thứ tự giảm dần.
            Ví dụ:
Input
Output
2
2
3

6
88 86 68 66 8 6
14
888 886 868 866 688 686 668 666 88 86 68 66 8 6
*/