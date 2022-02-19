#include<bits/stdc++.h>
using namespace std;
int dem;
struct node{
    int data ;
    node *trai;
    node *phai;
    node(int u){
        data=u;
        trai=phai=NULL;
    }
};

void insert(node **root,int x){
    if((*root)==NULL) {
        (*root)=new node(x);
    }
    else {
        if(x<(*root)->data) insert(&(*root)->trai,x);
        else insert(&(*root)->phai,x);
    }
}
void pos(node *root){
    if(root==NULL) return ;
    if(root->trai&&root->phai) dem++;
    else if(root->trai||root->phai) dem++;
    pos(root->trai);
    pos(root->phai);
}
void solve(){
        int n;
        cin>>n;
        node *root =NULL;
        for(int i=0;i<n;i++){
            int k;cin>>k;
            insert(&root,k);
        }
        dem=0;
        pos(root);
        cout<<dem<<endl;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve() ; 
    }
}