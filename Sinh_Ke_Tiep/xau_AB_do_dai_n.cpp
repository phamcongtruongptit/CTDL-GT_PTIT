#include<iostream>
using namespace std ;
string s = "" ;
bool cauhinhcuoi ;
int n; 
void incauhinh(){
    cout<<s; 
    cout<<" ";
}
void sinh() {
    int i= s.length()-1; 
    while(s[i] == 'B' and i>=0) {
             
            s[i] = 'A';
            i-- ; 
    }
    if(i == -1) {
        cauhinhcuoi = true; // kiểm tra xem đã phải cấu hình cuối hay chưa.
        return ; 
    }
    s[i] = 'B';
}
main() {
    int t; cin>>t ; 
    while(t-- ){
        cin>>n ; 
        cauhinhcuoi = false;
        s="";
          for (int i=1 ; i<= n ; i++) {
        s = s+ "A" ;
    } 
        while(cauhinhcuoi == false ) {
            incauhinh() ; 
            sinh() ; 

        }
        cout<<endl ; 
    }
}
/*âu ký tự str được gọi là xâu AB nếu mỗi ký tự trong xâu hoặc là ký tự ‘A’ hoặc 
là ký tự ‘B’. Ví dụ xâu str=”ABBABB” là xâu AB độ dài 6. N
hiệm vụ của bạn là hãy liệt kê tất cả các xâu AB có độ dài n.
Input:
Dòng đầu tiên đưa vào số lượng test T.
Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là một số tự nhiên n.
T, n thỏa mãn ràng buộc: 1≤T≤10; 1≤n≤10.
Output:
Đưa ra kết quả mỗi test theo từng dòng. Mỗi xâu cách nhau 1 khoảng trống.
2
2
3

AA AB BA BB
AAA AAB ABA ABB BAA BAB BBA BBB
*/