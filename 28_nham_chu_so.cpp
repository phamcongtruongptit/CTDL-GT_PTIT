#include<iostream> 
using namespace std ; 
string s1,s2 ; 
void input() {
    cin>>s1>>s2  ; 
}
string sum(string s1, string s2 ) {
    while(s1.size() < s2.size() ) s1 = '0'  + s1 ;
    while(s2.size() < s1.size() ) s2 = '0' + s2 ; 
    int nho = 0 ; 
    string ans = "" ; 
    for(int i = s1.size() -1  ; i >= 0 ; i-- ) {
        int so = int(s1[i] - '0') + int(s2[i] - '0') + nho ; 
        ans = char(so%10 + '0' ) + ans ; 
        nho = so/10 ;  
    }
    if (nho > 0) ans = char(nho + '0' ) + ans ; 
    return ans ;
}
string summin(string s1, string s2 ) {
    for(int i= 0 ; i<s1.size() ; i++) {
        if(s1[i] == '6') s1[i] = '5' ; 
    }
    for(int i = 0 ; i<s2.size() ; i++) {
        if(s2[i] == '6') s2[i] = '5' ; 
    }
    return sum(s1,s2) ; 
}
string summax(string s1, string s2 ) {
    for(int i=0 ; i<s1.size() ; i++) {
        if(s1[i] == '5') s1[i] = '6' ; 
    }
    for(int i=0 ; i<s2.size() ; i++) {
        if(s2[i] == '5') s2[i] = '6' ; 
    }
    return sum(s1,s2) ; 
}
void solve() {
    input() ; 
    cout<<summin(s1,s2)<<" "<<summax(s1,s2)<<endl ; 
}
main() {
    solve() ; 
}