#include<bits/stdc++.h>
using namespace std ; 
main(){
    int n ; cin>>n ; 
    string s; 
    queue <int> Q  ; 
    while(n--){
        cin>>s ; 
        if(s== "PUSH"){
            int  k ; cin>> k ; 
            Q.push(k) ; 
        }
        if(s=="PRINTFRONT") {
            if(Q.empty()) cout<<"NONE"<<endl ; 
            else cout<<Q.front()<<endl ; 
        }
        if(s=="POP"){
            if(Q.empty()) continue ; 
            else Q.pop() ; 
        }
    }
}
/*
Yêu cầu bạn xây dựng một queue với các truy vấn sau đây:
“PUSH x”: Thêm phần tử x vào cuối của queue (0 ≤ x ≤ 1000).
“PRINTFRONT”: In ra phần tử đầu tiên của queue. Nếu queue rỗng, in ra “NONE”.
“POP”: Xóa phần tử ở đầu của queue. Nếu queue rỗng, không làm gì cả.
Dữ liệu vào:
Dòng đầu tiên là số lượng truy vấn Q (Q ≤ 100000).
Mỗi truy vấn có dạng như trên.
Kết quả:
Với mỗi truy vấn “PRINT”, hãy in ra phần tử đầu tiên của queue. Nếu queue rỗng, in ra “NONE”.
Ví dụ:
Input
Output
9
PUSH 1
PUSH 2
POP
PRINTFRONT
PUSH 3
PRINTFRONT
POP
POP
PRINTFRONT

2
2
NONE
*/