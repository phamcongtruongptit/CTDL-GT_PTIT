#include<iostream>
#include<queue>
#include<math.h>
using namespace std ;
long maxx = 1e9 + 7  ;  
priority_queue < long long , vector<long long> , greater<long long> > Q ; 

void solve(){
    int n ; cin>> n ; 
    long val ;
    for(int i=0 ; i<n ; i++){
        cin>>val ; 
        Q.push(val) ; 
    } 
    long long ans = 0 ; 
    while(Q.size() >  1) {
        long x = Q.top() ; Q.pop() ; 
        long y = Q.top()  ; Q.pop() ; 
        Q.push( (x+y) % maxx ) ; 
        ans += (x+y)  ; 
    }
    cout<<ans%maxx<<endl ; 
    while(! Q.empty()) Q.pop() ; 
}
main(){
    int t ; cin>>t  ;
     while(t--) {
         solve() ; 
     }
} 