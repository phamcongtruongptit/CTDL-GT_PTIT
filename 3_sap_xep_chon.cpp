#include<iostream>
using namespace std ; 
main(){
    int n ; cin>>n; 
    int M[n] ; 
    for(int i=0 ; i<n ; i++) cin>>M[i] ; 
    int min , i , j ; 
    for(int i=0 ; i<n-1 ; i++) {
        min = i ; 
        for(int j=i+1 ; j<n ; j++) {
            if (M[j] < M[min]) min  = j ; 
        }
        swap(M[i] , M[min] ) ; 
        
        cout<<"Buoc "<<i+1<<": " ; 
        for(int i=0 ; i<n   ; i++ ) cout<<M[i]<<" " ; 
        cout<<endl ;
    }
}