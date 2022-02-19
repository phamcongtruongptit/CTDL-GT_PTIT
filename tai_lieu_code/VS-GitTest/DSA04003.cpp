#include <bits/stdc++.h>
using namespace std;
long long c = 123456789;
long long solve(long long n)
{
    if(n == 1) return 1;
    long long x = solve(n / 2) % c;
    if(n % 2 == 0) return (2 * (x * x % c) % c) % c;
    else return (4 * (x * x % c) % c) % c;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        cout << solve(n) << endl;
    }
}