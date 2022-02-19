#include <bits/stdc++.h>
using namespace std;

int n, x[20], dem;
bool Cols[100], Xuoi[100], Nguoc[100];

void sapxep_hau(int i)
{
	for(int j = 1; j < n + 1; j++)
	{
		if(!Cols[j] && !Xuoi[i - j + n] && !Nguoc[i + j -1])
		{
			Cols[j] = 1; Xuoi[i - j + n] = 1; Nguoc[i + j - 1] = 1;
			if (i == n) dem ++;
			else sapxep_hau(i + 1);
			Cols[j] = 0; Xuoi[i - j + n] = 0; Nguoc[i + j - 1] = 0;
		}
	}
}

void xl()
{
	cin >> n; dem = 0;
	sapxep_hau(1);
	cout << dem;

}

int main()
{
	int t; 
	cin >> t;
	while (t -- )
	{
		xl();
		cout << endl;
	}
}
