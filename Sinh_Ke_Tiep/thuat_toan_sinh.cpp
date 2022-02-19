#include<iostream>
using namespace std ; 
bool cauhinhcuoi  ; 
int n  ; int M[20] ;
void in() {
    for(int i=1 ; i<=n ; i++) cout<<M[i]<<" "  ;
    cout<<endl ; 
} 
void khoitao() {
    cin>>n ; 
    for(int i=1 ; i<=n ; i++) M[i] = 0 ; 
    cauhinhcuoi = false; 
}
bool check() { // hàm kiểm trai xâu đó có thuận nghịch hay không. 
    int l = 1 , r = n ; 
    while(l<r){
        if(M[l] != M[r] ) return false ; 
        l++ ; r-- ;
    }
    return true ; 
}
void sinh() {
    int i=n ; 
    while(M[i] == 1 and i>=1 ) i-- ; 
    if(i==0) {cauhinhcuoi = true; return ; }
    M[i] = 1 ; 
    for(int j=i+1 ; j<=n ; j++) M[j] = 0 ; 
}
void solution() {
    khoitao(); 
    while(cauhinhcuoi == false ) {
        if(check() == true ) in() ; 
        sinh(); 
    }
}
main() {
    solution(); 
}
/*Ví dụ với n = 4 ta tìm được 4 xâu nhị phân thuận nghịch như dưới đây.

                      0                      0                      0                      0         

                               0                      1                      1                      0         

                               1                      0                      0                      1         

                               1                      1                      1                      1*/