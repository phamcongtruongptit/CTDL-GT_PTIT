#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string str;
		getline(cin,str);
		stack<string> s;
		string r; // pham cong truong
		for(int i = 0; i < str.length(); i++){
			if(!isblank(str[i])) r += str[i];
			else {
				s.push(r); r = "";
			}
		}
		s.push(r);
		while(!s.empty()){
			cout << s.top() << " ";
			s.pop();
		}
		
		cout << endl;
	}
	

	return 0;
}