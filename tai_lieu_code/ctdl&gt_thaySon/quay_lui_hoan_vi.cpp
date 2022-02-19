#include<iostream>
using namespace std ; 
int N , A[50] ; 
bool B[50]  ;  
void int (){
    for(int i=1 ; i<=N ; i++) cout<<A[i]<<" " ; 
    cout<<endl ; 
}
void Try(int i) {

    for(int j; j<=N; j++)
        if(B[j]) {
            A[i] = j ; B[j] = fasle  ; 
            if(i===N) in() ; 
            else Try(i+1) ; 
            B[j] = true; 
        }
 }
main(){
    cin>>N ; 
    for (int i=1 ; i<=N; i++) B[i] = true ; 
    Try(!) ; 
}