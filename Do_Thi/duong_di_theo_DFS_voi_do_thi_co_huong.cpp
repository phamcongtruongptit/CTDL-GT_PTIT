#include<bits/stdc++.h>
using namespace std ;//  tìm đường đi từ s --> t 
int n,e,s,t   ; 
bool chuaxet[1005] ; 
int truoc[1005] ; // mảng trước
vector<int> L[1005] ; 
void input(){
    cin>>n>>e>>s>>t ; 
    memset(chuaxet , true , sizeof(chuaxet)) ; 
    memset(truoc, 0 , sizeof(truoc)) ; 
    for(int i=0 ; i<1005 ; i++) L[i].clear() ; 
    while(e--){
        int d , c ;
        cin>>d>>c  ; 
        L[d].push_back(c) ; 
    }
}
void dfs(int s){
    chuaxet[s] = false ; 
    for(int i=0 ; i<L[s].size(); i++){
        int v= L[s][i] ; 
        if(chuaxet[v] == true){
            truoc[v] = s ; 
            chuaxet[v] = false; 
            dfs(v) ; 
        }
    }
}
void induongdi(){ // hàm in đường đi
    if(truoc[t] == 0){ // nếu không có đường đi
        cout<<-1<<endl ; 
		return ;
    }
    stack<int> st ; 
    st.push(t); 
    int u = truoc[t] ; 
    while(u!=s){
        st.push(u) ; 
        u = truoc[u] ; 
    }
    st.push(s) ; 
    while(!st.empty()){
        cout<<st.top()<<" " ; 
        st.pop() ; 
    }
    cout<<endl ; 
}
main(){
    int t;cin>>t; 
    while(t--){
        input() ; 
        dfs(s) ; 
        induongdi() ; 
    }
}
/*Cho đồ thị có hướng G=<V, E> được biểu diễn dưới dạng danh sách cạnh. 
Hãy tìm đường đi từ đỉnh sÎV đến đỉnh tÎV trên đồ thị bằng thuật toán DFS.
Input:
Dòng đầu tiên đưa vào T là số lượng bộ test.
Những dòng tiếp theo đưa vào các bộ test. Mỗi bộ test gồm 2 dòng: dòng đầu 
tiên đưa vào bốn số |V|, |E|, sÎV, tÎV tương ứng với số đỉnh, số cạnh,  đỉnh u, đỉnh v; 
Dòng tiếp theo đưa vào các bộ đôi uÎV, vÎV tương ứng với một cạnh của đồ thị.
T, |V|, |E| thỏa mãn ràng buộc: 1≤T≤100; 1≤|V|≤103; 1≤|E|≤|V|(|V|-1)/2;
Output:
Đưa ra đường đi từ đỉnh s đến đỉnh t của mỗi test theo thuật toán DFS của mỗi test theo 
khuôn dạng của ví dụ dưới đây. Nếu không có đáp án, in ra -1.
1
6  9  1  6
1 2 2 5 3 1 3 2 3 5 4 3 5 4 5 6 6 4

1 2 5 6
*/