#include<bits/stdc++.h>
using namespace std ;
int n, e ; 
bool chuaxet[1005] ; 
vector <int>  L[1005] ;
void init(){
    memset(chuaxet , true  , sizeof(chuaxet)) ; 
} 
void input(){
    cin>>n>>e ; 
    for(int i=1 ; i<1005 ; i++) L[i].clear() ; 
    int d ,c ; 
    while(e--){
        cin>>d>>c ;
        L[d].push_back(c) ; 
        L[c].push_back(d) ; 
    }
}
void bfs(int u){
    chuaxet[u] = false ;
    queue<int>Q ; 
    Q.push(u) ; 
    while(!Q.empty()){
        int k = Q.front()  ; Q.pop() ; 
        for(int i=0 ; i<L[k].size()  ; i++){
            int v = L[k][i] ; 
            if(chuaxet[v] == true ){
                chuaxet[v] =false ; 
                Q.push(v) ; 
            }
        }
    }
}
void dinhtru(){
    init() ; 
    for(int i=1 ; i<=n ; i++){
        chuaxet[i] = false ; // xóa đỉnh bằng cách cho đã duyệt
        if(i==1 ) bfs(2) ; // duyệt từ 1 đỉnh # đỉnh đang xét
        else bfs(1) ; 
        bool check = false ;// kiểm tra...
        for(int j=1; j<=n ; j++)
            if(chuaxet[j] == true) { // ...nếu  mà có đỉnh ko được duyệt đến thì chứng tỏ số thành phần liên thông
            // tăng lên
                check = true ; break ; 
            }
        if(check) cout<<i<<" " ; 
        init() ;  // trả lại để xét các đỉnh khác.
    }
    cout<<endl ; 
}
main(){
    int t; cin>>t ; 
    while(t--){
        input() ; 
        dinhtru() ; 
    }
}
/*Cho đồ thị vô hướng liên thông G=<V, E> được biểu diễn dưới dạng 
danh sách cạnh. Hãy đưa ra tất cả các đỉnh trụ của đồ thị?
Input:
Dòng đầu tiên đưa vào T là số lượng bộ test.
Những dòng tiếp theo đưa vào các bộ test. Mỗi bộ test gồm 2 dòng: 
dòng đầu tiên đưa vào hai số |V|, |E| tương ứng với số đỉnh và số cạnh; 
Dòng tiếp theo đưa vào các bộ đôi uÎV, vÎV tương ứng với một cạnh của đồ thị.
T, |V|, |E| thỏa mãn ràng buộc: 1≤T≤100; 1≤|V|≤103; 1≤|E|≤|V|(|V|-1)/2;
Output:
Đưa ra danh sách các đỉnh trụ của mỗi test  theo từng dòng.
1
5 5
1 2 1 3 2 3 2 5 3 4

2 3
*/