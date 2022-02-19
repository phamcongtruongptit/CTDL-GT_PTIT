#include<iostream>
using namespace std ; 
string truoc(string s){
    int i = s.size()-1 ; 
    while(i>=0 and s[i] == '0') i-- ; 
    if(i<0) {
        for(int j=0 ; j<s.size() ; j++) s[j] = '1' ; 
        return s ; 
    }
    s[i] = '0' ; 
    for(int j=i+1 ; j<=s.size()-1 ; j++) s[j] = '1' ; 
    return s; 
}

main(){
    int t ; 
    cin>>t ; 
    while(t--) {
        string s ; 
        cin>>s ; 
        cout<<truoc(s)<<endl ; 
    }
}