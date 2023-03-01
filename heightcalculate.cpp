#include<iostream>
using namespace std;


struct Node
{
  Node *left;
  int element;
  Node *right;
  Node(int theElement,Node *theLeft,Node *theRight)
  {
    element = theElement;
    left = theLeft;
    right = theRight;
  }
};

int height(Node *root)
{
  int h = 0;
  if(root != NULL)
  {
    int lHeight = height(root->left);
    int rHeight = height(root->right);
    int maxHeight = max(lHeight,rHeight);
    h = maxHeight + 1;
  }
  return h;
}

int main()
{
  // creating a binary tree with 5 nodes
  Node *n1,*n2,*n3,*n4,*n5;
  n1 = new Node(5,NULL,NULL);
  n2 = new Node(7,NULL,NULL);
  n3 = new Node(6,n1,n2);
  n4 = new Node(9,NULL,NULL);
  n5 = new Node(3,n3,n4);

  cout << "Height of the tree is " << height(n5) << endl;
  return 0;
}
