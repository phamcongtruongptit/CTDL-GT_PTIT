#include<bits/stdc++.h>
using namespace std;
void process()
{
	int n;
	cin >> n;
	int a[102][102];
	for(int i = 0; i < n; i++)
    {
		for(int j = 0; j < n; j++) cin >> a[i][j];
    }
	for(int i = 0; i < n; i++) sort(a[i], a[i] + n);
	int s[102];
	int count = 0;
	int b[n];
	for(int i = 0; i < n; i++) b[i] = 0;
	int f = 0;
	set<int> st;
	for(b[0] = 0; b[0] < n; b[0]++)
    {
		int value = a[0][b[0]];
		bool check = true;
		for(int i = 1; i < n; i++)
        {
			while(b[i] < n && a[i][b[i]] <= value) b[i]++;
			if(a[i][b[i] - 1] != value) check = false; 
        	if(b[i] == n)
            { 
            	f = 1; 
           		break; 
        	} 
		}
		if(check)
        {
			st.insert(value);
			s[count] = value;
			count++;
		} 
        if(f == 1) break; 	
	}
		int dem = 0;
	int kt;
	for(int i = 0; i < count; i++)
    {
		kt = 0;
		for(int j = i; j >= 0; j--)
        {
			if(a[i] == a[j]) kt++;
		}
		if(kt == 1) dem++;
	}
	cout << dem << endl;
}
int main (){
	int t;
	cin >> t;
	while(t--) process();
	return 0;
}