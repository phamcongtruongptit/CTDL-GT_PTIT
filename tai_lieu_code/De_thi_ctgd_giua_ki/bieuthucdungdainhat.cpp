#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while (t--){
		string s;
		cin>>s;
		stack<char> nganxep;
		while (!nganxep.empty())
		nganxep.pop();
		int count=0;
		for (int i=0;i<s.length();i++){
		if (s[i]=='(')
			nganxep.push(s[i]);
		if (s[i]==')'){
			if (!nganxep.empty()&&nganxep.top()=='('){
				nganxep.pop();
				count++;
			}
		}
	}
	count*=2 ; 
	cout<<count<<endl;
	}
}
