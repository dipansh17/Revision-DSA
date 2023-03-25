#include<bits/stdc++.h>
using namespace std;
class Node{
  public:
    int data;
    Node* left;
    Node*right;
    Node(int d){
        data=d;
        left=NULL;
        right=NULL;
    }
};
Node* buildTree(){
cout<<"Enter the value of data"<<endl;
int data;
cin>>data;
if(data==-1)return NULL;
Node* newNode=new Node(data);

cout<<"Enter the value for left child for "<< data<<endl;
newNode->left=buildTree();
cout<<"Enter the value for right child for "<< data<<endl;
newNode->right=buildTree();

return newNode;
}
void preOrder(Node*&root){
    if(root==NULL)return ;
    cout<<root->data;
    preOrder(root->left);
    preOrder(root->right);
}
int main(){
Node* root=NULL;
root=buildTree();
preOrder(root);
    return 0;
}
// 3 5 7 -1 -1 -1 8 3 -1 -1 -1