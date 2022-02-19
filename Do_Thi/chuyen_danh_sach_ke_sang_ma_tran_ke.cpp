#include<bits/stdc++.h>
using namespace std ; 
main(){
    int n  ; cin>>n ; cin.ignore() ; 
    int G[n+5][n+5] ; 
    memset(G, 0 , sizeof(G) );
    for(int i=1 ; i<=n ; i++){
        string s ; 
        getline(cin, s) ; 
        stringstream ss; 
        ss<<s  ; 
        int k ; 
        while(ss>>k) {
            G[i][k] = 1 ; 
            G[k][i] = 1 ; 
        }
    }
    for(int i=1 ; i<=n ; i++){
        for(int j=1 ; j<=n ; j++) cout<<G[i][j]<<" " ; 
        cout<<endl ; 
    }
}
/* Cho đơn đồ thị vô hướng có n đỉnh dưới dạng danh sách kề.
Hãy biểu diễn đồ thị bằng ma trận kề.
Input: Dòng đầu tiên chứa số nguyên n – số đỉnh của đồ thị (1 ≤  n ≤  1000). n 
dòng tiếp theo, dòng thứ i chứa các số nguyên là các đỉnh kề với đỉnh i.  
Output:  Ma trận kề của đồ thị.
3
2 3
1 3
1 2

0 1 1
1 0 1
1 1 0
*/