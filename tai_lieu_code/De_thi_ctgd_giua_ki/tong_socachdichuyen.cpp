#include <bits/stdc++.h> 
using namespace std;
long long mod=1e9+7;
long long M[1000009];
void solve(){
        int n,k;
        cin>>n>>k;
        memset(M,0,sizeof(M));
        M[0]=M[1]=1;
        for(int i=2;i<=n;i++){
            for(int j=1;j<=min(i,k);j++){
                M[i]+=M[i-j];
                M[i]%=mod;
            }
        }
        cout<<M[n]<<endl;
}
int main() { 
    int t;cin>>t;
    while(t--){
        solve() ; 
    }     
}
 