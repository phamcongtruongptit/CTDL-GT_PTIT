#include<bits/stdc++.h>
using namespace std ; 
struct data {
    int value ; // giá trị
    int buoc ; // theo từng tầng
} ; 
// ý tưởng: duyệt theo từng tầng và vét hết tất cả các giá trị .
int tinh(int s , int t ){
    queue <data> Q ; 
    data dau = {s, 0} ; 
    Q.push(dau) ; 
    set <int> se ; // cấu trúc set giống  như một tập hợp chứa các phần tử ko trùng nhau
    se.insert(s) ;
    while(Q.size() > 0){
        data k = Q.front() ; 
        Q.pop() ; 
        if(k.value == t) return k.buoc ; 
        if((k.value -1 == t) or (k.value*2 == t)) return k.buoc+1  ; 
        if((se.find(k.value*2) == se.end()) and (k.value < t)  ){// nếu mà ko có trong set. CÒn nếu
        // đã có trong set rồi thì ko cần tính làm gì nữa
            data tmp = {k.value*2 , k.buoc+1} ; 
            Q.push(tmp) ; 
            se.insert(tmp.value);  // đẩy vào để vét giá trị
        }   
        if((k.value > 0) and (se.find(k.value-1) == se.end() ) ){ // nếu mà ko có trong set. CÒn nếu
        // đã có trong set rồi thì ko cần tính làm gì nữa
            data tmp = {k.value -1 , k.buoc +1 } ; 
            Q.push(tmp) ; 
            se.insert(tmp.value);   // đẩy vào để vét giá trị
        }
    }
}
main(){
    int t ; cin>>t ; 
    while(t--){
        int s ,t ; cin>>s >>t ; 
        cout<<tinh(s ,t ) <<endl ; 
    }
}
/*Cho hai số nguyên dương S và T (S, T<10000) và hai thao tác (a), (b) dưới đây:
Thao tác (a): Trừ S đi 1  (S = S-1) ;
Thao tác (b): Nhân S với 2 ( S = S*2);
Hãy dịch chuyển S thành T sao cho số lần thực hiện các thao tác (a), (b) là ít nhất. 
Ví dụ với    S =2, T=5 thì số các bước ít nhất để dịch chuyển S 
thành T thông qua 4 thao tác sau:
Thao tác (a): 2*2 = 4;
Thao tác (b): 4-1 = 3;
Thao tác (a): 3*2 = 6;
Thao tác (b): 6-1 = 5;
Input:
Dòng đầu tiên ghi lại số tự nhiên T là số lượng Test;
T dòng kế tiếp mỗi dòng ghi lại một bộ Test. Mỗi test là một bộ đôi S và T.
          Output: Đưa ra kết quả mỗi test theo từng dòng.
          Ví dụ:
Input
Output
3
2 5
3 7
7 4

4
4
3
*/