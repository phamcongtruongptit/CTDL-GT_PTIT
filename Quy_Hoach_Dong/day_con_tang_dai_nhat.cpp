#include<bits/stdc++.h>
using namespace std ;
int n ; int M[1005] ; int F[1005] ; 
int longmax(){
    F[1] = 1 ; 
    int kq=0 ; 
    for(int i=2 ; i<=n ; i++) {
        F[i] =1 ; 
        for(int j=1; j<i ; j++) {
            if(M[j] < M[i]) F[i] = max(F[i] , F[j] + 1) ; 
        }
        kq = max(kq , F[i]) ; 
    }
    return kq ; 
}

main() {
    cin>>n ; 
    for(int i=1; i<=n ; i++) cin>>M[i] ; 
    cout<<longmax()<<endl ; 
}
/*Cho một dãy số nguyên gồm N phần tử A[1], A[2], ... A[N]. 

Biết rằng dãy con tăng là 1 dãy A[i1],... A[ik]

thỏa mãn i1 < i2 < ... < ik và A[i1] < A[i2] < .. < A[ik].

Hãy cho biết dãy con tăng dài nhất của dãy này có bao nhiêu phần tử? 

Input: Dòng 1 gồm 1 số nguyên là số N (1 ≤ N ≤ 1000). Dòng thứ 2 ghi N số nguyên A[1], A[2], .. A[N] (1 ≤ A[i] ≤ 1000). 

Output: Ghi ra độ dài của dãy con tăng dài nhất.

Ví dụ:

Input

Output

6

1 2 5 4 6 2

4

 */