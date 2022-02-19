#include<bits/stdc++.h>
using namespace std;
int M[1005];
int n;
bool check(){
    if(n==0||n==1) return true;
    else {
        for( int i=0;i<n-1;i++){
            if(M[i] >= M[i+1]) return false;
        }
    }
    return true;
}
void solve(){
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>M[i];
        }
        if(check()) cout<<"1"<<endl;
        else cout<<"0"<<endl;
}
main(){
    int t;
    cin>>t;
    while(t--){
        solve() ; 
    }
}