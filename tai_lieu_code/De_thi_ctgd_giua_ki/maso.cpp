#include<bits/stdc++.h>
using namespace std ; 

vector<string> vt1, vt2   ; 
int  n ; int M[10] , N[10] ; 
bool check[10] = {false} ; 

void TRY1(int i) {
    for(int j=1 ; j<=n ; j++) {
        if(!check[j]) {
            M[i] = j ; 
            check[j] = 1 ; 
        if(i==n){
            string s="" ; 
            for(int i=1 ; i<=n ; i++) s+= (char)('A' + M[i]-1) ; 

            vt1.push_back(s) ; 
        }
        else TRY1(i+1) ; 
        check[j] = 0 ; 
        }
    }
}

void TRY2(int i) {
    for(int j=1 ; j<=n ; j++) {
        N[i] = j ; 
        if(i==n) {
            for(int k=0 ; k<vt1.size() ; k++) {
                string s1 = vt1[k] ; 
                for(int i=1 ; i<=n ; i++)
                    s1+=char(N[i]+ '0') ; 
                vt2.push_back(s1) ; 
            }
        }
        else TRY2(i+1) ; 
    }
}

main() {
        vt1.clear() ; vt2.clear() ; 
        cin>>n ; 
        TRY1(1) ; 
        TRY2(1) ; 
        sort(vt2.begin() , vt2.end()) ; 
        for(int i=0 ; i<vt2.size() ; i++) cout<<vt2[i]<<endl ; 
}