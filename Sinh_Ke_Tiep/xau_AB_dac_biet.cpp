#include<iostream>
using namespace std ;
bool cauhinhcuoi;
int n , k ; 
string M = "" ; 
string check = "" ;  
bool kiemtra(){
    int d = M.find(check); 
    int c = M.rfind(check);
    if( d>=0 &&  d <= n-1 &&  c>=0 &&  c <= n-1  ) {
        if( d == c ) return true ; 
    }
    return false ; 
}
void in() {
    cout<<M<<endl ; 
}
void sinh() {
    int i=n-1; 
    while(M[i]=='B' and i>=0) {
        M[i] = 'A';
        i--;
    }
    if(i==-1){
        cauhinhcuoi = true; return ;
    }
    M[i] = 'B' ; 
}
main() {
    cin>>n>>k ; 
    cauhinhcuoi = false; 
    int dem = 0 ; 
    for(int i=1 ; i<=n ; i++) M+="A" ; 
    for(int i=1; i<=k ; i++) check+="A" ;
    while(cauhinhcuoi == false){
        if(kiemtra() == true) {
        dem++ ; 
        }
        sinh() ; 
    }
    M="" ; 
    for(int i=1 ; i<=n ; i++) M+="A" ; 
    cout<<dem<<endl ; 
    cauhinhcuoi = false ; 
    while(cauhinhcuoi == false){
        if(kiemtra() == true) {
            in() ; 
        }
        sinh() ; 
    }
}
/*Một xâu kí tự S = (s1, s2, .., sn) được gọi là xâu AB độ dài n nếu với mọi
 siÎS thì si hoặc là kí tự A hoặc si là kí tự B . Ví dụ xâu S = “ABABABAB” là một 
 xâu AB độ dài 8. Cho số tự nhiên N và số tự nhiên K (1£K<N£15 được nhập từ bàn phím),
  hãy viết chương trình liệt kê tất cả các xâu AB có độ dài N chứa duy nhất một dãy K 
  kí tự A liên tiếp.
Dữ liệu vào chỉ có một dòng ghi hai số N và K.
Kết quả ghi ra màn hình theo khuôn dạng:
Dòng đầu tiên ghi lại số các xâu AB thỏa mãn yêu cầu bài toán;
Những dòng kế tiếp, mỗi dòng ghi lại một xâu AB thỏa mãn. Các xâu được ghi ra theo thứ tự từ điển.
5 3 

5
AAABA
AAABB
ABAAA
BAAAB
BBAAA
*/