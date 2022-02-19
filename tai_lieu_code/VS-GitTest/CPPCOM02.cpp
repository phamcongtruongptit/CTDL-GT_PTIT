#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n, k, dung = 0;
		int th[21];
    	cin >> n >> k;
    	for(int i = 1; i <= k; i++)
		{
     	   th[i] = i;
    	}
    	do
		{
			for (int i = 1; i <= k; i++)
			{
				cout << th[i];
    		}
        	cout << " ";
        	int i = k;
			while(i > 0 && th[i] == n - k + i) i--;
    		if(i > 0)
			{
        		th[i]++;
        		for(int j = i + 1; j <= k; j++)
				{
            		th[j] = th[i] + j - i;
        		}
        	}
			else dung = 1;
    	} while(dung != 1);
    	cout << endl;
    }
    return 0;
}