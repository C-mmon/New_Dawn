#include <bits/stdc++.h>
using namespace std;
struct Node{
   int data;
   Node *left, *right;
};
struct Node* create_node(int data){
   struct Node *new_node = new Node;
   new_node->data = data;
   new_node->left = new_node->right = NULL;
   return new_node;
}
//checks if a path from root node to element exists
bool is_path(Node *root, vector<int>& arr, int x){
   if (!root)
      return false;
   arr.push_back(root->data);
   if (root->data == x)
      return true;
   if (is_path(root->left, arr, x) || is_path(root->right, arr, x))
      return true;
   arr.pop_back();
   return false;
}
//printing the path from the root node to the element
void print_path(Node *root, int x){
   vector<int> arr;
   if (is_path(root, arr, x)){
      for (int i=0; i<arr.size()-1; i++)
         cout << arr[i] << " -> ";
         cout << arr[arr.size() - 1];
   }
   else
      cout << "Path doesn't exists" << endl;
}
int main(){
   struct Node *root = create_node(13);
   root->left = create_node(21);
   root->right = create_node(43);
   root->left->left = create_node(34);
   root->left->right = create_node(55);
   root->right->left = create_node(68);
   root->right->right = create_node(79);
   int x = 68;
   print_path(root, x);
   return 0;
}
