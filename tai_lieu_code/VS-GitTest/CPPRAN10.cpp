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
        vector<int> a;
        for(int i = 0; i < n; i++)
        {
            int c;
            cin >> c;
            a.push_back(c);
        }
        int i = 0, j = n - 1, dem = 0;
        while(i <= j)
        {
            if(a[i] == a[j])
            {
                i++; j--;
            }
            else
            {
                if(a[i] < a[j])
                {
                    i++;
                    a[i] += a[i - 1];
                    dem++;
                }
                else
                {
                    j--;
                    a[j] += a[j + 1];
                    dem++;
                }
            }
        }
        cout << dem << endl;
    }
}