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

void delete_tree(tree* root)
{
  if(root==NULL)
  {
    return;
  }
  delete_tree(root->left);
  delete_tree(root->right);
  delete root;
}


int main()
{
  tree* root=new tree(1);
  root->left=new tree(2);

  root->right=new tree(3);
  root->right->right=new tree(4);
  delete_tree(root);
  root=NULL;

  return 0;

}
