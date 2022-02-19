#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n;
    if(n % 2 == 0)
    {
        for(int i = 0; i < n; i++) cout << "0 ";
        cout << endl;
        int a[11] = {0};
        m = n / 2;
        while(1)
        {
            int vt = -1;
            vector<int> b;
            for(int i = m - 1; i >= 0; i--)
            {
                if(a[i] == 0)
                {
                    a[i] = 1;
                    vt = i;
                    break;
                }
            }
            if(vt == -1) break;
            for(int i = vt + 1; i < m; i++) a[i] = 0;
            for(int i = 0; i < m; i++)
            {
                b.push_back(a[i]);
            }
            for(int i = 0; i < b.size(); i++) cout << b[i] << " ";
            for(int i = b.size() - 1; i >= 0; i--) cout << b[i] << " ";
            cout << endl;
        }
    }
    else
    {
        m = (n - 1) / 2;
        for(int j = 0; j <= 1; j++)
        {
            for(int i = 0; i < m; i++) cout << "0" << " ";
            cout << j << " ";
            for(int i = 0; i < m; i++) cout << "0" << " ";
            cout << endl;
            int a[11] = {0}; 
            while(1)
            {
                int vt = -1;
                vector<int> b;
                for(int i = m - 1; i >= 0; i--)
                {
                    if(a[i] == 0)
                    {
                        a[i] = 1;
                        vt = i;
                        break;
                    }
                }
                if(vt == -1) break;
                for(int i = vt + 1; i < m; i++) a[i] = 0;
                for(int i = 0; i < m; i++) b.push_back(a[i]);
                for(int i = 0; i < b.size(); i++) cout << b[i] << " ";
                cout << j << " ";
                for(int i = b.size() - 1; i >= 0; i--) cout << b[i] << " ";
                cout << endl;
            }
        }
    }
}