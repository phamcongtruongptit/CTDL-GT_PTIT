#include<iostream>
using namespace std; 
int n  , m ; 
int M[101][101], check[101][101] ; 
int count  ; 
void input(){
    count = 0 ; 
    cin>>m>>n ; 
    for(int i =1 ; i<=m ; i++) {
        for(int j=1 ; j<=n ; j++) {
            cin>>M[i][j] ; 
            check[i][j] = true; 
        }
    }
}
// M[m][n]
void TRY(int h , int c) {
    if(c>n) return ; 
    for(int i=h ; i<=m ; i++) {

        if(check[i][c] == true) {
            check[i][c] = false ; 
            if(i == m and c == n ) count++ ; 
            else {
                TRY(i , c+1); 
            }
            check[i][c] = true ; 
        }
    }
}
void solution() {
    input() ; 
    TRY(1,1) ; 
    cout<<count<<endl ; 
}
main() {
    int t ; cin>>t ; 
    while(t--) {
        solution() ; 
    }
}