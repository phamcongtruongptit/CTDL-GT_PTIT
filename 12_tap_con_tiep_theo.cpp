#include<bits/stdc++.h>
using namespace std ; 
int n ,k, i  ,  M[1000] ; 
void sinh() {
    i = k ; 
    while(M[i] == n-k+i && i>0 ) {
    i-- ; 
    }
    if(i==0) {
        for (int j=1 ; j<=k ; j++) M[j] = j ; 
    } else {
    M[i] +=1 ; 
    for (int j = i ; j<=k ; j++) M[j] = M[i] + (j-i) ; 
}
    for(int j =1  ; j<=k ; j++) cout<<M[j]<<" "; 

}
main(){
    int t  ; cin>>t ; 
    while(t--) {
        cin>> n>>k ; 
        for(int i=1 ; i<=k ; i++) cin>>M[i]; 
        sinh() ; 
        cout<<endl ; 
    }
}