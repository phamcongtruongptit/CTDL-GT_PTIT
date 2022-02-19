#include<iostream>
#include<algorithm>
using namespace std;
int n ; 
struct  hanhdong {
    int start ; 
    int end ; 
};

bool cmp( hanhdong a, hanhdong b ) {
    if (a.end < b.end ) return true ; 
  //  if ( a.end==b.end and a.start<a.start ) return true ;
    return false ;  
}

void solve() {
    int n ; cin>>n ; 
    hanhdong M[n] ; 
    for(int i=0 ; i<n ; i++) {
        cin>>M[i].start ; 
    }
    for(int i=0 ; i<n ; i++) {
        cin>>M[i].end ; 
    }
    sort(M, M+n , cmp ) ; 
    int dem =1  ; 
    int i=0 ; 
    for(int j=1 ; j<n; j++) {
        if(M[i].end <= M[j].start ) {
            dem++ ; i=j ; 
        }
    }
    cout<<dem<<endl ;  ; 
}

main() {
    int t ; cin>>t   ; 
    while(t--) {
        solve() ; 
    }
}