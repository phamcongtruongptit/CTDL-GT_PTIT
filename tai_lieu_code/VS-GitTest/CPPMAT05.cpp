#include<iostream>
using namespace std;
int a[105][105], n;
int maxR()
{
    int res = 0;
    for(int i = 0; i < n; i++)
    {
        int sum = 0;
        for(int j = 0; j < n; j++) sum += a[i][j];
        res = max(sum, res);
    }
    return res;
}
int maxC()
{
    int res = 0;
    for(int i=0; i<n; i++)
    {
        int sum = 0;
        for(int j = 0; j < n; j++) sum += a[j][i];
        res = max(sum, res);
    }
    return res;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int sumArr = 0;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                cin >> a[i][j];
                sumArr += a[i][j];
            }
        }
        int MAX = max(maxC(), maxR());
        int ans = MAX * 2 * n - 2 * sumArr;
        cout << ans / 2 << endl;
    }
}
