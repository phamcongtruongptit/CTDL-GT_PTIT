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

void add(int u,int v,char x,node**root)
{
	if((*root)!=NULL&&(*root)->key==u)
	{
		if(x=='L') (*root)->trai= new node(v);
		else (*root)-> phai=new node(v);
	}
	else
	{
	if((*root)->trai!=NULL) add(u,v,x,&(*root)->trai);
	if((*root)->phai!=NULL) add(u,v,x,&(*root)->phai);
	}
}
bool check(int x,int&y,node*root)
{
	x++;
	if(!root->trai&&!root->phai)
	{
		if(y==-1) y=x;
		if(y!=-1&&x!=y) return false;
		if(y!=-1&&x==y) return true;
	}
	if(root->trai)
	{
		if(!check(x,y,root->trai)) return false;
	}
	if(root->phai)
	{
		if(!check(x,y,root->phai)) return false;
	}
	return true;
}
void solve(){
		int n,u,v;
		char x;
		cin>>n>>u>>v>>x;
		node*root=new node(u);
		add(u,v,x,&root);
		for(int i=1;i<n;i++)
		{
			cin>>u>>v>>x;
			add(u,v,x,&root);
		}
		int y=-1;
		cout<<check(0,y,root)<<endl;
}
main()
{
	int t;cin>>t;
	while(t--)	solve() ; 
}