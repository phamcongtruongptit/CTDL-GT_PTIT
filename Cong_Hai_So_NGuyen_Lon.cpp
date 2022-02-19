#include<bits/stdc++.h>
using namespace std ; 
string tong(string s1 ,string s2 ){
    while(s1.size()< s2.size()) s1 = "0"  + s1 ; 
    while(s2.size() < s1.size() ) s2 = "0" + s2 ; 
    int n = s1.size() ; 
    int nho = 0 ;  
    string ans = "" ; 
    for(int i=n-1 ; i>=0 ; i--) {
        int so = int(s1[i] -'0') + int(s2[i] - '0') +nho  ; 
        ans = char(so%10  + '0' ) +  ans ; 
        nho = so/10 ; 
    }
    if(nho > 0) ans = char(nho + '0' ) + ans ; 
    return ans; 
}


main() {
    string s1, s2 ; cin>>s1>>s2 ;
    cout<<tong(s1  ,s2 )<<endl ;  
}