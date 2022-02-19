#include<bits/stdc++.h>
using namespace std ; 
main(){
    int t ; cin>>t ; 
    while(t--){
        queue <int> Q ; 
        int n ; cin>>n ; 
        int  k ; 
        while(n--){
            cin>>k ; 
            if(k==1) cout<<Q.size()<<endl ; 
            if(k==2) {
                if(Q.empty()) cout<<"YES"<<endl ; 
                else cout<<"NO"<<endl ; 
            }
            if(k==3) {
                int c ; cin>>c ; 
                Q.push(c) ; 
            } 
            if(k==4){
                if(Q.empty()) continue; 
                else {
                    Q.pop() ; 
                }
            }
            if(k==5){
                if(Q.empty()) cout<<-1<<endl ; 
                else cout<<Q.front()<<endl ; 
            }
            if(k == 6){
                if(Q.empty()) cout<<-1<<endl ;
                else cout<<Q.back()<<endl ; 
            }
        }
    }
}