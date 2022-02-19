#include<bits/stdc++.h>
using namespace std ; 
int visit[1005] , n ,e ; 
vector<int> L[1005] ; 
bool check ; 
void input() {
    cin>>n>>e; 
    int d ,c  ; 
    for(int i=0 ; i<1005 ; i++) L[i].clear() ; 
    while(e--){
        cin>>d>>c ; 
        L[d].push_back(c) ; 
        L[c].push_back(d) ; 
    }
}
void bfs(int u){
    visit[u] = 1 ; 
    queue<int> Q ; Q.push(u) ; 
    while(!Q.empty()){
        int x = Q.front() ;  Q.pop() ;
        for(int i=0 ; i<L[x].size() ; i++){
            int v = L[x][i] ; 
            if(visit[v] == 0){ // chưa xét là đánh dấu 0
                visit[v] =1 ; Q.push(v) ; 
            } else if(visit[v] == 1) check = true ; // xét rồi nhưng mà bởi đỉnh khác thì 
            // có chu trình
        } 
        visit[x] = 2  ; // điểm đã lấy ra thì đánh dấu là 2
    }
}
void checkchutrinh(){
    for(int i=1 ; i<=n ; i++) {
        check   = false ; 
        memset(visit , 0 , sizeof(visit)) ; 
        bfs(i) ; 
        if(check == true){
            cout<<"YES\n" ; return  ; 
        }
    }
    cout<<"NO\n" ; 
}

main(){
    int t;cin>>t ; 
    while(t--){
        input() ; 
        checkchutrinh() ; 
    }
}
/*Cho đồ thị vô hướng G=<V, E> được biểu diễn dưới 
dạng danh sách cạnh. Hãy kiểm tra xem đồ thị có tồn tại chu trình hay không?
Input:
Dòng đầu tiên đưa vào T là số lượng bộ test.
Những dòng tiếp theo đưa vào các bộ test. Mỗi bộ test gồm 2 dòng: 
dòng đầu tiên đưa vào hai số |V|, |E| tương ứng với số đỉnh,  số cạnh của đồ thị; 
Dòng tiếp theo đưa vào các bộ đôi u, v tương ứng với một cạnh của đồ thị.
T, |V|, |E| thỏa mãn ràng buộc: 1≤T≤100; 1≤|V|≤103; 1≤|E|≤|V|(|V|-1)/2;
Output:
Đưa ra YES hoặc “NO” kết quả test theo từng dòng tương ứng với đồ 
thị tồn tại hoặc không tồn tại chu trình.
1
6  9
1 2 1 3 2 3 2 5 3 4 3 5 4 5 4 6 5 6

YES
*/