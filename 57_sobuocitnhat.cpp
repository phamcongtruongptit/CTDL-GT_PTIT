#include<bits/stdc++.h>
using namespace std ; 
int M[1005] , n  , F[1005]; 
int daycondai(){
    int kq = 0 ; 
    F[1] = 1 ; 
    for(int i=2 ; i<=n ; i++){
        F[i] = 1 ; 
        for(int j=1 ; j<i ; j++ ){
            if(M[j] <= M[i]) F[i] = max( F[i] , F[j] + 1 ) ; // do la sap xep lai nen <=
        }
        kq = max(kq  , F[i]) ; 
    } 
    return kq ; 
}
main(){
    int t ; 
    cin>>t ; 
    while(t--) {
        cin>>n ; 
        for(int i=1 ; i<=n ; i++) cin>>M[i] ; 
        cout<<n-daycondai()<<endl ; 
    }
}
// bài toán tương đương với bài tìm dãy con tăng dài nhất. Chỉ khác là sắp xếp nên có thê M[j] <= M[i] 