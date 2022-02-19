#include<iostream> 
#include<vector>
using namespace std ;
void solve() {
    int n , X ; 
    cin>>n>>X ; 
    vector <long long> M(n) ; 
    for(int i=0 ; i<n ; i++) {
        cin >> M[i] ; 
    }
    if(X<M[0]) {
        cout<<-1 <<endl ; 
        return ; 
    }
    for(int i=0 ; i<n ; i++) {
        if( M[i] > X ) {
            cout<<i<<endl; 
            break ; 
        }
    }
}
main() {
    int t ; cin>>t ; 
    while(t--)solve() ;  
}