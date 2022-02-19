#include<iostream>
using namespace std ;
string s = "" ;
bool cauhinhcuoi ;
int n; 
void incauhinh(){
    cout<<s; 
    cout<<" ";
}
void sinh() {
    int i= s.length()-1; 
    while(s[i] == 'B' and i>=0) {
             
            s[i] = 'A';
            i-- ; 
    }
      if(i == -1) {
        cauhinhcuoi = true; 
        return ; 
    }
    s[i] = 'B';
}
main() {
    int t; cin>>t ; 
    while(t-- ){
        cin>>n ; 
        cauhinhcuoi = false;
        s="";
          for (int i=1 ; i<= n ; i++) {
        s = s+ "A" ;
    } 
        while(cauhinhcuoi == false ) {
            incauhinh() ; 
            sinh() ; 
       }
        cout<<endl ; 
    }
}
