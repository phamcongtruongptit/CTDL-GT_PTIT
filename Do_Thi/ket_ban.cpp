#include<bits/stdc++.h>
using namespace std;
// ý tưởng: duyệt các đỉnh. đỉnh nào duyệt được nhiều hơn thì nhiều bạn nhất
vector<int > L[100005];
bool chuaxet[100005];
int n,m;
int bfs(int u){
    queue<int> s;
    s.push(u);
    int t=1;
    chuaxet[u]=true;
    while(!s.empty()){
        int x=s.front();
        s.pop();
        for(int i=0;i<L[x].size();i++){
            int y=L[x][i];
            if(chuaxet[y]==false){
                t++;
                chuaxet[y]=true;
                s.push(y);
            }
        }
    }
    return t;
}
int check(){
    int count=0;
    for(int i=1;i<=n;i++){
        if(chuaxet[i]==false){ // nếu chưa duyệt thì duyệt để tìm ra được tập hợp bạn
        // hay số đỉnh của 1 thành phần liên thông
            int t=bfs(i);
            count=max(count , t);
        }
    }
    return count;
}
void input(){
        cin>>n>>m;
        memset(chuaxet,false,1005);
        for(int i=0;i<1005;i++)
        L[i].clear();
        int d,c;
        for(int i=0;i<m;i++){
            cin>>d>>c;
            L[d].push_back(c);
            L[c].push_back(d);
        }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        input() ; 
        cout<<check()<<endl;
    }
}
/*Trường học X có N sinh viên, trong đó có M cặp là bạn bè của nhau. Bạn của bạn cũng là bạn, tức 
là nếu A là bạn của B, B là bạn của C thì A và C cũng là bạn bè của nhau.
Các bạn hãy xác định xem số lượng sinh viên nhiều nhất trong một nhóm bạn là bao nhiêu?
Input:
Dòng đầu tiên là số lượng bộ test T (T ≤ 20).
Mỗi test bắt đầu bởi 2 số nguyên N và M (N, M ≤ 100 000).
M dòng tiếp theo, mỗi dòng gồm 2 số nguyên u, v (u #v) cho biết sinh viên u là bạn của sinh viên v.
Output: 
Với mỗi test, in ra đáp án tìm được trên một dòng.
2
3 2
1 2
2 3

10 12
1 2
3 1
3 4
5 4
3 5
4 6
5 2
2 1
7 1
1 2
9 10
8 9

3
7
*/