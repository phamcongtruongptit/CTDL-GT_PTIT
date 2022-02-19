#include<iostream>
using namespace std ; 
string s ; 
bool cauhinhcuoi  ; 
void cauhinhtieptheo() {
    int i =  s.length()-2 ;
    while ( s[i] >=  s[i+1] and i>=0 ) i-- ; 
    if(i==-1) {
        cauhinhcuoi = true ; 
        return ;
    }
    int  k = s.length()-1 ; 
    while(s[k] <= s[i]) k-- ; 
    int tmp = s[i] ; s[i] = s[k]  ; s[k] = tmp ; 
    int d = i+1 , c = s.length() - 1 ; 
    while(d<c) {
        tmp = s[d] ; s[d] = s[c] ; s[c] = tmp ; d++   ;c-- ; 
    }
}
main() {
    int t ; cin>>t ;
    while(t--) {
        int a ; 
        cin>>a>>s ;  
         cauhinhcuoi = false ; 
         cauhinhtieptheo() ; 
         if(cauhinhcuoi == true) cout<<a<<" "<<"BIGGEST"<<endl ; 
         else cout<<a<<" "<<s<<endl ; 
        
    }
}