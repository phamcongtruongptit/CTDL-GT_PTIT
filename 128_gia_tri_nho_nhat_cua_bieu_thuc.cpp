#include<iostream>
#include<algorithm>
#include<vector>
using namespace std ; 

void ans() {
    long long n ; cin>>n ; 
    vector <long long> a(n) ; 
    vector <long long> b(n) ; 
    for(long long i=0 ; i<n ; i++) cin>>a[i] ; 
    for(long long i=0 ; i<n ; i++) cin>>b[i] ; 
    sort(a.begin() , a.end()) ; 
    sort(b.begin() , b.end() , greater<long long>() );  // sap xep vector theo chieu giam dan
    
    long long sum = 0 ; 
    for(int i=0 ; i<n ; i++) {
        sum+=a[i]*b[i] ; 
    }
    cout << sum<<endl  ; 
}

main () {
    int t; cin>>t ; 
    while(t--){
        ans()  ;
    }
}