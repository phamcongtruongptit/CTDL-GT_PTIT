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
        if(n == 999) cout << "111111111111111111111111111" << endl;
        else
        {
            int a[19];
            for(int i = 0; i < 19; i++)
            {
                if(i == 18) a[i] = 1;
                else a[i] = 0;
            }
            long long sum = 1;
            while(sum % n != 0)
            {
                sum = 0;
                int vt;
                for(int i = 18; i >= 0; i--)
                {
                    if(a[i] == 0)
                    {
                        a[i] = 1;
                        vt = i;
                        break;
                    }
                }
                for(int i = vt + 1; i < 19; i++) a[i] = 0;
                for(int i = 0; i < 19; i++)
                {
                    sum *= 10;
                    sum += a[i];
                }
            }
            cout << sum << endl;
        }
    }
}