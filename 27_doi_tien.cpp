#include<iostream>
using namespace std ; 
int coin[] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000} ; 
int count[] = { 0 , 0 , 0 ,0 , 0 , 0 , 0 , 0 ,0  , 0 } ; 
int giatri ; 
void input(){
    cin>>giatri; 
}
int soto() {
    for(int i = 9 ; i>= 0 ; i--) {
        while( giatri >= coin[i] ){
            giatri -= coin[i] ; 
            count[i]++ ; 
        }
    }
    int sum = 0 ; 
    for(int i=0 ; i<10 ; i++) {
        sum+=count[i] ; 
        count [ i] = 0 ; 
    }
    return sum ; 
}
void solve() {
    input() ; 
    cout<<soto()<<endl ; 
}
main() {
    int t ; cin>> t ;
    while(t--) {
        solve() ; 
    }
}