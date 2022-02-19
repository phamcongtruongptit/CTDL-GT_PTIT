#include<iostream>
using namespace std ; 
void solve() {
    string s ; 
    int D[300] = {0} ; // khai bao mang so cua ki tu ascii
    // moi ki tu ung voi 1 so nguyen rieng trng bang ma asci
    cin>>s ; 
    int count_max = 0 ; 
    for(int i=0 ; i<s.size() ; i++) {
        D[s[i]] ++ ; 
        if(D[s[i]] > count_max ) count_max  = D[s[i]] ; 
    }
    if( s.size() %2 == 0 and count_max <=s.size() - count_max ) cout<< 1 << endl  ; 
    else if ( s.size()%2 == 1 and count_max <= s.size()/2 + 1 ) cout<< 1 << endl  ; 
    else cout<< -1 <<endl  ;
}
main() {
    int t ; cin>>t; 
    while(t--) {
        solve() ; 
    }
}