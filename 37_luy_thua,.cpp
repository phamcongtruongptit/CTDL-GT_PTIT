#include<iostream>
using namespace std ;
#define M 1000000007 
int poww(int n , long k) {
    if (k==0) return 1 ; 
    long long x  = poww(n , k/2)  ; 
    if( k%2 == 0 ) return ((x%M)*(x%M)) % M ; 
    return  ( (n%M) * ( ( (x%M) * (x%M) ) % M ) ) % M ; 
}
main() {
    int t ; cin>>t ; 
    while(t--) {
        int n  ; long k ; 
        cin>>n>> k ; 
        cout<<poww(n , k)<<endl ; 
    }
}
/*Cho số nguyên dương N và K. Hãy tính NK modulo 109+7.
Input:
Dòng đầu tiên là số lượng bộ test T (T ≤ 20).
Mỗi test gồm 1 số nguyên N và K (1 ≤ N ≤ 1000, 1 ≤ K ≤ 109).
Output: 
Với mỗi test, in ra đáp án trên một dòng.
2
2 3
4 2

8
16
*/