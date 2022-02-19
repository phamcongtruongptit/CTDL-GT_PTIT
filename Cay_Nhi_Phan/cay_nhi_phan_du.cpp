#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *phai;
    node *trai;
    node(int x){
        data=x;
        phai=trai=NULL;
    }
};
void themNode(int u,int v,char x,node **root){
    if((*root)!=NULL&&(*root)->data==u){
        if(x=='L') (*root)->trai= new node(v);
        else (*root)->phai= new node(v);
    }
    else {
        if((*root)->phai){
            themNode(u,v,x,&(*root)->phai);
        }
        if((*root)->trai){
            themNode(u,v,x,&(*root)->trai);
        }
    }
}
bool check(node *root,int level){
    if(root==NULL) return true;
    if(root->trai==NULL&&root->phai==NULL) level++;
    else if(root->trai==NULL||root->phai==NULL) return false;
    return check(root->trai,level)&&check(root->phai,level);
    return true;
}

void solve(){
        int n,u,v;
        char x;
        cin>>n;
        cin>>u>>v>>x;
        node *root= new node(u);
        themNode(u,v,x,&root);
        for(int i=1;i<n;i++){
            cin>>u>>v>>x;
            themNode(u,v,x,&root);
        }
        if(check(root,0)) cout<<"1"<<endl;
        else cout<<"0"<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve() ; 
    }
}