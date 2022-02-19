#include<iostream>
using namespace std ; 
#define max 20 
string s ; 
char kq[max] ; 
bool check[max];  
void output() {
    for(int i=1 ; i<=s.length() ; i++) {
        cout<<kq[i]; 
    }
    cout<<" "; 
}
void input(){
    cin>>s ; 
    for(int i=0; i<s.length() ; i++) check[i] = true ; 
}
void backtrack(int i) {
    for(int j=0 ; j<s.length() ;j++) {
        if (check[j]) {
            check[j] = false; kq[i] = s[j] ; 
            if (i==s.length()) output()  ; 
            else backtrack(i+1) ; 
            check[j] = true;  
        }
    }
}
void solution()
{
    input() ; 
    backtrack(1) ;
    cout<<endl  ;
}
main(){
    int t; cin>>t ; 
    while(t--){
        solution() ; 
    }
}
/*2
AB
ABC

AB BA
ABC ACB BAC BCA CAB CBA
*/