#include<bits/stdc++.h>
using namespace std;
vector<int > a[1005];
bool chuaxet[1005];
int truoc[1005];
int v,e;
bool dfs(int u){
    stack<int> s;
    s.push(u);
    chuaxet[u]=true;
    while(!s.empty()){
        int x=s.top();
        s.pop();
        for(int i=0;i<a[x].size();i++){
            int y=a[x][i];
            if(chuaxet[y]==false){
                chuaxet[y]=true;
                truoc[y]=x;
                s.push(x);
                s.push(y);
                break;
            }
            else if(chuaxet[y]&&truoc[x]!=y&&truoc[y]!=x) return true;
        }
    }
    return false;
}
bool check(){
    memset(chuaxet,false,1005);
    memset(truoc,0,1005);
    for(int i=1;i<=v;i++){
        if(chuaxet[i]==false&&dfs(i)) return true;
    }
    return false;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>v>>e;
        memset(chuaxet,false,1005);
        memset(truoc,0,1005);
        for(int i=0;i<1005;i++)
        a[i].clear();
        int start,end;
        for(int i=0;i<e;i++){
            cin>>start>>end;
            a[start].push_back(end);
            a[end].push_back(start);
        }
        if(check()) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}