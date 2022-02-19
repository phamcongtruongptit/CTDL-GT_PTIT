#include <bits/stdc++.h>
using namespace std;
bool checkNT(long long n)
{
    if(n < 2) return false;
    for(int i = 2; i <= sqrt(n); i++) if(n % i == 0) return false;
    return true;
}
bool checkCS(long long n)
{
    int k = 0;
    while(n != 0)
    {
        int b = n % 10;
        n /= 10;
        if(b != 2 && b != 3 && b != 5 && b != 7) return false;
        k += b;
    }
    if(!checkNT(k)) return false;
    return true;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        long long a, b;
        cin >> a >> b;
        long long dem = 0;
        for(int i = a; i <= b; i++)
        {
            if(checkCS(i))
            {
                if(checkNT(i)) dem++;
            }
        }
        cout << dem << endl;
    }
}