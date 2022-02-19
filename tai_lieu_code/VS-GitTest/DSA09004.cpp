#include <bits/stdc++.h>
using namespace std;
int v, e, a;
vector<int> ke[1005];
bool chuaXet[1005];
void nhap()
{
    for(int i = 1; i <= 1005; i++)
    {
        ke[i].clear();
        chuaXet[i] = true;
        // sort(ke[i].begin(), ke[i].end());
    }
    cin >> v >> e >> a;
    for(int i = 0; i < e; i++)
    {
        int x, y;
        cin >> x >> y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }
}
// void DFS_Stack(int z)
// {
//     stack<int> s; //khai bao stack s
//     s.push(z); //push dinh dau tien vao stack
//     chuaXet[z] = false; //danh dau dinh dau tien da xet
//     cout << z << " "; //in ra man hinh dinh dau tien
//     while(!s.empty()) //dung duyet neu trong stack khong con dinh nao
//     {
//         z = s.top(); //lay gia tri cua dinh can xet
//         s.pop(); //xoa gia tri khoi stack
//         for(int i = 0; i < ke[z].size(); i++)
//         {
//             int k = ke[z].at(i); //xet cac dinh trong danh sach ke z
//             if(chuaXet[k])
//             {
//                 cout << k << " ";
//                 chuaXet[k] = false; //danh dau k da xet;
//                 s.push(z); //push lai dinh z de quay lai xet huong di khac
//                 s.push(k); //push dinh k vao stack de xet tiep huong di
//             }
//         }
//     }
// }
void DFS_DeQuy(int u)
{
    chuaXet[u] = false;
    cout << u << " ";
    for(int i = 0; i < ke[u].size(); i++)
    {
        int v = ke[u][i];
        if(chuaXet[v])
        {
            DFS_DeQuy(v);
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        nhap();
        DFS_DeQuy(a);
        cout << endl;
    }
}