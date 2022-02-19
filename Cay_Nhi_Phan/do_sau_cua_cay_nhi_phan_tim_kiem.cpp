
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

vector<int > ans;
void postorder(node *root,int counr){
    if(root==NULL) {
        return;
    }
    if(!root->phai&&!root->trai) ans.push_back(counr);
    postorder(root->trai,counr+1);
    postorder(root->phai,counr+1);
}
void solve(){
    int n;
    cin>>n;
    node *root =NULL;
    for(int i=0;i<n;i++){
        int k;cin>>k;
        addinsert(&root,k);
    }
    ans.clear();
    postorder(root,0);
    sort(ans.begin(),ans.end());
    cout<<ans[ans.size()-1]<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve() ; 

    }
}