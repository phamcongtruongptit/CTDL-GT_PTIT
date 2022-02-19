#include<iostream>
#include<algorithm>
using namespace std ; 
int M[100] ; int  n ; 
void input() {
    cin>>n ; 
    for(int i=0 ; i<n ; i++) cin>>M[i] ; 
}
int CENTER( int left , int center , int right ) {
        int sum = 0 ,sumleft = 0  , sumright = 0 ; 
        for(int i=center ; i>=left ; i--) {
            sum+=M[i] ; 
            if(sum > sumleft) sumleft = sum ; 
        }
        sum = 0 ; 
        for(int i=center + 1 ; i<=right ; i++) {
            sum+=M[i] ; 
            if(sum > sumright ) sumright =sum ; 
        }
        return sumleft + sumright ; 
}
int MAXSUM(int left , int right) {
    if(left == right) return M[left] ; 
    int center = (left + right) /2 ; 
    return max ( max(MAXSUM(left ,center) , MAXSUM(center+1 , right )) , CENTER(left , center ,right)) ; 
}
void solve() {
    input() ; 
    cout<<MAXSUM(0 ,n-1)<<endl ; 
}
main() {
    int t; cin>>t ; 
    while(t--) {
        solve() ; 
    }
}
// #include<iostream>
// using namespace std ; 
// int M[100] ; int n ; 
// void input() {
//     cin>>n ; 
//     for(int i=0 ; i<n ; i++) cin>>M[i] ; 
// }
// void solve() {
//     input() ; 
//     bool duong = false ; 
//     int max = M[0] ; 
//     for(int i=0 ; i<n ; i++) {
//         if(M[i] > 0) duong = true ; 
//         if(M[i] > max) max = M[i] ; 
//     }
//     if(duong == false) {
//         cout<<max<<endl ; return ; 
//     }
//     int sum = 0 ; max = M[0] ; 
//     for(int i=0 ; i<n ; i++) {
//         if( (sum + M[i]) <0 ){
//             sum = 0 ; 
//             continue;  
//         }
//         sum+=M[i] ; 
//         if(max < sum) max = sum ; 
//     }
//     cout<<max<<endl; 

// }
// main() {
//     int t ; cin>>t ; 
//     while(t--) solve() ; 
// }