#include<bits/stdc++.h>
using namespace std ;
int S, T ; 
struct data{
    int val ; 
    int d ; 
} ; 
int count() {
    queue <data> k ; 
    k.push( {S , 0}) ; 
    set <int> s ; 
    while(!k.empty()){
        data m = k.front() ; 
        k.pop() ; 
        if(m.val == 1 ) return m.d ; 
        if((m.val/2 ==1 and m.val&2==0 ) or (m.val/3 ==1 and m.val%3 ==0) or (m.val-1 == 1)) return m.d+1 ; 
        if(s.find(m.val/3) == s.end() and m.val%3 == 0 ) {
            k.push({m.val/3, m.d+1}) ; 
            s.insert(m.val/3) ; 

        }
        if(s.find(m.val/2) == s.end() and m.val%2 == 0) {
            k.push({m.val/2 , m.d+1}) ; 
            s.insert(m.val/2) ; 
        }
        if(s.find(m.val-1) == s.end() and m.val>1) {
            k.push( {m.val-1  , m.d+1} ) ;
            s.insert(m.val -1 ) ;  
        }
    }
     return k.front().d ; 
}
main() {
    int t ; cin>>t ; 
    while (t--) {
        cin>>S ; 
        cout<<count()<<endl ; 
    }
}