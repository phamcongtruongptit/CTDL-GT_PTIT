#include<bits/stdc++.h>
using namespace std;
/*
((a+b))       
(a + (b)/c)   
(a + b*(c-d)) 
*/
stack<int> k,s;
void solve(string a){
	for(int i = 0; i < a.length(); i++){
		if(a[i] == '(') s.push(i);
		if(a[i] == '-' || a[i] == '+' || a[i] == '*' || a[i] == '/') k.push(i);
		if(a[i] == ')'){
			if(!s.empty() && k.empty()){
				cout << "Yes" ; return;
			}
			else if(!s.empty() && !k.empty()){
				if(s.top() > k.top()){
					cout << "Yes" ; return;
				}
			}
			if(!k.empty()) k.pop();
			if(!s.empty()) s.pop();
		}
	}
	cout << "No";
}
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string a;
		getline(cin,a);
		solve(a);
		while(!s.empty()) s.pop();
		while(!k.empty()) k.pop();
		cout << endl;
	}
	return 0;
}