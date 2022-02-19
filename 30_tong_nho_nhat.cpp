#include<iostream> 
#include<algorithm> 
using namespace std; 
int n  ; 
int M[21] ; // 2 3 4  5  6  8
void input() {
    cin>>n ; 
    for(int i=0 ; i<n ; i++ ) cin>>M[i] ; 
}
long long sum () {
    sort(M  , M+n) ; 
    long long so1 = 0, so2 = 0 ; 
    for(int i=0 ; i<n ; i++) {
        if(i%2 == 0 ) {
            so1 = so1*10 + M[i] ; 
        } else {
            so2 = so2*10 + M[i] ; 
        }
    }
    return so1 + so2  ; 
}
void solve() {
    input() ; 
    cout<<sum()<<endl ; 
}
main() {
    int t ; cin>>t  ; 
    while(t--) {
        solve() ; 
    }
}