#include<iostream>
using namespace std ;
main() {
    int n ; cin>>n ; 
    int a[n] ; 
    for(int i=0 ; i<n ; i++) cin>>a[i];  
     int t,j;
    cout<<"Buoc 0: "<<a[0]<<endl ; 
    for(int i=1;i<n;i++)
    {
       j=i-1;
       t=a[i];
       while(j >= 0 && t < a[j])
       {
           a[j+1]=a[j];
           j--;
       }
       a[j+1]=t; // Chèn
       cout<<"Buoc "<<i<<": " ; 
       for(int k=0 ; k<=i ; k++) cout<<a[k]<<" "; 
       cout<<endl;
    }  

}