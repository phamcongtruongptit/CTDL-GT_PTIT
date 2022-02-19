#include<bits/stdc++.h>
using namespace std ; 
int n,e,x,y,q,truoc[1005] ; 
bool chuaxet[1005] ; 
vector<int> L[1005] ; 
void input(){
    cin>>n>>e; 
    for(int i=0 ; i<1005 ; i++) L[i].clear() ; 
    while(e--){
        int d , c ; 
        cin>>d>>c ; 
        L[d].push_back(c) ; 
        L[c].push_back(d) ; 
    }
}
void init(){
    memset(truoc, 0 , sizeof(truoc)) ; 
    memset(chuaxet , true , sizeof(chuaxet)) ; 
}
void dfs(int x){
    chuaxet[x] = false ; 
    for(int i=0 ; i<L[x].size() ; i++){
        int v = L[x][i] ; 
        if(chuaxet[v] == true){
            truoc[v] = x ; 
            dfs(v) ; 
        }
    }
}
main(){
    int t ; cin>>t ; 
    while(t--){
        input() ; 
        cin>>q ; 
        while(q--){
            init() ; 
            cin>>x>>y ; 
            dfs(x) ; 
            if(truoc[y] != 0) cout<<"YES"<<endl ; 
            else cout<<"NO"<<endl ; 
        }
    }
}
/*Cho đồ thị vô hướng có N đỉnh và M cạnh. Có Q truy vấn, mỗi truy vấn yêu cầu trả 
lời câu hỏi giữa 2 đỉnh x và y có tồn tại đường đi tới nhau hay không?
Input:
Dòng đầu tiên là số lượng bộ test T (T ≤ 20).
Mỗi test gồm 2 số nguyên N, M (1 ≤ N, M ≤ 1000).
M dòng tiếp theo, mỗi dòng gồm 2 số nguyên u, v cho biết có cạnh nối giữa đỉnh u và v.
Dòng tiếp là số lượng truy vấn Q (1 ≤ Q ≤ 1000).
Q dòng tiếp theo, mỗi dòng gồm 2 số nguyên x và y.
Output:  Với mỗi truy vấn, in ra “YES” nếu có đường đi từ x tới y, 
in ra “NO” nếu ngược lại.
1
6 5
1 2
2 3
3 4
1 4
5 6
2
1 5
2 4

NO
YES
*/