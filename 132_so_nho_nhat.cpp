#include<iostream>
using namespace std ; 
int s , d ;
int M[1001] ; 
int sum(int a[] , int n) {
    int sum  = 0 ; 
    for(int i=1 ; i<=n ; i++) {
        sum+=a[i] ; 
    }
    return sum ; 
}
void input() {
    cin>>s>>d ; 
    M[1] = 1;  
    for(int i=2 ; i<=d ; i++) M[i] = 0 ; 
}
void output() {
    for(int i=1 ; i<=d ; i++) cout<<M[i] ; 
    cout<<endl ; 
}
void tangchuso() {
    if (s > 9*d ) {
        cout<<-1<<endl ; 
        return ; 
    }
    for(int i=d ; i>=1 ; i--) {
        while( sum(M , d) != s and M[i] < 9 ){
            M[i]++ ; 
        }
    }
    output() ; 
}
void solve() {
    input() ; 
    tangchuso() ; 
}
main() {
    int t ; cin>>t  ; 
    while(t--) {
        solve() ; 
    }
}
