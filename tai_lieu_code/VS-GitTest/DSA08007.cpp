#include <bits/stdc++.h> 
using namespace std; 
int main() 
{ 
	int t;
	cin >> t;
	while(t--)
	{
    	string str;
        cin >> str;
        int res = 0;
        bool ok = true;
        queue<string> q;
        q.push("1");
        while(ok)
        {
            string s1 = q.front();
            q.pop();
            if(s1.size() > str.size()) ok = false;
            else if(s1.size() < str.size()) res++;
            else
            {
                if(s1 > str) ok = false;
                else res++;
            }
            string s2 = s1;
            q.push(s1.append("0"));
            q.push(s2.append("1"));
        }
        cout << res << endl;
    }
    return 0; 
} 