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
    vector<vector<int>> ans;
    void level_order(TreeNode* root,int level)
    {
        if(root==NULL)
        {
            return ;
        }
        
        if(ans.size() == level)
        {        
            ans.push_back({});
        }
        ans[level].push_back(root->val);
        level_order(root->left,level+1);
        level_order(root->right,level+1);

        
    }
    vector<vector<int>> levelOrder(TreeNode* root) 
    {
        level_order(root,0);
        return ans;
        
    }
};
