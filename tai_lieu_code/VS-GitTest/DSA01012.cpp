#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        vector<string> a;
        a.clear();
        a.push_back("0");
        a.push_back("1");
        int n;
        cin >> n;
        vector<string> tmp;
        tmp.clear();
        for(int i = a.size() - 1; i >= 0; i--) tmp.push_back(a[i]);
        int k = 1;
        while(k < n)
        {
            for(int i = 0; i < a.size(); i++) a[i] = "0" + a[i];
            for(int i = 0; i < tmp.size(); i++)
            {
                tmp[i] = "1" + tmp[i];
                a.push_back(tmp[i]);
            }
            tmp.clear();
            for(int i = a.size() - 1; i >= 0; i--) tmp.push_back(a[i]);
            k++;
        }
        for(int i = 0; i < a.size(); i++) cout << a[i] << " ";
        cout << endl;
    }
}
