
#include<iostream>
using namespace std;

struct BSTNode
{
    int data;
    BSTNode *left;
    BSTNode *right;
};

BSTNode* getnewnode(int data)
{
  BSTNode* temp=new BSTNode();
 temp->data=data;
     temp->left=temp->right=NULL;
      return temp;
}

BSTNode* insertnode(struct BSTNode *root,int data)
{
 if(root==NULL)
 {
     root=getnewnode(data);
 }
 else if(data<=root->data)
 {
 root->left=insertnode(root->left,data);
 }
 else
 {
 root->right=insertnode(root->right,data);
 }
 return root;
}

bool search(BSTNode *root,int data)
{
 if(root==NULL) return false;
 else if(root->data==data) return true;
 else if(data<root->data)
  return search(root->left,data);
  else 
  return search(root->right,data);
}

void preorder(BSTNode* root)
{
 if(root==NULL)
 return ;
 else
 {
 cout<<root->data<<" ";
 preorder(root->left);
 preorder(root->right);
 }
}

void inorder(BSTNode* root)
{
 if(root==NULL)
 return ;
 else
 {
 inorder(root->left);
 cout<<root->data<<" ";
 inorder(root->right);
 }
}

void postorder(BSTNode* root)
{
 if(root==NULL)
 return ;
 else
 {
     postorder(root->left);
 postorder(root->right);
     cout<<root->data<<" ";  
 }
}

int findmin(BSTNode* root) //itterative method
{
 if(root==NULL)
 {
 cout<<"\nerror: tree is empty ";
 return -1;
 }
 BSTNode* current=root;
 while(current->left)
 current=current->left;
 return current->data;
}

int findmax(BSTNode* root)   //itterative method find the maximum element
{
 if(root==NULL)
 {
 cout<<"\n error: tree is empty ";
 return -1;
 }
 BSTNode* current=root;
 while(current->right)
 current=current->right;
 return current->data;
}

int recursive_findMin(BSTNode* root)
{
 if(root==NULL)
 {
 cout<<"\n error: tree is empty ";
 return -1;
 }
 else if(root->left==NULL)
  return root->data;
    return recursive_findMin(root->left);
}

int recursive_findMax(BSTNode *root)
{
 if(root==NULL)
 {
 cout<<"\n error: tree is empty ";
 return -1;
 }
 else if(root->right==NULL)
  return root->data;
    return recursive_findMax(root->right);
}

int findHeight(BSTNode* root)
{
 if(root==NULL)
 return -1;
 return max(findHeight(root->left),findHeight(root->right))+1;
}


int main()
{
 int x;
 struct BSTNode* root=NULL;
 root=insertnode(root,10);
    root=insertnode(root,15);
 root=insertnode(root,9);
 root=insertnode(root,8);
    root=insertnode(root,7);
 root=insertnode(root,6);
 cout<<"enter the data to search ";
 cin>>x;
 if(search(root,x)==true)
    cout<<"\n data is found ";
 else 
 cout<<"\n data is not found"; 
 cout<<"\npreorder traversal ";
 preorder(root);
 cout<<"\ninorder traversal ";
 inorder(root); 
 cout<<"\npostorder traversal ";
 postorder(root); 
 cout<<"\n height of tree= "<<findHeight(root);
  cout<<"\n minimum element by itterative method: "<<findmin(root);
  cout<<"\n maximum element by itterative method: "<<findmax(root);
  cout<<"\n minimum element by recursive method : "<< recursive_findMin(root);
    cout<<"\n maximum element by recursive method : "<< recursive_findMax(root);
  return 0;
}
