// xay dung cay theo bieu dien level
#include <bits/stdc++.h>
using namespace std;
struct Node {//dinh nghia node tren cay
    int data; //thanh phan du lieu
    struct Node* left;//con tro cay con trai
    struct Node* right;//con tro cay con phai
};
// Tao node roi rac co gia tri val
Node* newNode(int val) {
    Node* temp = new Node;//cap phat mien nho cho node
    temp->data = val;//thiet lap thanh phan du lieu
    temp->left = NULL;//thiet lap lien ket trai
    temp->right = NULL;//thiet lap lien ket phai    
    return temp;
} 
//Duyet theo thu tu giua
void inOrder(struct Node* node){
  	if (node != NULL) {
  		inOrder(node->left);
		printf("%d ", node->data);		  		
		inOrder(node->right);
	}
    return;
} 
//Duyet theo thu tu truoc
void preOrder(struct Node* node){
  	if (node != NULL) {
  		printf("%d ", node->data);
		preOrder(node->left);				  		
		preOrder(node->right);
	}
    return;
}
//Duyet theo thu tu sau
void postOrder(struct Node* node){
  	if (node != NULL) {  		
		postOrder(node->left);				  		
		postOrder(node->right);
		printf("%d ", node->data);
	}
    return;
}
//duyet theo muc
void levelOrder(Node* node){
    // buoc co so 
    if (node == NULL)  //neu cay rong
		return; //khong co gi de duyet  
    // buoc lap: 
    queue<Node *> q; //tao hang doi q      
    q.push(node); //dua node goc vao hang doi  
    while (q.empty() == false) { //lap trong khi queue khong rong        
        Node *node = q.front(); //lay node dau queue
        cout << node->data << " "; //dua ra thanh phan thong tin
        q.pop(); //loai node khoi hang dou          
        if (node->left != NULL) //neu co cay con trai
            q.push(node->left); //dua vao hang doi          
        if (node->right != NULL) //neu co cay con phai
            q.push(node->right); //dua vao hang doi
    } 
}   
// Ham tao cay theo bieu dien Level Oder
Node* buildTree(string str) {   
    // cay khong co node nao 
    if(str.length() == 0 || str[0] == 'N')
            return NULL;    
    // tao vector luu tru cac tu cua string str
    vector<string> ip;    
    istringstream iss(str);//goi iss la doi tuong istringstream
    for(string str; iss >> str; ) //dua tung tu vao vector
        ip.push_back(str);        
    // tao node goc cua cay la phan tu dau tien cua vector
    char s[20]; strcpy(s,ip[0].c_str());
    Node* root = newNode(atoi(s));        
    // dua node goc vao hang doi
    queue<Node*> queue;
    queue.push(root);        
    // bat dau tu muc so 2
    int i = 1;
    while(!queue.empty() && i < ip.size()) {            
        // lay node hien tai va dua r khoi hang doi
        Node* currNode = queue.front();queue.pop();
        // nhan gia tri hien tai tu vector ip
        string currVal = ip[i];            
        // neu node hien tai co cay con trai
        if(currVal != "N") {                            
            //doi currVal thanh char []//doi currVal thanh char []
            strcpy(s,currVal.c_str());
            // thiet lap lien ket trai cho node hien tai
            currNode->left = newNode(atoi(s));                
            // dua node vao hang doi
            queue.push(currNode->left);
        }            
        // doi voi node con ben phai
        i++;//nho phai tang i
        if(i >= ip.size()) //neu i vuot qua size()
            break;//khong con node de them
        currVal = ip[i];//lay gia tri node con phai                    
        // neu node con phai khong la NULL
        if(currVal != "N") {                
            // tao lien ket cho node phai
            strcpy(s, currVal.c_str());
            currNode->right = newNode(atoi(s));                
            // dua no vao hang doi
            queue.push(currNode->right);
        }
        i++;
    }    
    return root;
}
// test solution
int main() {
  	string s = "1 2 3 N N 4 6 N 5 N N 7 N";
  	Node *root = buildTree(s);
  	inOrder(root);cout<<endl;
  	preOrder(roof);cout<<endl;
  	postOder(roof);cout<<endl;
  	levelOrder(root);
}

//
