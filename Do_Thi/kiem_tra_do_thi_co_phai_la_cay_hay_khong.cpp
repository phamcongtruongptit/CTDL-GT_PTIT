#include<bits/stdc++.h>
using namespace std ;
int n , e  ; 
bool chuaxet[1005] ; 
vector<int> L[1005] ; 
void input(){
    cin>>n ; e = n-1 ; 
    memset(chuaxet,true  , sizeof(chuaxet))  ; 
    for(int i=0 ; i<1005 ; i++) L[i].clear() ; 
    while(e--){
        int d , c ; 
        cin>>d>>c ; 
        L[d].push_back(c) ; 
    }
}
int bfs(int u){
    int dinhduyet = 0 ; 
    queue<int> Q ;
    chuaxet[u] = false ; 
    dinhduyet++ ; 
    Q.push(u) ; 
    while(!Q.empty()){
        int k  = Q.front()  ; Q.pop() ; 
        for(int i=0 ; i<L[k].size()  ; i++){
            int v = L[k][i] ; 
            if(chuaxet[v] == true){
                dinhduyet++ ;
                chuaxet[v] = false ; 
                Q.push(v) ; 
            }
        }
    }
    return dinhduyet ; 
}
main(){
    int t ; cin>>t ; 
    while(t--){
        input() ; 
        // khi duyệt bfs hay dfs tại 1 điểm mà tất cả các đỉnh được duyệt thì chứng tỏ có 1 tplt
        // mà đề đã có n-1 cạnh ==> là cây
        if(bfs(1) == n ) cout<<"YES"<<endl ; 
        else cout<<"NO"<<endl  ; 
    }
}
/*Một đồ thị N đỉnh là một cây, nếu như nó có đúng N-1 cạnh và giữa 2 
đỉnh bất kì, chỉ tồn tại duy nhất 1 đường đi giữa chúng.
Chomột đồ thị N đỉnh và N-1 cạnh, hãy kiểm tra đồ thị đã cho có phải
 là một cây hay không?
Inpt:
Dòng đầu tiên là số lượng bộ test T (T ≤ 20).
Mỗi test bắt đầu bởi số nguyên N (1 ≤ N ≤ 1000).
N-1 dòng tiếp theo, mỗi dòng gồm 2 số nguyên u, v cho biết có cạnh
 nối giữa đỉnh u và v.
Output: 
Với mỗi test, in ra “YES” nếu đồ thị đã cho là một cây, in ra “NO” trong trường hợp ngược lại.
2
4
1 2
1 3
2 4
4
1 2
1 3
2 3

YES
NO
*/