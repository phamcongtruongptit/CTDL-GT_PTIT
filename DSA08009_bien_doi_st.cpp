#include<bits/stdc++.h>
using namespace std ; 
struct data {
    int value ; // giá trị
    int buoc ; // theo từng tầng
} ; 
// ý tưởng: duyệt theo từng tầm vào vét hết tất cả các giá trị .
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
        if((se.find(k.value*2) == se.end()) and (k.value < t)  ){
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