// Mã gray có độ dài n thể thực hiện sinh ra từ mã gray có độ dài n-1 thông qua các 
// bước như sau: 
// 1. Lưu L1[] là các mã gray độ dài n-1. 
// 2. Tạo L2[] là các mã gray được đạo ngược từ L1[] 
// 3. Thêm 0 vào trước mỗi mã gray trong L1[], thêm 1 vào trước mỗi mã gray trong L2. 
// 4. Nối L2 vào sau L1. Ví dụ với n=3 ta thực hiện như sau: 
// - Xuất phát từ mã gray độ dài 1 ta có L1={0, 1}. 
// - Từ L1 ta xây dựng được L2={1,0} 
// - Thêm 0 vào trước mỗi phần tử L1 ta được 
// L1={00,01}, thêm 1 vào trước mỗi phần tử L2 ta được L2={11,10} 
// - Nối L2 vào sau L1 ta được L1={00,01,11,10} 
// Làm tương tự như trên , từ các mã gray độ dài 2 ta được các mã gray độ dài 3: 
// - Xuất phát từ mã gray ộ dài 2 ta có L1={00,01,11,10}. 
// - Từ L1 ta xây dựng được L2={10,11, 01, 00} 
// - Thêm 0 vào trước mỗi phần tử L1 ta được L1={000,001, 011, 010}, thêm 1 vào trước mỗi phần 
// tử L2 ta được L2={110,111, 101, 100} 
// - Thêm L2 vào sau L1 ta được 
// L1={000,001, 011, 010, 110,111, 101, 100} ta được kết quả với n=3.
#include<bits/stdc++.h>
using namespace std ; 
int n ; 
void magraydodain() {
    int length = pow(2,n) ;// Khởi tạo độ dài của mã gray
    string s[length +10 ] ; // khởi tạo 1 mảng các chuỗi
    s[1] = "0" ; s[2] = "1" ; // khởi tạo 2 chuỗi ban đầu(mã gray độ dài 1)
    if (n>=2) { // nếu độ dài gray >1
        for(int i=2; i<=n ; i++) { // mã gray độ dài n được tạo ra từ n-1 nên phải sinh từ từ 1-->n
            int k  = pow(2,i) ; // Khởi tạo độ dài của mã gray ở độ dài i

            int x = k ; // Biến gán ngược

            for (int j=1 ; j<=k/2 ; j++) { // đảo ngược L2 --> thêm 1 trước --> nối vào sau L1
                s[x] = "1" + s[j] ; 
                x-- ; 
            }
             for (int j=1 ; j<=k/2 ; j++) { // thêm 0 trước
                s[j] ="0" + s[j] ; 
            }
        }
    }
    for(int i=1; i <=length ; i++) { // in ra
        cout<<s[i]<<" ";
    }
    cout<<endl ; 
}
main() {
    int t ; cin>>t  ; 
    while( t--) {
        cin>>n ; 
        magraydodain() ; 
    }
}