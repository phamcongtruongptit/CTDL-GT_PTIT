#include<bits/stdc++.h>
using namespace std ;  
int n , e , u ; 
vector<int> List[1005] ; 
bool chuaxet[1005];
void input(){
    cin>>n>>e>>u ; 
    for(int i=1 ; i<1005; i++) List[i].clear() ; 
    memset(chuaxet , true,  sizeof(chuaxet)) ; 
    while(e--){
        int dau , cuoi  ; 
        cin>>dau>>cuoi ; 
        List[dau].push_back(cuoi) ; 
      //  List[cuoi].push_back(dau) ; 
    }
}
void dfs(int u){
    cout<<u<<" " ; 
    stack<int>st ; 
    chuaxet[u] = false ; 
    st.push(u) ; 
    while(!st.empty()){
        int s = st.top() ; 
        st.pop() ; 
        for(int i=0 ; i<List[s].size() ; i++){
                int v = List[s][i] ; 
                if(chuaxet[v] == true){
                    cout<<v<<" " ; 
                    chuaxet[v] = false ;
                    st.push(s); 
                    st.push(v); 
                    break ; 
                }
        }
    }
}
main(){
    int t ; 
    cin>>t  ; 
    while(t--){
        input() ; 
        dfs(u) ; 
        cout<<endl; 
    }
}
/*Cho đồ thị có hướng G=<V, E> được biểu diễn dưới dạng danh sách cạnh. Hãy v
iết thuật toán duyệt theo chiều sâu bắt đầu tại đỉnh uÎV (DFS(u)=?)
Input:
Dòng đầu tiên đưa vào T là số lượng bộ test.
Những dòng tiếp theo đưa vào các bộ test. Mỗi bộ test gồm 2 dòng: dòng đầu 
tiên đưa vào ba số |V|, |E|, uÎV tương ứng với số đỉnh, số cạnh và đỉnh bắt đầu 
duyệt; Dòng tiếp theo đưa vào các bộ đôi uÎV, vÎV tương ứng với một cạnh của đồ thị.
T, |V|, |E| thỏa mãn ràng buộc: 1≤T≤200; 1≤|V|≤103; 1≤|E|≤|V|(|V|-1)/2;
Output:
Đưa ra danh sách các đỉnh được duyệt theo thuật toán DFS(u) của mỗi test theo 
khuôn dạng của ví dụ dưới đây.

1
6 9 5
1 2 2 5 3 1 3 2 3 5 4 3 5 4 5 6 6 3

5 4 3 1 2 6
*/