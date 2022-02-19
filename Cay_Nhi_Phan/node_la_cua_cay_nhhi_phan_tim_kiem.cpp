#include<bits/stdc++.h>
using namespace std;
struct node{
    int data ;
    node *trai;
    node *phai;
    node(int u){
        data=u;
        trai=phai=NULL;
    }
};
void addinsert(node **root,int x){
    if((*root)==NULL) {
        (*root)=new node(x);
    }
    else {
        if(x<(*root)->data) addinsert(&(*root)->trai,x);
        else addinsert(&(*root)->phai,x);
    }
}
void pos(node *root){
    if(root==NULL) return ;
    if(!root->trai&&!root->phai) cout<<root->data<<" ";
    pos(root->trai);
    pos(root->phai);
    
}
void solve(){
        int n;
        cin>>n;
        node *root =NULL;
        for(int i=0;i<n;i++){
            int tmp;cin>>tmp;
            addinsert(&root,tmp);
        }
        pos(root);
        cout<<endl;

}
int main(){
    int t;
    cin>>t;
    while(t--)solve() ; 
}