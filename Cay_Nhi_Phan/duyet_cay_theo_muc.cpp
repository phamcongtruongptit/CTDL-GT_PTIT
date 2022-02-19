#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *trai;
    node *phai;
    node(int c){
        data=c;
        trai=phai=NULL;
    }
};
void add(int a,int b,char c, node **root){
    if((*root)!=NULL&&(*root)->data==a){
        if(c=='L') (*root)->trai=new node(b);
        if(c=='R') (*root)->phai= new node(b);
    }
    else {
        if((*root)->trai!=NULL) add(a,b,c,&(*root)->trai);
        if((*root)->phai!=NULL) add(a,b,c,&(*root)->phai);
    }
}
void muc(node *root){
    queue<node*> q;
    q.push(root);
    while(!q.empty()){
        node *tmp=q.front();
        cout<<tmp->data<<" ";
        q.pop();
        if(tmp->trai!=NULL) q.push(tmp->trai);
        if(tmp->phai!=NULL) q.push(tmp->phai);
    }
    cout<<endl;
}
void solve(){
        int n,a,b;
        char c;
        cin>>n>>a>>b>>c;
        node *root=new node(a);
        add(a,b,c,&root);
        for(int i=1;i<n;i++){
            cin>>a>>b>>c;
            add(a,b,c,&root);
        }
        muc(root);
        delete root;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve() ; 
    }
}