#include<bits/stdc++.h>
using namespace std ;
int n , e  ; 
bool chuaxet[1005] ; 
vector<int> L[1005] ; 
void input(){
    cin>>n>>e ; 
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
        // khi duyệt bfs hay dfs tại 1 điểm mà tất cả các đỉnh được duyệt thì nó là liên thông mạnh
        if(bfs(1) == n ) cout<<"YES"<<endl ; 
        else cout<<"NO"<<endl  ; 
    }
}
/*Cho đồ thị có hướng G=<V, E> được biểu diễn dưới dạng danh sách cạnh. 
Hãy kiểm tra xem đồ thị có liên thông mạnh hay không?
Input:
Dòng đầu tiên đưa vào T là số lượng bộ test.
Những dòng tiếp theo đưa vào các bộ test. Mỗi bộ test gồm 2 dòng: dòng 
đầu tiên đưa vào hai số |V|, |E| tương ứng với số đỉnh và số cạnh; Dòng 
tiếp theo đưa vào các bộ đôi uÎV, vÎV tương ứng với một cạnh của đồ thị.
T, |V|, |E| thỏa mãn ràng buộc: 1≤T≤100; 1≤|V|≤103; 1≤|E|≤|V|(|V|-1)/2;
Output:
Đưa ra “YES”, hoặc “NO” theo từng dòng tương ứng với test là liên 
thông mạnh hoặc không liên thông mạnh.
6 9 
1 2 2 4 3 1 3 2 3 5 4 3 5 4 5 6 6  3

YES
*/