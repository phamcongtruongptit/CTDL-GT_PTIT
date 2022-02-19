#include<bits/stdc++.h>
using namespace std ; // tìm đường đi từ đỉnh s-->t . 
int n,e,s,t,truoc[1005];
vector<int> L[1005] ; 
bool chuaxet[1005] ; 
void input(){
    cin>>n>>e>>s>>t ; 
    memset(chuaxet,true, sizeof(chuaxet)) ; 
    memset(truoc, 0 , sizeof(truoc)) ; 
    for(int i=0 ;i<1005 ; i++)L[i].clear() ; 
    while(e--){
        int  d ,c ; cin>>d>>c ; 
        L[d].push_back(c) ; 
        L[c].push_back(d) ; 
    }
}
void bfs(int s){
    chuaxet[s] = false ; 
    queue<int> Q ; 
    Q.push(s) ; 
    while(!Q.empty()){
        int k = Q.front() ; Q.pop() ; 
        for(int i=0 ; i<L[k].size() ; i++){
            int v =  L[k][i] ; 
            if(chuaxet[v] == true ){
                truoc[v] = k ; // cập nhật hàm trước
                Q.push(v) ; 
                chuaxet[v] = false ; 
            }
        }
    }
}
void induongdi(){
    if(truoc[t] == 0){ // nếu không có đường đi
        cout<<-1<<endl ; 
        return;
    }
    stack<int> st; 
    st.push(t) ; 
    int u = truoc[t] ; 
    while(u!=s){
        st.push(u) ; u=truoc[u] ; 
    }
    st.push(s) ; 
    while(!st.empty()){
        cout<<st.top()<<" " ; 
        st.pop() ; 
    }
    cout<<endl ; 
}
main(){
    int t; cin>>t ; 
    while(t--){
        input() ; 
        bfs(s) ; 
        induongdi() ; 
    }
}
/*Cho đồ thị vô hướng G=<V, E> được biểu diễn dưới dạng danh sách cạnh. 
Hãy tìm đường đi từ đỉnh sÎV đến đỉnh tÎV trên đồ thị bằng thuật toán BFS.
Input:
Dòng đầu tiên đưa vào T là số lượng bộ test.
Những dòng tiếp theo đưa vào các bộ test. Mỗi bộ test gồm 2 dòng: dòng đầu 
tiên đưa vào bốn số |V|, |E|, sÎV, tÎV tương ứng với số đỉnh, số cạnh,  đỉnh u, đỉnh v; Dòng tiếp theo đưa vào các bộ đôi uÎV, vÎV tương ứng với một cạnh của đồ thị.
T, |V|, |E| thỏa mãn ràng buộc: 1≤T≤100; 1≤|V|≤103; 1≤|E|≤|V|(|V|-1)/2;
Output:
Đưa ra đường đi từ đỉnh s đến đỉnh t của mỗi test theo thuật toán BFS của mỗi 
test theo khuôn dạng của ví dụ dưới đây. Nếu không có đáp án, in ra -1.
1
6 9 1 6
1 2 1 3 2 3 2 5 3 4 3 5 4 5 4 6 5 6

1 2 5 6
*/