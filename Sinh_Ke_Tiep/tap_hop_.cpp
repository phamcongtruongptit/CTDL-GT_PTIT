#include<iostream>
using namespace std  ; 
int n , k , s  , M[21]; 
bool cauhinhcuoi ; 
bool check() {
    int sum = 0 ; 
    for(int i=1 ; i<= k ; i++) {
        sum+=M[i]; 
    }
    if (sum==s){
        return true ;
    } else {
        return false ;
    }
}
void sinh() {
    int i  = k ; 
    while( M[i] == n-k+i and i>0  ) i-- ;
    if (i==0) {
        cauhinhcuoi = true ; 
        return ; 
    }
    M[i]+=1 ; 
    for (int j = i ; j<=k ; j++) {
        M[j] = M[i] + j - i ;
    }
}
main() {
    int t=100 ; 
    while(t--) {
    cin>>n>>k>>s ; 
    if (s==0 and n==0 and k ==0 ) { 
        break ; 
    
    } else if(n<k) {
        cout<<0<<endl  ;
           
    } else {
    cauhinhcuoi = false ; 
    for(int i=1 ; i<=k ; i++) {
        M[i] = i ; 
    }
    int count = 0  ; 
    while(cauhinhcuoi == false) {
        if(check() == true ) count ++ ;
        sinh() ; 
    }
    cout<<count<<endl ; 
    }

    }
    
}
/*Xét tất cả các tập hợp các số nguyên dương có các phần tử khác nhau và không lớn hơn số n cho trước. 
Nhiệm vụ của bạn là hãy đếm xem có tất cả 
bao nhiêu tập hợp có số lượng phần tử bằng k và tổng của tất cả các phần tử trong tập hợp bằng s?
Các tập hợp là hoán vị của nhau chỉ được tính là một.
Ví dụ với n = 9, k = 3, s = 23, {6, 8, 9} là tập hợp duy nhất thỏa mãn.
Input:  Gồm nhiều bộ test (không quá 100 test).
Mỗi bộ test gồm 3 số nguyên n, k, s với 1 ≤ n ≤ 20, 1 ≤ k ≤ 10 và 1 ≤ s ≤ 155. Input kết thúc bởi 3 số 0.
Output:  Với mỗi test in ra số lượng các tập hợp thỏa mãn điều kiện đề bài.
9 3 23
9 3 22
10 3 28
16 10 107
20 8 102
20 10 105
20 10 155
3 4 3
4 2 11
0 0 0

1
2
0
20
1542
5448
1
0
0*/