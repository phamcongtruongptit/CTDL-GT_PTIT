#include<bits/stdc++.h>
using namespace std;
struct node{
    int key;
	node*trai;
	node*phai;
	node(int x)
	{
		this->key=x;
		trai=phai=NULL;
	}
};
void themnode(int u,int v,char x,node**root)
{
	if((*root)!=NULL&&(*root)->key==u)
	{
		if(x=='L') (*root)->trai= new node(v);
		else (*root)-> phai=new node(v);
	}
	else
	{
	if((*root)->trai!=NULL) themnode(u,v,x,&(*root)->trai);
	if((*root)->phai!=NULL) themnode(u,v,x,&(*root)->phai);
	}
}
int findADepth(node *node)
{
   int d = 0;
   while (node != NULL)
   {
      d++;
      node = node->trai;
   }
   return d;
}

bool check1( node* root, int d, int level = 0)
{
    if (root == NULL)
        return true;
    if (root->trai == NULL && root->phai == NULL)
        return (d == level+1);
    if (root->trai == NULL || root->phai == NULL)
        return false;
    return check1(root->trai, d, level+1) &&
           check1(root->phai, d, level+1);
}
bool check2(node *root)
{
   int d = findADepth(root);
   return check1(root, d);
}
void solve(){
	int n,u,v;
	char x;
	cin>>n>>u>>v>>x;
	node*root=new node(u);
	themnode(u,v,x,&root);
	for(int i=2;i<=n;i++)
	{
		cin>>u>>v>>x;
		themnode(u,v,x,&root);
	}
	
	 if (check2(root)) cout<<"Yes"<<endl;
	 else cout<<"No"<<endl;
	
		
		
}
main()
{
	int t;cin>>t;
	while(t--){	
		solve() ; 
	}
}