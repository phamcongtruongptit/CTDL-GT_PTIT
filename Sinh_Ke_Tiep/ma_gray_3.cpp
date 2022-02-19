#include<bits/stdc++.h>
using namespace std ;
int n ;
string s; 
string nhiphan[1025] , gray[1025] ; 
bool cauhinhcuoi ;

void sinh() {
    int i= n-1; 
    while(s[i] == '1' and i>=0) {
             
            s[i] = '0';
            i-- ; 
    }
      if(i == -1) {
        cauhinhcuoi = true; 
        return ; 
    }
    s[i] = '1';
}

void magraydodain() {
    int length = pow(2,n) ;// Khởi tạo độ dài của mã gray
    gray[1] = "0" ; gray[2] = "1" ; // khởi tạo 2 chuỗi ban đầu(mã gray độ dài 1)
    if (n>=2) { // nếu độ dài gray >1
        for(int i=2; i<=n ; i++) { // mã gray độ dài n được tạo ra từ n-1 nên phải sinh từ từ 1-->n
            int k  = pow(2,i) ; // Khởi tạo độ dài của mã gray ở độ dài i

            int x = k ; // Biến gán ngược

            for (int j=1 ; j<=k/2 ; j++) { // đảo ngược L2 --> thêm 1 trước --> nối vào sau L1
                gray[x] = "1" + gray[j] ; 
                x-- ; 
            }
             for (int j=1 ; j<=k/2 ; j++) { // thêm 0 trước
                gray[j] ="0" + gray[j] ; 
            }
        }
    }
}

main() {
    int t; 
    cin>>t ; 
    while(t--) {
        string D ; cin>>D ;
        n = D.length() ; 
        cauhinhcuoi = false ; 
        s = "" ; 
        for(int i=1 ; i<=n ; i++) {
            s+="0" ; 
        }
    int check = 1; 
    while(cauhinhcuoi == false ){
        nhiphan[check] = s ; 
        check ++ ; 
        sinh() ; 
    }
    magraydodain() ; 
    int index ; 
    for(int i= 1 ; i <=check ; i++){
        if( D == nhiphan[i] ) {
            index = i ; 
            break ; 
        }
    }
    cout<<gray[index]<<endl ; 
    }
}
/*Số nhị phân được xem là cách mặc định biểu diễn các số. Tuy nhiên, trong 
hiều ứng dụng của điện tử và truyền thông lại dùng một biến thể của mã nhị phân đó 
là mã Gray. Mã Gray độ dài n có mã đầu tiên là n số 0, mã kế tiếp của nó là một xâu nhị 
phân độ dài n khác biệt với xâu trước đó một bít. Ví dụ với n=3 ta có 23 mã Gray như sau: 
000, 001, 011, 010, 110, 111, 101, 100. Hãy viết chương trình chuyển đổi một xâu mã nhị 
phân X có độ dài n thành một xâu mã Gray.
Input
Dòng đầu tiên là số lượng test T.
T dòng kế tiếp ghi lại mỗi dòng một test. Mỗi test là một xâu nhị phân độ dài n.
T, n thỏa mãn ràng buộc: 1≤T, n≤10.
Output:
Đưa ra kết quả mỗi test theo từng dòng.
2
01001
01101

01101
01011
*/