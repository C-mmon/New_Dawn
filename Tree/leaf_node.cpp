#include <bits/stdc++.h>
using namespace std;
//Deleting a tree
class tree{
public:
  int data;
  tree* left;
  tree* right;
  tree(int data)
  {
    this->data=data;
    this->left=NULL;
    this->right=NULL;
  }
};
int leaf_node(tree* root)
{
  if (root==NULL)
  {
    return 0;
  }
  if(root->left==NULL && root->right==NULL)
  {
    return 1;
  }
  return leaf_node(root->right)+leaf_node(root->left);
}



int main()
{
  tree* root=new tree(1);
  root->left=new tree(2);

  root->right=new tree(3);
  root->right->right=new tree(4);
  root->right->left=new tree(6);
  cout<<leaf_node(root);
  return 0;

}
