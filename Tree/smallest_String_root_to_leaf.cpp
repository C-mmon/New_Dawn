/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    string ans="~";
    void smallest_string(TreeNode* root,string name)
    {
        if(!root)
            return ;
        name+=char(root->val+'a');
        if(root->left==NULL && root->right==NULL)
        {
            reverse(name.begin(), name.end());
            ans = min(ans,name);
        }
        smallest_string(root->left,name);
        smallest_string(root->right, name);
        
    }
    string smallestFromLeaf(TreeNode* root) 
    {
        smallest_string(root,"");
        return ans;
        
    }
};
