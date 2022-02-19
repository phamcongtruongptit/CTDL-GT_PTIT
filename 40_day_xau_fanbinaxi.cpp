#include<iostream>
using namespace std ; 
long long F[93] , n , i ; 
void input() {
    F[1] =F[2] =1 ; 
    for(int j=3 ;j<=92 ; j++) F[j] = F[j-1] + F[j-2] ; // mảng F lưu trữ độ dài xâu
    cin>>n>>i ; 
}
void TRY(long long n , long long i) {
    if(n==1) {
        cout<<"A"<<endl ; return ; 
    }
    if(n==2) {
        cout<<"B"<<endl ; return ; 
    }
    if( i<=F[n-2] ) return TRY(n-2 , i) ; 
    if(i>F[n-2] ) return TRY(n-1, i-=F[n-2]) ; 
}
void solve() {
    input() ; 
    TRY(n ,i ) ; 
}
main(){
    int t ; cin>>t ; 
    while(t--) solve() ; 
}
// #include<iostream>
// using namespace std ;
// long long F[93] ; long long n , i  ; 
// void input() {
//     F[1] =F[2] =1 ; 
//     for(int j=3 ;j<=92 ; j++) F[j] = F[j-1] + F[j-2] ; 
//     cin>>n>>i ; 
// }
// void solve() {
//     input() ; 
//     while(n>2) {
//         if(i>F[n-2]){
//             i -= F[n-2] ; 
//             n-=1 ; 
//         }
//         else n-=2  ; 
//     }
//     if(n==1) cout<<"A"<<endl ; 
//     if(n==2) cout<<"B"<<endl ; 
// }
// main(){
//     int t; cin>>t ; 
//     while(t--) solve() ; 
// }