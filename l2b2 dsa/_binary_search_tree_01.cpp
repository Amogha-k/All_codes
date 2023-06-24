#include <iostream>
using namespace std;

class node
{
public:
    int key;
    node *right;
    node *left;
    node(int val)
    {
        key=val;
        left=NULL;
        right=NULL;
    }
};
class binarysearchtree
{
    public:
    node *root;
    binarysearchtree()
    {
        root=NULL;
    }
    

node* insert(node* root,int val)
{
    if(root==NULL)
     return new node(val);
    else if(root->key<val)
     root->right=insert(root->right,val);
    else if(root->key>val)
    root->left=insert(root->left,val);
}
void inorder(node* root)
{
    if(root==NULL)
    return;
    inorder(root->left);
    cout<<root->key<<" ";
    inorder(root->right);
}
};
int main()
{
    binarysearchtree bst;

    cout<<"Inserting Element: "<<100<<endl;
    bst.root = bst.insert(bst.root,100);
    cout<<"Inserting Element: "<<50<<endl;
    bst.root = bst.insert(bst.root,50);
    cout<<"Inserting Element: "<<150<<endl;
    bst.root = bst.insert(bst.root,150);
    cout<<"Inserting Element: "<<125<<endl;
    bst.root = bst.insert(bst.root,125);
    cout<<"Inorder Traversal of Above BST"<<endl;
    bst.inorder(bst.root);
return 0;
}