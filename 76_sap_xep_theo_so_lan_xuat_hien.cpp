#include<iostream>
#include<algorithm>
using namespace std ; 
#define MAX 100001
struct phantu{
    int value  ; 
    int count ; 
} ; 
bool xep(phantu a , phantu b){ //  định nghĩ hàm so sánh
    if(a.count > b.count) return true ;
    if (a.count == b.count and a.value < b.value) return true  ;
    return false  ; 
}
void solve() {
    int n ;cin>>n ;  
    int dem[MAX] = {0} ; 
    phantu M[n] ; 
    for(int i=0 ; i<n ; i++) {
        cin>>M[i].value; 
         dem[M[i].value] ++ ; 
    }
    for(int i=0 ; i<n ; i++) {
        M[i].count = dem[M[i].value] ; 
    }
    sort(M , M+n  , xep) ; // so sánh theo cau trúc "xep"
    for(int i=0;  i<n ; i++) {
        cout<<M[i].value<<" " ; 
    }
    cout<<endl ;
}
main() {
    int t; cin>>t ; 
    while(t-- ){
        solve() ; 
    }
}