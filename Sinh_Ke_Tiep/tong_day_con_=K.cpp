#include<iostream>
#include<algorithm>
using namespace std ; 
int n, k ; int M[11] ; int mang[11] ; 
bool cauhinhcuoi ; 
void khoitao() {
    cin>>n >>k ;  ; 
    cauhinhcuoi = false ; 
    for(int i=1 ; i<=n ; i++) {
        M[i] = 0 ; 
    }
    for(int i=1 ; i<=n ; i++) cin>>mang[i] ; 
    sort(mang+1 , mang+1+n) ; // phải sắp xếp để in ra đúng yêu cầu
}
void sinh() {
    int i=n ; 
    while(M[i] == 1 and i>=1 ) i-- ; 
    if( i== 0 ) {
        cauhinhcuoi = true  ; return ; 
    }
    M[i] =1 ; 
    for(int j=i+1  ; j<=n ; j++) M[j] = 0 ;     
}
void in() {  
    for(int i=1 ; i<=n ; i++) {
        if(M[i] == 1) {
             cout<<mang[i]<<" " ; // in gián tiếp
        }
    }
    cout<<endl ; 
}
int check() { // kiêm tra tổng các phẩn tử tại 1 có bằng k hay không
    int sum=0  ; 
    for(int i= 1 ;i<= n ; i++) {
        if(M[i]==1) {
            sum+=mang[i] ; 
        }
    }
    return sum ; 
}
void solution() {
    int count =  0 ; 
    khoitao() ; 
    while(cauhinhcuoi == false) {
        if(check() == k) {
            count++ ; 
            in() ; 
        }
        sinh() ; 
    }
    cout<<count<<endl ; 
}
main() {
     solution(); 
}
/*Cho dãy A[] gồm N số tự nhiên khác nhau và số tự nhiên K. Hãy viết chương trình 
liệt kê tất cả các dãy con của dãy số A[] sao cho tổng các phần tử trong dãy con đó đúng bằng K. 
Dữ liệu vào trên bàn phím (n=5, K=50), 5 số dòng thứ 2 là các phần tử dãy A:

   5                      50       

   5                      10                    15                    20                    25   

Các dãy con thoả mãn điều kiện tìm được liệt kê trên màn hình:

Mỗi dòng ghi lại một dãy con. Hai phần tử khác nhau của dãy con được viết cách nhau bởi một khoảng trống.
Dòng cuối cùng ghi lại số các dãy con có tổng các phần tử đúng bằng K tìm được.
           10                    15                    25

           5                      20                    25

          5                      10                    15                    20

           3*/