#include<bits/stdc++.h>
using namespace std ; 
main(){
    int n ; cin>>n ; 
    deque<int> Q ; // khai báo hàng đợi 2 đầu. 
    string s ;
    while(n--){
        cin>>s ; 
        if(s== "PUSHFRONT"){
            int x ; cin>>x ; 
            Q.push_front(x) ; 
        }
        if(s=="PRINTFRONT"){
            if(Q.empty()) cout<<"NONE"<<endl ; 
            else cout<<Q.front()<<endl ; 
        }
        if(s=="POPFRONT"){
            if(Q.empty()) continue;
            else Q.pop_front() ; 
        }
        if(s=="PUSHBACK"){
            int x ; cin>>x ; 
            Q.push_back(x) ; 
        }
        if(s=="PRINTBACK"){
            if(Q.empty()) cout<<"NONE"<<endl ; 
            else cout<<Q.back()<<endl  ; 
        }
        if(s=="POPBACK") {
            if(Q.empty()) continue ; 
            else  Q.pop_back() ; 
        }
    }
}
/*Yêu cầu bạn xây dựng một hàng đợi hai đầu với các truy vấn sau đây:
“PUSHFRONT x”: Thêm phần tử x vào đầu của dequeue (0 ≤ x ≤ 1000).
“PRINTFRONT”: In ra phần tử đầu tiên của dequeue. Nếu dequeue rỗng, in ra “NONE”.
“POPFRONT”: Xóa phần tử đầu của dequeue. Nếu dequeue rỗng, không làm gì cả.
“PUSHBACK x”: Thêm phần tử x vào cuối của dequeue (0 ≤ x ≤ 1000).
“PRINTBACK”: In ra phần tử cuối của dequeue. Nếu dequeue rỗng, in ra “NONE”.
“POPBACK”: Xóa phần tử cuối của dequeue. Nếu dequeue rỗng, không làm gì cả.
Dữ liệu vào:
Dòng đầu tiên là số lượng truy vấn Q (Q ≤ 100000).
Mỗi truy vấn có dạng như trên.
Kết quả: 
Với mỗi truy vấn “PRINTFRONT” và “PRINTBACK”, hãy in ra kết quả trên một dòng.
Ví dụ:
Input
Output
10
PUSHBACK 1
PUSHFRONT 2
PUSHBACK 3
PRINTFRONT
POPFRONT
PRINTFRONT
POPFRONT
PRINTBACK
POPFRONT
PRINTBACK

2
1
3
NONE
*/