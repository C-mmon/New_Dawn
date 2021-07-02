#include <bits/stdc++.h>
using namespace std;
//diameter of a binary tree
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
int heightoftree(tree* root)
{
  if(root==NULL)
  {
    return 0;
  }
  else
  {
    return (1+max(heightoftree(root->left),heightoftree(root->right)));
  }
}

int diameter(tree* root)
{
  if(root==NULL)
  {
    return 0;
  }
  int left_height=heightoftree(root->left);

  int right_height=heightoftree(root->right);

  int left_subtree=diameter(root->left);
  int right_subtree=diameter(root->right);
  return max(left_height+right_height+1,max(left_subtree,right_subtree));

}

int main()
{
  tree* root=new tree(1);
  root->left=new tree(2);

  root->right=new tree(3);
  cout<<diameter(root);

  return 0;

}
