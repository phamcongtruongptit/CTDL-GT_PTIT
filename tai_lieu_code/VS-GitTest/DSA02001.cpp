#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n + 5];
        for(int i = 0; i < n; i++) cin >> a[i];
        cout << "[";
        for(int i = 0; i < n; i++)
        {
            if(i != n - 1) cout << a[i] << " ";
            else cout << a[i];
        }
        cout << "]" << endl;
        int k = n - 1;
        for(int i = 0; i < n - 1; i++)
        {
        	cout << "[";
        	for(int j = 0; j < k; j++)
        	{
        		a[j] = a[j] + a[j + 1];
        		if(j != k - 1) cout << a[j] << " ";
        		else cout << a[j];
			}
			k--;
			cout << "]" << endl;
		}
    }
}
