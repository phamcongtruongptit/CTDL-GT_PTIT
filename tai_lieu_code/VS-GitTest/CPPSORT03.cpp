#include<bits/stdc++.h>
using namespace std;
int a[10005], b[10005], n, ans;
vector<vector<int> > v;
void countSortArr()
{
	v.clear();
	for(int i = 0; i < n; i++)
    {
		v.resize(v.size() + 1);
		v[i].push_back(a[i]);
		v[i].push_back(i);
	}
	sort(v.begin(), v.end());
	for(int i = 0; i < v.size(); i++)
    {
		if(b[i] == 0 && v[i][1] != i)
        {
			int j = i, count = 0;
			while(!b[j])
            {
				b[j] = 1;
				j = v[j][1];
				count++;
			}
			if(count > 0) ans += count - 1;
		} 
	}
}
int main()
{
    int t; cin >> t;
    while(t--)
    {
    	cin >> n;
    	ans = 0;
    	for(int i = 0; i < n; i++)
        {
    		cin >> a[i];
    		b[i] = 0;
		}
    	countSortArr();
    	cout << ans << endl;
    }
    
}