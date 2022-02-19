#include<bits/stdc++.h>
using namespace std ; 
int n,e,u ; 
bool chuaxet[1005] ; 
vector<int> L[1005] ; 
void input(){
    cin>>n>>e>>u ; 
    memset(chuaxet , true , sizeof(chuaxet)) ; 
    for(int i=0 ; i<1005; i++) L[i].clear() ; 
    while(e--){
        int d,c ; cin>>d>>c ; 
        L[d].push_back(c) ; 
        L[c].push_back(d) ; 
    }
}
void bfs(int u){
    queue<int>Q ; 
    Q.push(u) ; 
    chuaxet[u] = false ; 
    while(!Q.empty()){
        int s = Q.front() ; Q.pop() ; 
        cout<<s<<" "; 
        for(int i=0 ; i<L[s].size() ; i++){
            int v = L[s][i] ; 
            if(chuaxet[v] == true) {
                Q.push(v) ; 
                chuaxet[v] = false ;
            }
        }
    }
    cout<<endl ; 
}
main(){
    int t; cin>>t ; 
    while(t--){
        input() ; 
        bfs(u)  ; 
    }
}
/*Cho đồ thị vô hướng G=<V, E> được biểu diễn dưới dạng danh sách cạnh. 
Hãy viết thuật toán duyệt theo chiều rộng bắt đầu tại đỉnh uÎV (BFS(u)=?)
Input:
Dòng đầu tiên đưa vào T là số lượng bộ test.
Những dòng tiếp theo đưa vào các bộ test. Mỗi bộ test gồm 2 dòng: dòng đầu tiên 
đưa vào ba số |V|, |E|, uÎV tương ứng với số đỉnh, số cạnh và đỉnh bắt đầu duyệt; Dòng 
tiếp theo đưa vào các bộ đôi uÎV, vÎV tương ứng với một cạnh của đồ thị.
T, |V|, |E| thỏa mãn ràng buộc: 1≤T≤200; 1≤|V|≤103; 1≤|E|≤|V|(|V|-1)/2;
Output:
Đưa ra danh sách các đỉnh được duyệt theo thuật toán BFS(u) của mỗi test theo khuôn dạng của ví dụ dưới đây.
1
6 9 1
1 2 1 3 2 3 2 5 3 4 3 5 4 5 4 6 5 6

1 2 3 5 4 6
*/