#include<bits/stdc++.h>
using namespace std;

struct node{
int data;
struct node *left,*right;
};



typedef struct node node;
node *create_node(int val)
{
    node *newnode=(node*)malloc(sizeof(node));
    newnode->data=val;
    newnode->left=NULL;
    newnode->right=NULL;

    return newnode
}

void preorder(node *root)
{
    if(root!=NULL)
    {
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);

    }
}
void postorder(node *root)
{
    if(root!=NULL)
    {

        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }
}
void inorder(node *root)
{
    if(root!=NULL)
    {

        inorder(root->left);
        cout<<root->data<<" ";
        iorder(root->right);

    }
}
int calculate_height(node *root)
{
    int left_h,right_h,max_h;
    if(root==NULL)
        return 0;
    else{
         left_h=calculate_height(root->left);
        right_h=calculate_height(root->right);
        max_h=max(left_h,right_h)+1;
    }
    return max_h;
}

int main()
{
    node *root=create_node(1);
    root->left=create_node(2);
    root->right=create_node(3);
    root->left->left=create_node(4);
    root->left->right=create_node(5);
    cout<<"Inorder traversal:";
    inorder(root);
    cout<<endl;
    cout<<"preorder traversal:";
    preorder(root);
    cout<<endl;
    cout<<"postrder traversal:";
    postorder(root);
    cout<<endl;

}
