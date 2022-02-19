#include<bits/stdc++.h>
using namespace std ; 
int  n ,e ; 
bool check ; 
vector<int> L[1005] ; 
bool chuaxet[1005] ; 
void input(){
    cin>>n>>e;  
    for(int i=0 ; i<1005 ; i++) L[i].clear() ; 
    int d , c ; 
    while(e--){
        cin>>d>>c ; 
        L[d].push_back(c) ; 
    }
}
void DFS(int u){
    chuaxet[u] = false; 
    stack<int> st ; 
    st.push(u) ; 
    while(!st.empty() ){
        int x= st.top() ; st.pop() ; 
        for(int i=0 ; i<L[x].size() ; i++){
            int v = L[x][i] ; 
            if(chuaxet[v] == true ){
                chuaxet[v] = false ; 
                st.push(x)  ; st.push(v) ; break ; 
            } else if(v == u) check  = true ; // vì có hướng nên không có quay lại
            // dẫn đến nếu v == u(nghĩa là v đã được xét bởi u) thì có chu trình
        }
    }
}
void checkchutrinh(){
    for(int i=1 ; i<=n ; i++){
        check  = false; 
        memset(chuaxet , true  , sizeof(chuaxet)) ; 
        DFS(i) ; 
        if(check == true ) {
            cout<<"YES\n" ; return ; 
        }
    }
    cout<<"NO\n" ; 
}
main(){
    int t; cin>>t ;
    while(t--){
        input() ; 
        checkchutrinh() ; 
    }
}
/*Cho đồ thị có hướng G=<V, E> được biểu diễn dưới dạng danh sách cạnh. Sử dụng thuật toán 
DFS, hãy kiểm tra xem đồ thị có tồn tại chu trình hay không?
Input:
Dòng đầu tiên đưa vào T là số lượng bộ test.
Những dòng tiếp theo đưa vào các bộ test. Mỗi bộ test gồm 2 dòng: 
dòng đầu tiên đưa vào hai số |V|, |E| tương ứng với số đỉnh,  số cạnh của đồ thị; 
Dòng tiếp theo đưa vào các bộ đôi uÎV, vÎV tương ứng với một cạnh của đồ thị.
T, |V|, |E| thỏa mãn ràng buộc: 1≤T≤100; 1≤|V|≤103; 1≤|E|≤|V|(|V|-1)/2;
Output:
Đưa ra YES hoặc “NO” kết quả test theo từng dòng tương ứng 
với đồ thị tồn tại hoặc không tồn tại chu trình.
1
6 9  
1 2 2 4 3 1 3 2 3 5 4 3 5 4 5 6 6 4

YES
*/