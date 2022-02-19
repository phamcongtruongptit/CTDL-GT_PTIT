#include<iostream>
using namespace std; 
// xet tim so lan xuat hien max cua 1 phan tu X : max
// keo dan phan tu do khoang cach d voi moi ki tu
// => se tao ra (d-1) * (max-1) khoang trong ki tu o giua cac phan tu X
// neu khoang trong ki tu do <=  n-max(so luong ki tu con lai) thi co nghia la ....
// ...lap day va sap xep duoc.
// nguoi lai se ko sap xep duoc.
main() {
    int t ; cin>>t ; 
    while( t-- ) {
        int  d; cin>>d ; 
        string s  ; cin>>s ; 
        int n= s.size() ; 
        int D[300] = {0} , max  = 0 ; 
        for(int i=0 ; i<n ; i++) {
            D[s[i]] ++ ; 
            if (max < D[s[i]]) max = D[s[i]] ; 
        }
        if (( d - 1) * (max-1) > n - max) cout<<-1<<endl ; 
        else cout<<1<<endl; 
    }
}