#include<iostream>
using namespace std ; 
string s ; 
bool cauhinhcuoi  ; 
void cauhinhtieptheo() {
    int i =  s.length()-2 ;
    while ( s[i] >=  s[i+1] and i>=0 ) i-- ; // thêm dấu bằng
    if(i==-1) {
        cauhinhcuoi = true ; 
        return ;
    }
    int  k = s.length()-1 ; 
    while(s[k] <= s[i]) k-- ; 
    int tmp = s[i] ; s[i] = s[k]  ; s[k] = tmp ; 
    int d = i+1 , c = s.length() - 1 ; 
    while(d<c) {
        tmp = s[d] ; s[d] = s[c] ; s[c] = tmp ; d++   ;c-- ; 
    }
}
main() {
    int t ; cin>>t ;
    while(t--) {
        int a ; 
        cin>>a>>s ;  
         cauhinhcuoi = false ; 
         cauhinhtieptheo() ; 
         if(cauhinhcuoi == true) cout<<a<<" "<<"BIGGEST"<<endl ; 
         else cout<<a<<" "<<s<<endl ; 
        
    }
}
/*Hãy viết chương trình nhận vào một chuỗi (có thể khá dài) các ký tự số và đưa
 ra màn hình hoán vị kế tiếp của các ký tự số đó (với ý nghĩa là hoán vị có giá trị
lớn hơn tiếp theo nếu ta coi chuỗi đó là một giá trị số nguyên). Chú ý: Các ký tự số trong 
dãy có thể trùng nhau.
Ví dụ:               123 -> 132
279134399742 -> 279134423799  
Cũng có trường hợp sẽ không thể có hoán vị kế tiếp. Ví dụ như khi đầu vào là chuỗi 987.  
Dữ liệu vào: Dòng đầu tiên ghi số nguyên  t là số bộ test (1 ≤ t ≤ 1000).  Mỗi bộ test 
có một dòng, đầu tiên là số thứ tự bộ test, một dấu cách, sau đó là chuỗi các ký tự số, tối đa 80 phần tử.  
Kết quả: Với mỗi bộ test hãy đưa ra một dòng gồm thứ tự bộ test, một dấu cách,
 tiếp theo đó là hoán vị kế tiếp hoặc chuỗi “BIGGEST” nếu không có hoán vị kế tiếp. 

3
1 123
2 279134399742
3 987

1 132
2 279134423799
3 BIGGEST
*/