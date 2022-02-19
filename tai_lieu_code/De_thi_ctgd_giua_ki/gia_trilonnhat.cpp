#include<bits/stdc++.h>
using namespace std  ; 
main(){
    int  n  ; cin>>n ; 
    int M[n] ; 
    long long maxx  = 0 ; 
    for(int i= 0 ; i<n ; i++) {
        cin>>M[i]  ; 
        if(M[i]>0) maxx +=M[i]  ; 
    }
    cout<<maxx*2<<endl ;
}