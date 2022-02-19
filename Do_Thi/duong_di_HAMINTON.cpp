#include<bits/stdc++.h>
using namespace std;
int n,m,check;
vector<int> L[20];
bool chuaxet[20];
void TRY(int u,int i){
	if(i==n) {
        check = 1;  return;
	}
	for(int j=0;j<L[u].size();j++){
        int v = L[u][j];
		if(chuaxet[v]){
			chuaxet[v]=false;
			TRY(v,i+1);
			chuaxet[v]=true;
		}
	}
}
void solve(){
	int t,i,u,v; cin>>t;
	while(t--){
		for(i=0;i<20;i++) L[i].clear();
		memset(chuaxet,true,sizeof(chuaxet));
		cin>>n>>m;
		for(i=1;i<=m;i++){
			cin>>u>>v;
			L[u].push_back(v);
			L[v].push_back(u);
		}
		check=0;
		for(i=1;i<=n;i++){
			chuaxet[i]=false;
            TRY(i,1);
            chuaxet[i] = true;
		}
		cout<<check<<endl;
	}
}
main(){
    solve() ; 
}
/*Đường đi đơn trên đồ thị có hướng hoặc vô hướng đi qua tất cả các đỉnh của đồ 
thị mỗi đỉnh đúng một lần được gọi là đường đi Hamilton. 
Cho đồ thị vô hướng G = <V, E>, hãy kiểm tra xem đồ thị có đường đi Hamilton hay không?
Input:
Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai phần:
 phần thứ nhất đưa vào hai số V, E tương ứng với số đỉnh, số cạnh của đồ thị; phần thứ hai
  đưa vào các cạnh của đồ thị.
T, V, E thỏa mãn ràng buộc: 1≤T ≤100; 1≤V≤10; 1≤ E ≤15.
Output:
Đưa ra 1 hoặc 0 tương ứng với test có hoặc không có đường đi Hamilton theo từng dòng.
2
4 4
1 2 2 3 3 4 2 4
4 3
1 2 2 3 2 4

1
0
*/