#include<bits/stdc++.h>
using namespace std;
int a[105][105], n, m;
void iI(int &inI, int &inJ)
{
    int lim = inI;
    cout << a[inI][inJ] << " ";
    while(inJ > lim)
    {
        inI++; inJ--;
        cout << a[inI][inJ] << " ";
    }
}
void iJ(int &inI, int &inJ)
{
    int lim = inJ;
    cout << a[inI][inJ] << " ";
    while(inI > lim)
    {
        inI--;
        inJ++;
        cout << a[inI][inJ] << " ";
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++) cin >> a[i][j];
        }
        int inI = 0, inJ = 0;
        bool move = true;
        while(inI < n && inJ < m)
        {
            if(!move)
            {
                iI(inI, inJ);
                if(inI == n - 1) inJ++;
                else inI++;
                move = true;
            }
            else
            {
                iJ(inI, inJ);
                if(inJ == m - 1) inI++;
                else inJ++;
                move = false;
            }
        }
        cout << endl;
    }
}