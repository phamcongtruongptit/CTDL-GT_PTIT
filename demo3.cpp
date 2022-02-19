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
	queue<int>Q ;  
	Q.push(u) ; 
	while(!Q.empty() ){
		int t = Q.front() ; Q.pop() ; 
		for(int i=0 ; i<L[t].size() ; i++){
			int v= L[t][i] ; 
			if(chuaxet[v] == true ){
				truoc[v] = t  ; 
				chuaxet[v] = false ;
				Q.push(v) ; 
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