#include<iostream>
using namespace std ; 
int n , k , M[11] ; 
bool cauhinhcuoi ; 
void in() {
    cout<<"("; 
     for (int i=1; i<=k ; i++) {
         if(i==k) cout<<M[i] ; 
         else{
         cout<<M[i]<<" " ;              
         }
     }
     cout<<") " ; 
}
void sinh() {
    int i = k  , nguyen , du  , D; 
    while (M[i] == 1  and i>0 ) i-- ; 
    if ( i==0 ) cauhinhcuoi = true;  
    else {
        D = k-i +1 ; 
        M[i]-=1  ; nguyen = D / M[i] ; du = D % M[i] ; 
        k = i ; 
        if (nguyen > 0 ) {
            for(int j=i+1 ; j <= i+nguyen ; j++) {
                M[j] = M[i]  ; 
            }
            k += nguyen ; 
        }
        if (du >0 ) {
            k+=1 ; M[k] = du ; 
        }

    }
}
main() {
    int t ; cin>>t ; 
    while(t--) {
        cin>>n ; k=1; M[1] = n ; 
        cauhinhcuoi = false ; 
        while(cauhinhcuoi == false ){
            in() ; 
            sinh() ; 
        }
        cout<<endl ; 
    }
}
/*
Cho số nguyên dương N. Nhiệm vụ của bạn là hãy liệt kê tất cả các cách phân tích số tự nhiên
 N thành tổng các số tự nhiên nhỏ hơn hoặc bằng N. Phép hoán vị vủa một cách được xem là giống nhau. 
Ví dụ với N = 5 ta có kết quả là: (5), (4, 1), (3, 2), (3, 1, 1), (2, 2, 1), (2, 1, 1, 1), (1, 1, 1, 1, 1) .
Input:
Dòng đầu tiên đưa vào số lượng test T.
Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là một số tự nhiên N được viết trên một dòng.
T, n thỏa mãn ràng buộc: 1≤T, N≤10.
Output:
Đưa ra kết quả mỗi test theo từng dòng.
2
4
5

(4) (3 1) (2 2) (2 1 1) (1 1 1 1)
(5) (4 1)  (3 2)  (3 1 1) (2 2 1)  (2 1 1 1)  (1 1 1 1 1)
*/