#include<iostream>
using namespace std ; 
int n , k , M[11] ; 
bool cauhinhcuoi ; 
void in() {
    cout<<"("; 
     for (int i=1; i<=k ; i++) {
         if(i==k) cout<<M[i] ; 
         else{
         cout<<M[i]<<" " ;              
         }
     }
     cout<<") " ; 
}
void sinh() {
    int i = k  , nguyen , du  , D; 
    while (M[i] == 1  and i>0 ) i-- ; 
    if ( i==0 ) cauhinhcuoi = true;  
    else {
        D = k-i +1 ; 
        M[i]-=1  ; nguyen = D / M[i] ; du = D % M[i] ; 
        k = i ; 
        if (nguyen > 0 ) {
            for(int j=i+1 ; j <= i+nguyen ; j++) {
                M[j] = M[i]  ; 
            }
            k += nguyen ; 
        }
        if (du >0 ) {
            k+=1 ; M[k] = du ; 
        }

    }
}
main() {
    int t ; cin>>t ; 
    while(t--) {
        cin>>n ; k=1; M[1] = n ; 
        cauhinhcuoi = false ; 
        while(cauhinhcuoi == false ){
            in() ; 
            sinh() ; 
        }
        cout<<endl ; 
    }
}