#include<iostream>
using namespace std ;
int A[25] , B[100], N , x; 
bool ok ;
void in(int m) {
    int  i ; cout<<"[" ; 
    // .....mang in
}
void Try(int  n ,int m  ,int sum) {
    for (int i=n ; i<N; i++) {
        B[m] = A[i] ; 
        if(sum + B[m] ==x) {
            ok = true ; 
            in(m+1) ; 
        } else {
            if(sum+=B[m]<x) {
                Try(n , m+1 , sum+=B[m]) ; 
            }
        }
    }
}
main() {
    int t ; cin>>t ; 
    while(t--){
        ok = false ; 
        cin>>N>>x; 
        for(int i=0 ; i<N ; i++)cin>>A[i] ; 
        Try( 0 ,0 , 0) ; 
        if(!ok) cout<<-1<<endl ; 
    }
}