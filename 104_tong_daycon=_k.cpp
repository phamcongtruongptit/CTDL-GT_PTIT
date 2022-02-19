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
    sort(mang+1 , mang+1+n) ; 
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
             cout<<mang[i]<<" " ; 
        }
    }
    cout<<endl ; 
}
int check() {
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