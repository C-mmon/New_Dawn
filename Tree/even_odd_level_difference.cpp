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
int different(tree* root)
{
  if (root==NULL)
  {
    return 0;
  }
  return root->data-different(root->left)-different(root->right);
}



int main()
{
  tree* root=new tree(1);
  root->left=new tree(2);

  root->right=new tree(3);
  root->right->right=new tree(4);
  cout<<different(root);
  return 0;

}
