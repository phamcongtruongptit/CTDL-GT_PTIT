#include<bits/stdc++.h>
using namespace std ;  
int n , e , u ; 
vector<int> List[1005] ; // danh sách kề
bool chuaxet[1005]; // khai báo mảng chưa xét
void input(){
    cin>>n>>e>>u ; 
    for(int i=1 ; i<1005; i++) List[i].clear() ; 
    memset(chuaxet , true,  sizeof(chuaxet)) ; 
    while(e--){
        int dau , cuoi  ; 
        cin>>dau>>cuoi ; 
        List[dau].push_back(cuoi) ; 
        List[cuoi].push_back(dau) ; 
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
                    break ; // NHỚ DFS THÌ PHẢI CÓ BREAK
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
/*Cho đồ thị vô hướng G=<V, E> được biểu 
diễn dưới dạng danh sách cạnh. Hãy viết thuật toán duyệt theo chiều sâu bắt đầu tại đỉnh uÎV (DFS(u)=?)
Input:
Dòng đầu tiên đưa vào T là số lượng bộ test.
Những dòng tiếp theo đưa vào các bộ test. Mỗi bộ test gồm |E| +1 dòng: dòng đầu tiên đưa 
vào ba số |V|, |E| tương ứng với số đỉnh và số cạnh của đồ thị, và u là đỉnh xuất phát; |E| dòng tiếp 
theo đưa vào các bộ đôi uÎV, vÎV tương ứng với một cạnh của đồ thị.
T, |V|, |E| thỏa mãn ràng buộc: 1≤T≤200; 1≤|V|≤103; 1≤|E|≤|V|(|V|-1)/2;
Output:
Đưa ra danh sách các đỉnh được duyệt theo thuật toán DFS(u) của mỗi test theo khuôn dạng của ví dụ dưới đây.
1
6 9 5
1 2
1 3
2 3
2 4
3 4
3 5
4 5
4 6
5 6

5 3 1 2 4 6
*/
/*
#include<bits/stdc++.h>
using namespace std ;
int G[1005][1005] ; 
int n  , e , u  ; 

void solve() {
    cin>>n>>e>>u ;
    bool chuaxet[n+5] ; 
    for(int i=1 ; i<=n ; i++) chuaxet[i] = true ;  
    memset(G , 0 ,sizeof(G) );
    int dau , cuoi  ; 
    while(e--){
        cin>>dau>>cuoi ; 
        G[dau][cuoi] = 1 ; 
        G[cuoi][dau] = 1; 
    }
    stack<int> st ; 
    chuaxet[u] = false ; 
    st.push(u) ; 
    cout<<u<<" "; 
    while(!st.empty()){
        int k = st.top() ; st.pop() ; 
        for(int i=1 ; i<=n ; i++){
            if(G[k][i] == 1 and chuaxet[i] == true ){
                cout<<i<<" "  ; 
                chuaxet[i] = false ; 
                st.push(k) ; 
                st.push(i) ; 
                break ; 
            }
        }
    }
    cout<<endl ; 
}
main(){
    int t ; cin>>t ; 
    while(t--) solve() ; 
}
*/