#include<bits/stdc++.h>
using namespace std;

struct node{
int data;
struct node *left,*right;
};
typedef struct node Node;
Node *create_node(int val)
{
    Node *newNode=(Node*)malloc(sizeof(Node));
    newNode->data=val;
    newNode->left=NULL;
    newNode->right=NULL;

    return newNode;
}
void preorder(Node *root)
{
    if(root!=NULL)
    {
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(Node *root)
{
    if(root!=NULL)
    {
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }
}
void inorder(Node *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
         cout<<root->data<<" ";
        inorder(root->right);
    }
}
int main()
{
    Node *root=create_node(1);
    root->left=create_node(2);
    root->right=create_node(3);
    root->left->left=create_node(4);
    root->left->right=create_node(5);
    cout<<"Inorder traversal: ";
    inorder(root);
    cout<<endl;
     cout<<"preorder traversal: ";
    preorder(root);
    cout<<endl;
     cout<<"postorder traversal: ";
    postorder(root);
    cout<<endl;
}

