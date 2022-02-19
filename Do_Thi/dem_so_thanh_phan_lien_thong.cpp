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
        L[c].push_back(d) ; 
    }
}
void dfs(int u){
    chuaxet[u] = false ; 
    for(int i=0 ; i<L[u].size() ; i++){
        int v = L[u][i] ; 
        if(chuaxet[v] == true ){
            dfs(v) ; 
        }
    }
}
int tplt(){
    int count = 0 ;
    for(int i=1 ; i<=n ; i++){
        if(chuaxet[i] == true){ // nếu mà đỉnh true thì duyệt dfs tại đỉnh đó.
            count ++ ; 
            dfs(i) ; 
        }
    }
    return count ; 
}
main(){
    int t ; cin>>t ; 
    while(t--){
        input() ; 
        cout<<tplt()<<endl ; 
    }
}
/*Cho đồ thị vô hướng G=<V, E> được biểu diễn dưới dạng danh sách cạnh. 
Hãy tìm số thành phần liên thông của đồ thị.
Input:
Dòng đầu tiên đưa vào T là số lượng bộ test.
Những dòng tiếp theo đưa vào các bộ test. Mỗi bộ test gồm 2 dòng: dòng 
đầu tiên đưa vào hai số |V|, |E| tương ứng với số đỉnh và số cạnh; Dòng tiếp theo 
đưa vào các bộ đôi uÎV, vÎV tương ứng với một cạnh của đồ thị.
T, |V|, |E| thỏa mãn ràng buộc: 1≤T≤100; 1≤|V|≤103; 1≤|E|≤|V|(|V|-1)/2;
Output:
Đưa ra số thành phần liên thông của đồ thị.
1
6 6 
1 2 1 3 2 3 3 4 3 5 4 5

2
*/