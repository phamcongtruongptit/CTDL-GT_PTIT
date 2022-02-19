// #include<bits/stdc++.h>
// using namespace std; 
// int n ; int M[1005] ; 
// bool cauhinhcuoi  ; 
// void input(){
//     cin>>n ; 
//     for(int i=1 ; i<=n ; i++) M[i] = 0 ; 
//     cauhinhcuoi = false ;  
// }
// void in() {
//     for(int i=1 ; i<=n; i++) {
//         cout<<M[i]<<" " ; 
//     }
//     cout<<endl; 
// }
// int kiemtra() {
//     for(int i=1 ; i<n ; i++) {
//         if(M[i] == M[i+1] ) return 0 ; 
//     }
//     return 1 ; 
// }
// void sinh() {
//     int i=n ; 
//     while( i >=1 and M[i] == 1 ) i-- ; 
//     if( i == 0) {
//         cauhinhcuoi = true ; 
//         return ; 
//     }
//     M[i] = 1 ; 
//     for(int j=i+1 ; j<=n ; j++) M[j] = 0 ; 
// }
// main() {
//     input() ; 
//     while(cauhinhcuoi == false) {
//         if(kiemtra()) in() ; 
//         sinh() ; 
//     }
// } --> bị TLE: quá time
#include<bits/stdc++.h>
using namespace std ; 
int n ; int M[1005] , K[1005] ; 
void in(int M[]){
    for(int i=1 ; i<=n ; i++) cout<<M[i]<<" " ; 
    cout<<endl ; 
}
main() {
    cin>>n ; 
    for(int i=1 ; i<=n ; i++ ){
        if(i%2 == 0 ) {
            M[i] = 0 ; 
            K[i] = 1 ; 
        } 
        else {
            M[i] =1 ; 
            K[i] = 0 ; 
        }
    }
    in(K) ; 
    in(M) ; 
}