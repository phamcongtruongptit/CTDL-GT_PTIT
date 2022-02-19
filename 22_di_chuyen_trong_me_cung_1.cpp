#include<iostream>
#include<algorithm>
#include<vector> 
using namespace std ; 
int n ; int M[20][20] ; 
vector <string> ans ; 
bool check ; 
void input() {
    cin>>n ; 
    ans.clear() ; 
    for(int i=1 ; i<=n ; i++) 
        for(int j=1; j<=n ; j++) cin>>M[i][j] ; 
     check  = false  ; 
}
void output() { 
    sort(ans.begin()  , ans.end() ) ; 
    if (check == false) {
        cout<<-1<<endl ; 
        return; 
    }
    for(int i=0 ; i<ans.size() ; i++) {
        cout<<ans[i]<<" " ; 
    }
    cout<<endl ; 
}
void backtrack(int i , int j , string s ){
    if (i == 1 and j ==1  and M[i][j] == 0 ) {
        check = false ; 
        return ;  
    }
    if (i==n and j==n and M[i][j]==1 ) {
        ans.push_back(s) ; 
        check = true; 
        return;  
    }
    if( i< n and M[i+1][j] ==1 ) {
     //   s+="D" ; 
        backtrack(i+1 , j , s+"D" ) ; 
    }
    if(j<n and M[i][j+1] ==1) {
     //   s+="R" ; 
        backtrack(i , j+1 , s +"R" ) ; 
    }
}
void solution() {
    input() ; 
    backtrack(1 , 1 , "" ) ; 
    output() ; 
}

main(){
    int t ; cin>>t ;
    while(t--) {
        solution() ; 
    }
}