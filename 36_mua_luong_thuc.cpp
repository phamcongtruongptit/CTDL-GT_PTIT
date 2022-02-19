#include<iostream>
using namespace std ; 
int n,s, m  ; 
void input() {
    cin>>n>>s>>m ; 
}
int songay() {
    int cn =  s/7 ; 
    if ( n * (s-cn ) < s*m ) return -1; 
    for(int i=1 ; i<=cn ; i++) {
        if(n*i >= s*m ) return i ; 
    }
}
main() {
    int t; cin>>t ; 
    while(t--) {
        input() ; 
        cout<<songay()<<endl ; 
    }
}