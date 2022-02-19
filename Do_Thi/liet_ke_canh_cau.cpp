#include<bits/stdc++.h>
using namespace std ; 
int n,e ; 
vector<int> L[1005] ; 
bool chuaxet[1005] ; 
void init(){
    memset(chuaxet, true , sizeof(chuaxet)) ; 
}
void input(){
    for(int i=0 ; i<1005 ; i++) L[i].clear() ; 
    cin>>n>>e ; 
    int d ,c ; 
    while(e--){
        cin>>d>>c ; 
        L[d].push_back(c) ; 
        L[c].push_back(d) ; 
    }
}
void bfs(int u){ // ham duyệt BFS tại từ U
    chuaxet[u] = false  ;
    queue<int> Q ; 
    Q.push(u) ; 
    while(!Q.empty()){
        int k = Q.front() ; Q.pop() ; 
        for(int i=0 ; i<L[k].size() ; i++){
            int v =L[k][i] ; 
            if(chuaxet[v] == true) {
                chuaxet[v] = false  ; 
                Q.push(v) ; 
            }
      }
    }
}
// sau khi bỏ cạnh mà cạnh đó là cầu thì dfs hoặc bfs sẽ ko đi được đến hết các các đỉnh
//.khi duyệt lại nếu có đỉnh nào mà chuaxet = true thì nghĩa là cạnh đó là cầu
void canhcau(){
    init() ; // khởi tạo lại mảng chưa xét
    for(int i=1 ; i<=n; i++){
        for(int j=0 ; j<L[i].size(); j++) {
            int k = L[i][j] ; 
            L[i].erase(L[i].begin() + j) ; // xóa cạnh
            bfs(i) ; // duyệt tại i
            bool check = false ; // biến kiểm tra
            for(int u=1 ; u<=n ; u++)
                if(chuaxet[u] == true ) { // = true thì có nghĩa là ko đi được hết (nhiều hơn thành phần liên thông)
                    check  = true;break ;  }
            if(check == true and i<k ) cout<<i<<" "<<k<<" " ; // là cạnh cầu. in ra với đk đỉnh trước < sau. 
            L[i].insert(L[i].begin()+j , k) ;  // thêm lại cạnh
            init() ; // khởi tạo lại để duyệt tiếp vòng lắp tiếp theo
        }
    }
}
main(){
    int t; cin>>t ; 
    while(t--){
        input() ; 
        canhcau() ; 
        cout<<endl ; 
    }
}
/*Cho đồ thị vô hướng liên thông G=<V, E> được biểu diễn dưới dạng danh sách cạnh. 
Hãy đưa ra tất cả các cạnh cầu của đồ thị?
Input:
Dòng đầu tiên đưa vào T là số lượng bộ test.
Những dòng tiếp theo đưa vào các bộ test. Mỗi bộ test gồm |E| + 1 dòng: dòng đầu tiên đưa vào hai số |V|, 
|E| tương ứng với số đỉnh và số cạnh; |E| dòng tiếp theo đưa vào các bộ đôi u, v tương ứng với một cạnh của đồ thị.
T, |V|, |E| thỏa mãn ràng buộc: 1≤T≤100; 1≤|V|≤103; 1≤|E|≤|V|(|V|-1)/2;
Output:
Đưa ra danh sách các cạch cầu của mỗi test theo từng dòng. In ra đáp án theo thứ tự từ điển, 
theo dạng “a b …” với a < b.
1
5 5
1 2 
1 3
2 3
2 5
3 4

2 5 3 4
*/