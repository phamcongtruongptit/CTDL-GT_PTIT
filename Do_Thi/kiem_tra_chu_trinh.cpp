#include<bits/stdc++.h>
using namespace std ;
int n , e  ;  // có chu trình khi duyệt dfs mà gặp 1 điểm đã xét mà điểm đã xét đó ko phải do 
// đỉnh đó mà là được duyệt do đỉnh #
bool chuaxet[1005] ; 
vector<int> L[1005] ; 
bool check ; 
void input(){
    cin>>n>>e ; 
    for(int i=0 ; i<1005 ; i++) L[i].clear() ; 
    memset(chuaxet , true , sizeof(chuaxet)) ; 
    while(e--){
        int d , c ; cin>>d>>c ; 
        L[d].push_back(c) ; 
        L[c].push_back(d) ; 
    }
}
void dfs(int u, int t){ // t là đỉnh trước u
    chuaxet[u] = false ; 
    for(int i=0 ; i<L[u].size() ; i++){
        int v = L[u][i] ; 
        if(chuaxet[v] == true ){
            dfs(v , u) ; 
        } else if(chuaxet[v] == false and v!=t ) check = true ; // nếu v đã được duyệt ..
        //.. mà ko phải do bởi đỉnh u. 
    }
}
void chutrinh(){
    check = false ; 
    for(int i=1 ; i<=n ; i++){
        memset(chuaxet , true , sizeof(chuaxet)) ; 
        dfs(i,0) ; 
        if(check == true) { // nếu có chu trình thì break ra luôn
            cout<<"YES"<<endl ; return ; 
        }
    }
    cout<<"NO"<<endl ; 
}
main(){
    int t ; cin>>t ; 
    while(t--){
        input() ; 
        chutrinh() ; 
    }
}
/*Cho đồ thị vô hướng G=<V, E> được biểu diễn dưới dạng danh sách cạnh. 
Hãy kiểm tra xem đồ thị có tồn tại chu trình hay không?
Input:
Dòng đầu tiên đưa vào T là số lượng bộ test.
Những dòng tiếp theo đưa vào các bộ test. Mỗi bộ test gồm 2 dòng: 
dòng đầu tiên đưa vào hai số |V|, |E| tương ứng với số đỉnh,  số cạnh 
của đồ thị; Dòng tiếp theo đưa vào các bộ đôi uÎV, vÎV tương ứng với một cạnh của đồ thị.
T, |V|, |E| thỏa mãn ràng buộc: 1≤T≤100; 1≤|V|≤103; 1≤|E|≤|V|(|V|-1)/2;
Output:
Đưa ra YES hoặc “NO” kết quả test theo từng dòng tương ứng với đồ thị tồn tại hoặc không tồn tại chu trình.
1
6  9
1 2 1 3 2 3 2 5 3 4 3 5 4 5 4 6 5 6

YES
*/
/*
#include<bits/stdc++.h>
using namespace std ; 
vector<int> L[1005] ; 
int n  ,  e ; 
int truoc[1005] ; 
bool chuaxet[1005] ; 
void input() {
	cin>>n>>e ; 
	memset(chuaxet , true  ,  sizeof(chuaxet)) ; 
	memset(truoc, 0 , sizeof(truoc)) ;
	for(int i=0 ; i<1005 ; i++) L[i].clear() ;  
	int d,  c ;
	while(e--){
		cin>>d>>c ; 
		L[d].push_back(c) ; 
		L[c].push_back(d) ;
	}
}
bool checkchutrinh(int u){
	chuaxet[u] = false  ; 
	stack<int> st ; 
	st.push(u) ; 
	while(!st.empty() ){
		int t = st.top() ; st.pop() ; 
		for(int i=0 ; i<L[t].size() ; i++){
			int v= L[t][i] ; 
			if(chuaxet[v] == true ){
				truoc[v] = t  ; 
				chuaxet[v] = false ;
				st.push(t) ; 
				st.push(v) ; 
			} else if(chuaxet[v] == false and truoc[v]!=t and truoc[t]  != v ){
				return true ; 
			} 
		}
	}
	return false; 
}
void kiemtra(){
	for(int i=1 ; i<=n ; i++){
		memset(chuaxet , true , sizeof(chuaxet)) ; 
		if(checkchutrinh(i) == true) {
			cout<<"YES\n" ; return; 
		}
	}
	cout<<"NO\n" ; 
}
main(){
	int t ; cin>>t ; 
	while(t--){
		input() ; 
		kiemtra() ; 
	}
}
*/