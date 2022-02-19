#include<bits/stdc++.h>
using namespace std;
vector<int > L[100005];
bool chuaxet[100005];
int n,m;
void input(){
    cin>>n>>m;
    memset(chuaxet,false,100005);
    for(int i=0;i<100005;i++)
    L[i].clear();
    int d,c;
    for(int i=0;i<m;i++){
        cin>>d>>c;
        L[d].push_back(c);
        L[c].push_back(d);
    }
}
void bfs(int u){
    queue<int> s;
    s.push(u);
    chuaxet[u]=true;
    while(!s.empty()){
        int x=s.front();
        s.pop();
        for(int i=0;i<L[x].size();i++){
            int y=L[x][i];
            if(chuaxet[y]==false){
                s.push(y);
                chuaxet[y]=true;
            }
        }
    }
}
bool check(int k,int x){
    for(int i=0;i<L[k].size();i++){
        if(L[k][i]==x) return true;
    }
    return false;
}
bool perfect(){
    for(int i=1;i<=n;i++){
        memset(chuaxet,false,100005);
        bfs(i);
        for(int j=1;j<=n;j++){
            if(i!=j && chuaxet[j] && !check(i,j)) return false;
        }
    }
    return true;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        input() ; 
        if(perfect()) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
/*Tý đang xây dựng một mạng xã hội và mời các bạn của mình dùng thử. 
Bạn của bạn cũng là bạn. Vì vậy, Tý muốn mạng xã hội của mình là hoàn hảo, 
tức với mọi bộ ba X, Y, Z, nếu X kết bạn với Y, Y kết bạn với Z thì X và Z cũng 
phải là bạn bè của nhau trên mạng xã hội.
Các bạn hãy xác định xem mạng xã hội hiện tại của Tý có là hoàn hảo hay không? 
Nếu có hãy in ra “YES”, “NO” trong trường hợp ngược lại.
Input:
Dòng đầu tiên là số lượng bộ test T (T ≤ 20).
Mỗi test bắt đầu bởi 2 số nguyên N và M (N, M ≤ 100 000).
M dòng tiếp theo, mỗi dòng gồm 2 số nguyên u, v (u #v) cho biết u và v là kết bạn 
với nhau trên mạng xã hội của Tý.
Output: 
Với mỗi test, in ra đáp án tìm được trên một dòng.
3
4 3
1 3
3 4
1 4
4 4
3 1
2 3
3 4
1 2
10 4
4 3
5 10
8 9
1 2

YES
NO
YES
*/