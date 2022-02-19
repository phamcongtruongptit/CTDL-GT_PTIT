#include<iostream>
using namespace std  ; 
int n , k , s  , M[21]; 
bool cauhinhcuoi ; 
bool check() {
    int sum = 0 ; 
    for(int i=1 ; i<= k ; i++) {
        sum+=M[i]; 
    }
    if (sum==s){
        return true ;
    } else {
        return false ;
    }
}
void sinh() {
    int i  = k ; 
    while( M[i] == n-k+i and i>0  ) i-- ;
    if (i==0) {
        cauhinhcuoi = true ; 
        return ; 
    }
    M[i]+=1 ; 
    for (int j= i ; j<=k ; j++) {
        M[j] = M[i] + j - i ; 
    }
}
main() {
    int t=100 ; 
    while(t--) {
    cin>>n>>k>>s ; 
    if (s==0 and n==0 and k ==0 ) { 
        break ; 
    
    } else if(n<k) {
        cout<<0<<endl  ;
           
    } else {
    cauhinhcuoi = false ; 
    for(int i=1 ; i<=k ; i++) {
        M[i] = i ; 
    }
    int count = 0  ; 
    while(cauhinhcuoi == false) {
        if(check() == true ) count ++ ;
        sinh() ; 
    }
    cout<<count<<endl ; 
    }

    }
    
}