#include<iostream>
using namespace std ; 
string s; 
void sinh(){
    int i = s.length() - 1 ; 
    while( s[i] == '1' && i>=0 ) {
        s[i] = '0' ; 
        i-- ; 
    }
    if(i>=0) s[i] = '1' ; 
}
     
main (){
    int t ; cin>>t ; 
    while(t--) {
        cin>>s ; 
        sinh();
        cout<<s<<endl ; 
    }
}