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
int calculate_hight(Node *root)
{
    int left_h,right_h,max_h;
    if(root==NULL)
        return 0;
    else
    {
         left_h=calculate_hight(root->left);
        right_h=calculate_hight(root->right);

        if(left_h>=right_h)
            return left_h+1;
        else
            return right_h+1;
    }

}
int calculate_node(Node *root)
{
    int left_h,right_h,total=0;
    if(root==NULL)
        return 0;
    else
    {
         left_h=calculate_node(root->left);
        right_h=calculate_node(root->right);
        total+=left_h+right_h+1;

    }
    return total;

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

    cout<<"Hight of tree: "<<  calculate_hight(root)<<endl;
    cout<<"Node of tree: "<<  calculate_node(root)<<endl;

}




